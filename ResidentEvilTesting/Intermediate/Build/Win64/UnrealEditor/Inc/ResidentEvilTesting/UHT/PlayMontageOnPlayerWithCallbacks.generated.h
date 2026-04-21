// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player Logic/PlayMontageOnPlayerWithCallbacks.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UPlayMontageOnPlayerWithCallbacks;
class USkeletalMeshComponent;
struct FBranchingPointNotifyPayload;
#ifdef RESIDENTEVILTESTING_PlayMontageOnPlayerWithCallbacks_generated_h
#error "PlayMontageOnPlayerWithCallbacks.generated.h already included, missing '#pragma once' in PlayMontageOnPlayerWithCallbacks.h"
#endif
#define RESIDENTEVILTESTING_PlayMontageOnPlayerWithCallbacks_generated_h

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_11_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnMontageOnPlayerDelegate_Parms \
{ \
	FName notifyName; \
}; \
static inline void FOnMontageOnPlayerDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageOnPlayerDelegate, FName notifyName) \
{ \
	_Script_ResidentEvilTesting_eventOnMontageOnPlayerDelegate_Parms Parms; \
	Parms.notifyName=notifyName; \
	OnMontageOnPlayerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_12_DELEGATE \
static inline void FOnPlayerMontageWithCallbacksStart_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerMontageWithCallbacksStart) \
{ \
	OnPlayerMontageWithCallbacksStart.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_13_DELEGATE \
static inline void FOnPlayerMontageWithCallbacksEnd_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerMontageWithCallbacksEnd) \
{ \
	OnPlayerMontageWithCallbacksEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_SPARSE_DATA
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallOnNotifyBegin); \
	DECLARE_FUNCTION(execCallOnCompleted); \
	DECLARE_FUNCTION(execCallOnNotifyEnd); \
	DECLARE_FUNCTION(execCallOnInterrupted); \
	DECLARE_FUNCTION(execCallOnBlendOut); \
	DECLARE_FUNCTION(execPlayMontageOnPlayerWithCallbacks);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallOnNotifyBegin); \
	DECLARE_FUNCTION(execCallOnCompleted); \
	DECLARE_FUNCTION(execCallOnNotifyEnd); \
	DECLARE_FUNCTION(execCallOnInterrupted); \
	DECLARE_FUNCTION(execCallOnBlendOut); \
	DECLARE_FUNCTION(execPlayMontageOnPlayerWithCallbacks);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_ACCESSORS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayMontageOnPlayerWithCallbacks(); \
	friend struct Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics; \
public: \
	DECLARE_CLASS(UPlayMontageOnPlayerWithCallbacks, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(UPlayMontageOnPlayerWithCallbacks)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayMontageOnPlayerWithCallbacks(); \
	friend struct Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics; \
public: \
	DECLARE_CLASS(UPlayMontageOnPlayerWithCallbacks, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(UPlayMontageOnPlayerWithCallbacks)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayMontageOnPlayerWithCallbacks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMontageOnPlayerWithCallbacks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayMontageOnPlayerWithCallbacks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMontageOnPlayerWithCallbacks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayMontageOnPlayerWithCallbacks(UPlayMontageOnPlayerWithCallbacks&&); \
	NO_API UPlayMontageOnPlayerWithCallbacks(const UPlayMontageOnPlayerWithCallbacks&); \
public: \
	NO_API virtual ~UPlayMontageOnPlayerWithCallbacks();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayMontageOnPlayerWithCallbacks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayMontageOnPlayerWithCallbacks(UPlayMontageOnPlayerWithCallbacks&&); \
	NO_API UPlayMontageOnPlayerWithCallbacks(const UPlayMontageOnPlayerWithCallbacks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayMontageOnPlayerWithCallbacks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMontageOnPlayerWithCallbacks); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMontageOnPlayerWithCallbacks) \
	NO_API virtual ~UPlayMontageOnPlayerWithCallbacks();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_14_PROLOG
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_RPC_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_INCLASS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class UPlayMontageOnPlayerWithCallbacks>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
