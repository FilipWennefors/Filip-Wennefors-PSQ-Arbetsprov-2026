// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player Logic/Inventory Logic/PlayerInventorySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImageWidget;
class UKeyItem;
class UNewInventoryItem;
class USpecialItem;
class UTreasureItem;
struct FInventorySlot;
#ifdef RESIDENTEVILTESTING_PlayerInventorySubsystem_generated_h
#error "PlayerInventorySubsystem.generated.h already included, missing '#pragma once' in PlayerInventorySubsystem.h"
#endif
#define RESIDENTEVILTESTING_PlayerInventorySubsystem_generated_h

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_22_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnItemAdded_Parms \
{ \
	UNewInventoryItem* itemAdded; \
}; \
static inline void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, UNewInventoryItem* itemAdded) \
{ \
	_Script_ResidentEvilTesting_eventOnItemAdded_Parms Parms; \
	Parms.itemAdded=itemAdded; \
	OnItemAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_23_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnItemRemoved_Parms \
{ \
	UNewInventoryItem* itemRemoved; \
}; \
static inline void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved, UNewInventoryItem* itemRemoved) \
{ \
	_Script_ResidentEvilTesting_eventOnItemRemoved_Parms Parms; \
	Parms.itemRemoved=itemRemoved; \
	OnItemRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_24_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnItemInfoUpdated_Parms \
{ \
	UNewInventoryItem* itemInfoUpdated; \
}; \
static inline void FOnItemInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnItemInfoUpdated, UNewInventoryItem* itemInfoUpdated) \
{ \
	_Script_ResidentEvilTesting_eventOnItemInfoUpdated_Parms Parms; \
	Parms.itemInfoUpdated=itemInfoUpdated; \
	OnItemInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_25_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnKeyItemAdded_Parms \
{ \
	UKeyItem* itemAdded; \
	int32 itemIndex; \
}; \
static inline void FOnKeyItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnKeyItemAdded, UKeyItem* itemAdded, int32 itemIndex) \
{ \
	_Script_ResidentEvilTesting_eventOnKeyItemAdded_Parms Parms; \
	Parms.itemAdded=itemAdded; \
	Parms.itemIndex=itemIndex; \
	OnKeyItemAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_26_DELEGATE \
struct _Script_ResidentEvilTesting_eventOnTreasureItemAdded_Parms \
{ \
	UTreasureItem* itemAdded; \
	int32 itemIndex; \
}; \
static inline void FOnTreasureItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnTreasureItemAdded, UTreasureItem* itemAdded, int32 itemIndex) \
{ \
	_Script_ResidentEvilTesting_eventOnTreasureItemAdded_Parms Parms; \
	Parms.itemAdded=itemAdded; \
	Parms.itemIndex=itemIndex; \
	OnTreasureItemAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySlot_Statics; \
	RESIDENTEVILTESTING_API static class UScriptStruct* StaticStruct();


template<> RESIDENTEVILTESTING_API UScriptStruct* StaticStruct<struct FInventorySlot>();

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemInfo_Statics; \
	RESIDENTEVILTESTING_API static class UScriptStruct* StaticStruct();


template<> RESIDENTEVILTESTING_API UScriptStruct* StaticStruct<struct FItemInfo>();

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_SPARSE_DATA
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearInventorySlot); \
	DECLARE_FUNCTION(execClearInventorySlots); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execGetAmountOfItemType); \
	DECLARE_FUNCTION(execCheckIfItemFitsSlot); \
	DECLARE_FUNCTION(execAddSpecialItemToInventory); \
	DECLARE_FUNCTION(execTryRemoveItemsFromInventory); \
	DECLARE_FUNCTION(execTryAddItemToInventory); \
	DECLARE_FUNCTION(execGetSlotsToMark); \
	DECLARE_FUNCTION(execMarkSlotsAsOccupied); \
	DECLARE_FUNCTION(execGetInventorySlot); \
	DECLARE_FUNCTION(execGetInventorySize); \
	DECLARE_FUNCTION(execTryGetKeyItemAtIndex); \
	DECLARE_FUNCTION(execGetKeyItems);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearInventorySlot); \
	DECLARE_FUNCTION(execClearInventorySlots); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execGetAmountOfItemType); \
	DECLARE_FUNCTION(execCheckIfItemFitsSlot); \
	DECLARE_FUNCTION(execAddSpecialItemToInventory); \
	DECLARE_FUNCTION(execTryRemoveItemsFromInventory); \
	DECLARE_FUNCTION(execTryAddItemToInventory); \
	DECLARE_FUNCTION(execGetSlotsToMark); \
	DECLARE_FUNCTION(execMarkSlotsAsOccupied); \
	DECLARE_FUNCTION(execGetInventorySlot); \
	DECLARE_FUNCTION(execGetInventorySize); \
	DECLARE_FUNCTION(execTryGetKeyItemAtIndex); \
	DECLARE_FUNCTION(execGetKeyItems);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_ACCESSORS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_CALLBACK_WRAPPERS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInventorySubsystem(); \
	friend struct Z_Construct_UClass_UPlayerInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UPlayerInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInventorySubsystem)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInventorySubsystem(); \
	friend struct Z_Construct_UClass_UPlayerInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UPlayerInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInventorySubsystem)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInventorySubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInventorySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInventorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInventorySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInventorySubsystem(UPlayerInventorySubsystem&&); \
	NO_API UPlayerInventorySubsystem(const UPlayerInventorySubsystem&); \
public: \
	NO_API virtual ~UPlayerInventorySubsystem();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInventorySubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInventorySubsystem(UPlayerInventorySubsystem&&); \
	NO_API UPlayerInventorySubsystem(const UPlayerInventorySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInventorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInventorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInventorySubsystem) \
	NO_API virtual ~UPlayerInventorySubsystem();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_55_PROLOG
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_RPC_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_CALLBACK_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_INCLASS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_CALLBACK_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class UPlayerInventorySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
