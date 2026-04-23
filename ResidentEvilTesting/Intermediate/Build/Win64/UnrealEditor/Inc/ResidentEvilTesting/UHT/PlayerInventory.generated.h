// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI Logic/PlayerInventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImage;
class UNewInventoryItem;
class UWrapBox;
#ifdef RESIDENTEVILTESTING_PlayerInventory_generated_h
#error "PlayerInventory.generated.h already included, missing '#pragma once' in PlayerInventory.h"
#endif
#define RESIDENTEVILTESTING_PlayerInventory_generated_h

#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_SPARSE_DATA
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateSelectedIndex); \
	DECLARE_FUNCTION(execGetFirstIndexViewportPosition); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execClampSelectedIndex);


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateSelectedIndex); \
	DECLARE_FUNCTION(execGetFirstIndexViewportPosition); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execClampSelectedIndex);


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_ACCESSORS
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_CALLBACK_WRAPPERS
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInventory(); \
	friend struct Z_Construct_UClass_UPlayerInventory_Statics; \
public: \
	DECLARE_CLASS(UPlayerInventory, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInventory)


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInventory(); \
	friend struct Z_Construct_UClass_UPlayerInventory_Statics; \
public: \
	DECLARE_CLASS(UPlayerInventory, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInventory)


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInventory(UPlayerInventory&&); \
	NO_API UPlayerInventory(const UPlayerInventory&); \
public: \
	NO_API virtual ~UPlayerInventory();


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInventory(UPlayerInventory&&); \
	NO_API UPlayerInventory(const UPlayerInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInventory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInventory) \
	NO_API virtual ~UPlayerInventory();


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_14_PROLOG
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_SPARSE_DATA \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_RPC_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_ACCESSORS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_CALLBACK_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_INCLASS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_SPARSE_DATA \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_ACCESSORS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_CALLBACK_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_INCLASS_NO_PURE_DECLS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class UPlayerInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
