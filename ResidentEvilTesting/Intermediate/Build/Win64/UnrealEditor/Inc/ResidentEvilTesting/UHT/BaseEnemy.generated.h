// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy Logic/BaseEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASpline;
class UAnimMontage;
class UPrimitiveComponent;
enum class EPatrolType : uint8;
enum class ETakedownType : uint8;
#ifdef RESIDENTEVILTESTING_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define RESIDENTEVILTESTING_BaseEnemy_generated_h

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_SPARSE_DATA
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerDetected); \
	DECLARE_FUNCTION(execShowTakedownIndicator); \
	DECLARE_FUNCTION(execStaggerEnemy); \
	DECLARE_FUNCTION(execCalculateStaggerChance); \
	DECLARE_FUNCTION(execApplyStunEffect); \
	DECLARE_FUNCTION(execKillEnemy); \
	DECLARE_FUNCTION(execSetCollisionResponseToPawn); \
	DECLARE_FUNCTION(execSetCollisionResponseToRagdoll); \
	DECLARE_FUNCTION(execNotifyPlayerPerformsTakedown); \
	DECLARE_FUNCTION(execGetPlayerBackstabPosOffset); \
	DECLARE_FUNCTION(execGetTakedownType); \
	DECLARE_FUNCTION(execGetIsTakedownable); \
	DECLARE_FUNCTION(execGetSpawnTransform); \
	DECLARE_FUNCTION(execGetFollowSpline); \
	DECLARE_FUNCTION(execGetPatrolRadius); \
	DECLARE_FUNCTION(execGetPatrolType); \
	DECLARE_FUNCTION(execGetCanPerformMeleeAttack); \
	DECLARE_FUNCTION(execGetMeleeAttackSpeed); \
	DECLARE_FUNCTION(execGetMeleeAttackAnimMontage);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerDetected); \
	DECLARE_FUNCTION(execShowTakedownIndicator); \
	DECLARE_FUNCTION(execStaggerEnemy); \
	DECLARE_FUNCTION(execCalculateStaggerChance); \
	DECLARE_FUNCTION(execApplyStunEffect); \
	DECLARE_FUNCTION(execKillEnemy); \
	DECLARE_FUNCTION(execSetCollisionResponseToPawn); \
	DECLARE_FUNCTION(execSetCollisionResponseToRagdoll); \
	DECLARE_FUNCTION(execNotifyPlayerPerformsTakedown); \
	DECLARE_FUNCTION(execGetPlayerBackstabPosOffset); \
	DECLARE_FUNCTION(execGetTakedownType); \
	DECLARE_FUNCTION(execGetIsTakedownable); \
	DECLARE_FUNCTION(execGetSpawnTransform); \
	DECLARE_FUNCTION(execGetFollowSpline); \
	DECLARE_FUNCTION(execGetPatrolRadius); \
	DECLARE_FUNCTION(execGetPatrolType); \
	DECLARE_FUNCTION(execGetCanPerformMeleeAttack); \
	DECLARE_FUNCTION(execGetMeleeAttackSpeed); \
	DECLARE_FUNCTION(execGetMeleeAttackAnimMontage);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_ACCESSORS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_CALLBACK_WRAPPERS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	NO_API virtual ~ABaseEnemy();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy) \
	NO_API virtual ~ABaseEnemy();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_16_PROLOG
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_RPC_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_CALLBACK_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_INCLASS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_CALLBACK_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class ABaseEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
