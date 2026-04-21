// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy Logic/DamagableEnemyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
class UShapeComponent;
#ifdef RESIDENTEVILTESTING_DamagableEnemyComponent_generated_h
#error "DamagableEnemyComponent.generated.h already included, missing '#pragma once' in DamagableEnemyComponent.h"
#endif
#define RESIDENTEVILTESTING_DamagableEnemyComponent_generated_h

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_SPARSE_DATA
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_RPC_WRAPPERS \
	virtual void OnOwnerTakePointDamage_Implementation(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser); \
 \
	DECLARE_FUNCTION(execCalculateStaggerChance); \
	DECLARE_FUNCTION(execCheckIfHitComponentIsWeakPoint); \
	DECLARE_FUNCTION(execOnOwnerTakePointDamage);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnOwnerTakePointDamage_Implementation(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser); \
 \
	DECLARE_FUNCTION(execCalculateStaggerChance); \
	DECLARE_FUNCTION(execCheckIfHitComponentIsWeakPoint); \
	DECLARE_FUNCTION(execOnOwnerTakePointDamage);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_ACCESSORS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_CALLBACK_WRAPPERS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamagableEnemyComponent(); \
	friend struct Z_Construct_UClass_UDamagableEnemyComponent_Statics; \
public: \
	DECLARE_CLASS(UDamagableEnemyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(UDamagableEnemyComponent)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDamagableEnemyComponent(); \
	friend struct Z_Construct_UClass_UDamagableEnemyComponent_Statics; \
public: \
	DECLARE_CLASS(UDamagableEnemyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(UDamagableEnemyComponent)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamagableEnemyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamagableEnemyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamagableEnemyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamagableEnemyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamagableEnemyComponent(UDamagableEnemyComponent&&); \
	NO_API UDamagableEnemyComponent(const UDamagableEnemyComponent&); \
public: \
	NO_API virtual ~UDamagableEnemyComponent();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamagableEnemyComponent(UDamagableEnemyComponent&&); \
	NO_API UDamagableEnemyComponent(const UDamagableEnemyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamagableEnemyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamagableEnemyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamagableEnemyComponent) \
	NO_API virtual ~UDamagableEnemyComponent();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_10_PROLOG
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_RPC_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_CALLBACK_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_INCLASS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_CALLBACK_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class UDamagableEnemyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
