// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainGameUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizontalBox;
class UUserWidget;
class UWidgetSwitcher;
#ifdef SPACEINVADERSV2_MainGameUI_generated_h
#error "MainGameUI.generated.h already included, missing '#pragma once' in MainGameUI.h"
#endif
#define SPACEINVADERSV2_MainGameUI_generated_h

#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_SPARSE_DATA
#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleGamePaused); \
	DECLARE_FUNCTION(execRefreshPlayerHealthIcons);


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleGamePaused); \
	DECLARE_FUNCTION(execRefreshPlayerHealthIcons);


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_ACCESSORS
#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_CALLBACK_WRAPPERS
#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainGameUI(); \
	friend struct Z_Construct_UClass_UMainGameUI_Statics; \
public: \
	DECLARE_CLASS(UMainGameUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceInvadersV2"), NO_API) \
	DECLARE_SERIALIZER(UMainGameUI)


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMainGameUI(); \
	friend struct Z_Construct_UClass_UMainGameUI_Statics; \
public: \
	DECLARE_CLASS(UMainGameUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceInvadersV2"), NO_API) \
	DECLARE_SERIALIZER(UMainGameUI)


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainGameUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainGameUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainGameUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainGameUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainGameUI(UMainGameUI&&); \
	NO_API UMainGameUI(const UMainGameUI&); \
public: \
	NO_API virtual ~UMainGameUI();


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainGameUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainGameUI(UMainGameUI&&); \
	NO_API UMainGameUI(const UMainGameUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainGameUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainGameUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainGameUI) \
	NO_API virtual ~UMainGameUI();


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_14_PROLOG
#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_SPARSE_DATA \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_RPC_WRAPPERS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_ACCESSORS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_CALLBACK_WRAPPERS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_INCLASS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_SPARSE_DATA \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_ACCESSORS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_CALLBACK_WRAPPERS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_INCLASS_NO_PURE_DECLS \
	FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADERSV2_API UClass* StaticClass<class UMainGameUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
