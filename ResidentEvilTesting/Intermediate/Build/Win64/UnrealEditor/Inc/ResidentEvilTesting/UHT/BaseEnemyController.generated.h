// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy Logic/BaseEnemyController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBehaviorTree;
struct FAIStimulus;
#ifdef RESIDENTEVILTESTING_BaseEnemyController_generated_h
#error "BaseEnemyController.generated.h already included, missing '#pragma once' in BaseEnemyController.h"
#endif
#define RESIDENTEVILTESTING_BaseEnemyController_generated_h

#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_15_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnDetectedPlayer_Parms \
{ \
	bool bCanDetectPlayer; \
}; \
static inline void FOnDetectedPlayer_DelegateWrapper(const FMulticastScriptDelegate& OnDetectedPlayer, bool bCanDetectPlayer) \
{ \
	_Script_ResidentEvilTesting_eventOnDetectedPlayer_Parms Parms; \
	Parms.bCanDetectPlayer=bCanDetectPlayer ? true : false; \
	OnDetectedPlayer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_SPARSE_DATA
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execSuspendBehaviourTree); \
	DECLARE_FUNCTION(execRunPreScriptedBehaviour);


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execSuspendBehaviourTree); \
	DECLARE_FUNCTION(execRunPreScriptedBehaviour);


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_ACCESSORS
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_CALLBACK_WRAPPERS
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemyController(); \
	friend struct Z_Construct_UClass_ABaseEnemyController_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemyController)


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemyController(); \
	friend struct Z_Construct_UClass_ABaseEnemyController_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemyController)


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemyController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemyController(ABaseEnemyController&&); \
	NO_API ABaseEnemyController(const ABaseEnemyController&); \
public: \
	NO_API virtual ~ABaseEnemyController();


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemyController(ABaseEnemyController&&); \
	NO_API ABaseEnemyController(const ABaseEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemyController) \
	NO_API virtual ~ABaseEnemyController();


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_16_PROLOG
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_SPARSE_DATA \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_RPC_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_ACCESSORS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_CALLBACK_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_INCLASS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_SPARSE_DATA \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_ACCESSORS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_CALLBACK_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_INCLASS_NO_PURE_DECLS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class ABaseEnemyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
