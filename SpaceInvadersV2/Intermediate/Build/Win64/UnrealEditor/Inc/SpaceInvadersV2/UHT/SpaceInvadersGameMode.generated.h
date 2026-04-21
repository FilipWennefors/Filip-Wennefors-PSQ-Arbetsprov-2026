// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpaceInvadersGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef SPACEINVADERSV2_SpaceInvadersGameMode_generated_h
#error "SpaceInvadersGameMode.generated.h already included, missing '#pragma once' in SpaceInvadersGameMode.h"
#endif
#define SPACEINVADERSV2_SpaceInvadersGameMode_generated_h

#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_SPARSE_DATA
#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_RPC_WRAPPERS \
	virtual void OnAllInvadersInvalid_Implementation(); \
 \
	DECLARE_FUNCTION(execCalcActualInvadersWidth); \
	DECLARE_FUNCTION(execMoveInvadersIntoCorrectPos); \
	DECLARE_FUNCTION(execGetInvadersSpawnStartPos); \
	DECLARE_FUNCTION(execGetScreenMiddlePosInWorldSpace); \
	DECLARE_FUNCTION(execGetScreenKeyDimensionsInCamSpace); \
	DECLARE_FUNCTION(execGetInvadersWidth); \
	DECLARE_FUNCTION(execGetScreenMiddleInWorldSpace); \
	DECLARE_FUNCTION(execMoveInvaders); \
	DECLARE_FUNCTION(execOnAllInvadersInvalid); \
	DECLARE_FUNCTION(execResetGameState); \
	DECLARE_FUNCTION(execAllInvadersKilled); \
	DECLARE_FUNCTION(execGetInvaderFarthestToRight); \
	DECLARE_FUNCTION(execGetInvaderFarthestToLeft); \
	DECLARE_FUNCTION(execMoveInvadersV2); \
	DECLARE_FUNCTION(execSpawnInvaders);


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAllInvadersInvalid_Implementation(); \
 \
	DECLARE_FUNCTION(execCalcActualInvadersWidth); \
	DECLARE_FUNCTION(execMoveInvadersIntoCorrectPos); \
	DECLARE_FUNCTION(execGetInvadersSpawnStartPos); \
	DECLARE_FUNCTION(execGetScreenMiddlePosInWorldSpace); \
	DECLARE_FUNCTION(execGetScreenKeyDimensionsInCamSpace); \
	DECLARE_FUNCTION(execGetInvadersWidth); \
	DECLARE_FUNCTION(execGetScreenMiddleInWorldSpace); \
	DECLARE_FUNCTION(execMoveInvaders); \
	DECLARE_FUNCTION(execOnAllInvadersInvalid); \
	DECLARE_FUNCTION(execResetGameState); \
	DECLARE_FUNCTION(execAllInvadersKilled); \
	DECLARE_FUNCTION(execGetInvaderFarthestToRight); \
	DECLARE_FUNCTION(execGetInvaderFarthestToLeft); \
	DECLARE_FUNCTION(execMoveInvadersV2); \
	DECLARE_FUNCTION(execSpawnInvaders);


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_ACCESSORS
#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_CALLBACK_WRAPPERS
#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceInvadersGameMode(); \
	friend struct Z_Construct_UClass_ASpaceInvadersGameMode_Statics; \
public: \
	DECLARE_CLASS(ASpaceInvadersGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvadersV2"), NO_API) \
	DECLARE_SERIALIZER(ASpaceInvadersGameMode)


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpaceInvadersGameMode(); \
	friend struct Z_Construct_UClass_ASpaceInvadersGameMode_Statics; \
public: \
	DECLARE_CLASS(ASpaceInvadersGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvadersV2"), NO_API) \
	DECLARE_SERIALIZER(ASpaceInvadersGameMode)


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceInvadersGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceInvadersGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceInvadersGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceInvadersGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceInvadersGameMode(ASpaceInvadersGameMode&&); \
	NO_API ASpaceInvadersGameMode(const ASpaceInvadersGameMode&); \
public: \
	NO_API virtual ~ASpaceInvadersGameMode();


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceInvadersGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceInvadersGameMode(ASpaceInvadersGameMode&&); \
	NO_API ASpaceInvadersGameMode(const ASpaceInvadersGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceInvadersGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceInvadersGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceInvadersGameMode) \
	NO_API virtual ~ASpaceInvadersGameMode();


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_12_PROLOG
#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_SPARSE_DATA \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_RPC_WRAPPERS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_ACCESSORS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_CALLBACK_WRAPPERS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_INCLASS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_SPARSE_DATA \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_ACCESSORS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_CALLBACK_WRAPPERS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADERSV2_API UClass* StaticClass<class ASpaceInvadersGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
