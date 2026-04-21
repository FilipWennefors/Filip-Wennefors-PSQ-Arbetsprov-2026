// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player Logic/PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AWeaponsBaseClass;
class UAnimMontage;
class UNewInventoryItem;
class USkeletalMeshComponent;
enum class ETakedownType : uint8;
#ifdef RESIDENTEVILTESTING_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define RESIDENTEVILTESTING_PlayerCharacter_generated_h

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_18_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnWeaponWheelInfoUpdate_Parms \
{ \
	TArray<AWeaponsBaseClass*> weaponsInWeaponWheel; \
}; \
static inline void FOnWeaponWheelInfoUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponWheelInfoUpdate, TArray<AWeaponsBaseClass*> const& weaponsInWeaponWheel) \
{ \
	_Script_ResidentEvilTesting_eventOnWeaponWheelInfoUpdate_Parms Parms; \
	Parms.weaponsInWeaponWheel=weaponsInWeaponWheel; \
	OnWeaponWheelInfoUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_19_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnStabClosestEnemy_Parms \
{ \
	ETakedownType takedownTypePerformed; \
}; \
static inline void FOnStabClosestEnemy_DelegateWrapper(const FMulticastScriptDelegate& OnStabClosestEnemy, ETakedownType takedownTypePerformed) \
{ \
	_Script_ResidentEvilTesting_eventOnStabClosestEnemy_Parms Parms; \
	Parms.takedownTypePerformed=takedownTypePerformed; \
	OnStabClosestEnemy.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_SPARSE_DATA
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnItemInfoUpdated); \
	DECLARE_FUNCTION(execOnItemAdded); \
	DECLARE_FUNCTION(execOnMontageWithCallbacksStarted); \
	DECLARE_FUNCTION(execOnMontageWithCallbacksEnded); \
	DECLARE_FUNCTION(execGetLookTowardsCrosshairRotation); \
	DECLARE_FUNCTION(execTryStartSwitchingWeapon); \
	DECLARE_FUNCTION(execPlayTakeDamageAnimations); \
	DECLARE_FUNCTION(execGetIsPlayingMontageOnPlayer); \
	DECLARE_FUNCTION(execPlayAnimationMontageOnPlayer); \
	DECLARE_FUNCTION(execEquipWeaponOtherClass); \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execCanPerformKnifeTakedown); \
	DECLARE_FUNCTION(execCanAimWeapon); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execTryFireWeapon); \
	DECLARE_FUNCTION(execCallOnSelectingWeapon); \
	DECLARE_FUNCTION(execCallOnKnifeInfoUpdated); \
	DECLARE_FUNCTION(execCallOnWeaponInfoUpdated); \
	DECLARE_FUNCTION(execCallOnHealthUpdated); \
	DECLARE_FUNCTION(execMeleeKickGetHitActors); \
	DECLARE_FUNCTION(execCanPerformMeleeKick); \
	DECLARE_FUNCTION(execRecalculateCameraTransform); \
	DECLARE_FUNCTION(execAddCameraRotation); \
	DECLARE_FUNCTION(execCanDamagePlayer); \
	DECLARE_FUNCTION(execCalculateWeaponRaycastOriginPos); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetIsAiming);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnItemInfoUpdated); \
	DECLARE_FUNCTION(execOnItemAdded); \
	DECLARE_FUNCTION(execOnMontageWithCallbacksStarted); \
	DECLARE_FUNCTION(execOnMontageWithCallbacksEnded); \
	DECLARE_FUNCTION(execGetLookTowardsCrosshairRotation); \
	DECLARE_FUNCTION(execTryStartSwitchingWeapon); \
	DECLARE_FUNCTION(execPlayTakeDamageAnimations); \
	DECLARE_FUNCTION(execGetIsPlayingMontageOnPlayer); \
	DECLARE_FUNCTION(execPlayAnimationMontageOnPlayer); \
	DECLARE_FUNCTION(execEquipWeaponOtherClass); \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execCanPerformKnifeTakedown); \
	DECLARE_FUNCTION(execCanAimWeapon); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execTryFireWeapon); \
	DECLARE_FUNCTION(execCallOnSelectingWeapon); \
	DECLARE_FUNCTION(execCallOnKnifeInfoUpdated); \
	DECLARE_FUNCTION(execCallOnWeaponInfoUpdated); \
	DECLARE_FUNCTION(execCallOnHealthUpdated); \
	DECLARE_FUNCTION(execMeleeKickGetHitActors); \
	DECLARE_FUNCTION(execCanPerformMeleeKick); \
	DECLARE_FUNCTION(execRecalculateCameraTransform); \
	DECLARE_FUNCTION(execAddCameraRotation); \
	DECLARE_FUNCTION(execCanDamagePlayer); \
	DECLARE_FUNCTION(execCalculateWeaponRaycastOriginPos); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetIsAiming);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_ACCESSORS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_CALLBACK_WRAPPERS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	NO_API virtual ~APlayerCharacter();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_24_PROLOG
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_RPC_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_CALLBACK_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_INCLASS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_CALLBACK_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
