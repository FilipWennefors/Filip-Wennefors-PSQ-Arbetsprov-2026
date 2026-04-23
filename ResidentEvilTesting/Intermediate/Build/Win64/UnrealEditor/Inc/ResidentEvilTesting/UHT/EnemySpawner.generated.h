// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy Logic/EnemySpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseEnemy;
#ifdef RESIDENTEVILTESTING_EnemySpawner_generated_h
#error "EnemySpawner.generated.h already included, missing '#pragma once' in EnemySpawner.h"
#endif
#define RESIDENTEVILTESTING_EnemySpawner_generated_h

#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_11_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnEnemySpawned_Parms \
{ \
	ABaseEnemy* enemySpawned; \
}; \
static inline void FOnEnemySpawned_DelegateWrapper(const FMulticastScriptDelegate& OnEnemySpawned, ABaseEnemy* enemySpawned) \
{ \
	_Script_ResidentEvilTesting_eventOnEnemySpawned_Parms Parms; \
	Parms.enemySpawned=enemySpawned; \
	OnEnemySpawned.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_SPARSE_DATA
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnemySpawnerOnScreen);


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnemySpawnerOnScreen);


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_ACCESSORS
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, APlayerStart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, APlayerStart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemySpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public: \
	NO_API virtual ~AEnemySpawner();


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawner) \
	NO_API virtual ~AEnemySpawner();


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_12_PROLOG
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_SPARSE_DATA \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_RPC_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_ACCESSORS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_INCLASS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_SPARSE_DATA \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_ACCESSORS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_INCLASS_NO_PURE_DECLS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class AEnemySpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
