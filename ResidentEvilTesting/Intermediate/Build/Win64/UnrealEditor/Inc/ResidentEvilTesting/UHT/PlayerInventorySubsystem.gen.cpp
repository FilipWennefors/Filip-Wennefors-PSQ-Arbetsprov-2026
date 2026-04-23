// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventorySubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UImageWidget_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UKeyItem_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UNewInventoryItem_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UPlayerInventorySubsystem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UPlayerInventorySubsystem_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_USpecialItem_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UTreasureItem_NoRegister();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FItemInfo();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnItemAdded_Parms
		{
			UNewInventoryItem* itemAdded;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemAdded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::NewProp_itemAdded = { "itemAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnItemAdded_Parms, itemAdded), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::NewProp_itemAdded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**Create a TMap to keep track of all items in the inventory and their amount\n *https://dev.epicgames.com/documentation/en-us/unreal-engine/tmap?application_version=4.27#queries\n *https://www.youtube.com/watch?v=-GEaYx-Bba8 Pobato on TMaps\n *https://www.reddit.com/r/unrealengine/comments/ydbaee/c_tmap/\n *TMap also only allows one of each key which could either be perfect or disastrous\n * \n */" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "ToolTip", "Create a TMap to keep track of all items in the inventory and their amount\nhttps://dev.epicgames.com/documentation/en-us/unreal-engine/tmap?application_version=4.27#queries\nhttps://www.youtube.com/watch?v=-GEaYx-Bba8 Pobato on TMaps\nhttps://www.reddit.com/r/unrealengine/comments/ydbaee/c_tmap/\nTMap also only allows one of each key which could either be perfect or disastrous" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnItemAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnItemAdded_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnItemRemoved_Parms
		{
			UNewInventoryItem* itemRemoved;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemRemoved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::NewProp_itemRemoved = { "itemRemoved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnItemRemoved_Parms, itemRemoved), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::NewProp_itemRemoved,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnItemRemoved__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnItemRemoved_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnItemInfoUpdated_Parms
		{
			UNewInventoryItem* itemInfoUpdated;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemInfoUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::NewProp_itemInfoUpdated = { "itemInfoUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnItemInfoUpdated_Parms, itemInfoUpdated), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::NewProp_itemInfoUpdated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnItemInfoUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnItemInfoUpdated_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnKeyItemAdded_Parms
		{
			UKeyItem* itemAdded;
			int32 itemIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemAdded;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_itemIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::NewProp_itemAdded = { "itemAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnKeyItemAdded_Parms, itemAdded), Z_Construct_UClass_UKeyItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnKeyItemAdded_Parms, itemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::NewProp_itemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::NewProp_itemIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnKeyItemAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnKeyItemAdded_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnTreasureItemAdded_Parms
		{
			UTreasureItem* itemAdded;
			int32 itemIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemAdded;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_itemIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::NewProp_itemAdded = { "itemAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnTreasureItemAdded_Parms, itemAdded), Z_Construct_UClass_UTreasureItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnTreasureItemAdded_Parms, itemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::NewProp_itemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::NewProp_itemIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnTreasureItemAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnTreasureItemAdded_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventorySlot;
class UScriptStruct* FInventorySlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventorySlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySlot, Z_Construct_UPackage__Script_ResidentEvilTesting(), TEXT("InventorySlot"));
	}
	return Z_Registration_Info_UScriptStruct_InventorySlot.OuterSingleton;
}
template<> RESIDENTEVILTESTING_API UScriptStruct* StaticStruct<FInventorySlot>()
{
	return FInventorySlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventorySlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOccupied_MetaData[];
#endif
		static void NewProp_bIsOccupied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOccupied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemInSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemInSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_imageWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_bIsOccupied_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_bIsOccupied_SetBit(void* Obj)
	{
		((FInventorySlot*)Obj)->bIsOccupied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_bIsOccupied = { "bIsOccupied", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInventorySlot), &Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_bIsOccupied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_bIsOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_bIsOccupied_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_itemInSlot_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_itemInSlot = { "itemInSlot", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventorySlot, itemInSlot), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_itemInSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_itemInSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_imageWidget_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_imageWidget = { "imageWidget", nullptr, (EPropertyFlags)0x001100000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInventorySlot, imageWidget), Z_Construct_UClass_UImageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_imageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_imageWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_bIsOccupied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_itemInSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_imageWidget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
		nullptr,
		&NewStructOps,
		"InventorySlot",
		sizeof(FInventorySlot),
		alignof(FInventorySlot),
		Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot()
	{
		if (!Z_Registration_Info_UScriptStruct_InventorySlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventorySlot.InnerSingleton, Z_Construct_UScriptStruct_FInventorySlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventorySlot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemInfo;
class UScriptStruct* FItemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInfo, Z_Construct_UPackage__Script_ResidentEvilTesting(), TEXT("ItemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ItemInfo.OuterSingleton;
}
template<> RESIDENTEVILTESTING_API UScriptStruct* StaticStruct<FItemInfo>()
{
	return FItemInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_itemCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFirstTimePickedUp_MetaData[];
#endif
		static void NewProp_bFirstTimePickedUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstTimePickedUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_itemCount_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_itemCount = { "itemCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemInfo, itemCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_itemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_itemCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_bFirstTimePickedUp_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_bFirstTimePickedUp_SetBit(void* Obj)
	{
		((FItemInfo*)Obj)->bFirstTimePickedUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_bFirstTimePickedUp = { "bFirstTimePickedUp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FItemInfo), &Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_bFirstTimePickedUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_bFirstTimePickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_bFirstTimePickedUp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_itemCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfo_Statics::NewProp_bFirstTimePickedUp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
		nullptr,
		&NewStructOps,
		"ItemInfo",
		sizeof(FItemInfo),
		alignof(FItemInfo),
		Z_Construct_UScriptStruct_FItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemInfo.InnerSingleton, Z_Construct_UScriptStruct_FItemInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execClearInventorySlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_OBJECT(UImageWidget,Z_Param_imageWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInventorySlot(Z_Param_index,Z_Param_imageWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execClearInventorySlots)
	{
		P_GET_STRUCT(FVector2D,Z_Param_itemSize);
		P_GET_STRUCT(FVector2D,Z_Param_itemPosition);
		P_GET_UBOOL(Z_Param_bIsRotated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInventorySlots(Z_Param_itemSize,Z_Param_itemPosition,Z_Param_bIsRotated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execRemoveItemFromInventory)
	{
		P_GET_OBJECT(UNewInventoryItem,Z_Param_itemToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemFromInventory(Z_Param_itemToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execGetAmountOfItemType)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAmountOfItemType(Z_Param_itemClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execCheckIfItemFitsSlot)
	{
		P_GET_STRUCT(FVector2D,Z_Param_itemPosition);
		P_GET_STRUCT(FVector2D,Z_Param_itemSize);
		P_GET_UBOOL(Z_Param_bIsRotated);
		P_GET_OBJECT(UNewInventoryItem,Z_Param_itemToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIfItemFitsSlot(Z_Param_itemPosition,Z_Param_itemSize,Z_Param_bIsRotated,Z_Param_itemToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execAddSpecialItemToInventory)
	{
		P_GET_OBJECT(USpecialItem,Z_Param_itemAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSpecialItemToInventory(Z_Param_itemAdded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execTryRemoveItemsFromInventory)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_itemCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryRemoveItemsFromInventory(Z_Param_itemClass,Z_Param_itemCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execTryAddItemToInventory)
	{
		P_GET_OBJECT(UNewInventoryItem,Z_Param_itemAdded);
		P_GET_PROPERTY(FIntProperty,Z_Param_itemCount);
		P_GET_UBOOL_REF(Z_Param_Out_bIsItemRotated);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_outItemPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryAddItemToInventory(Z_Param_itemAdded,Z_Param_itemCount,Z_Param_Out_bIsItemRotated,Z_Param_Out_outItemPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execGetSlotsToMark)
	{
		P_GET_STRUCT(FVector2D,Z_Param_itemSize);
		P_GET_STRUCT(FVector2D,Z_Param_inventoryPosition);
		P_GET_TARRAY_REF(int32,Z_Param_Out_slotsToMark);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lastIndex);
		P_GET_UBOOL(Z_Param_bIsRotated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSlotsToMark(Z_Param_itemSize,Z_Param_inventoryPosition,Z_Param_Out_slotsToMark,Z_Param_Out_lastIndex,Z_Param_bIsRotated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execMarkSlotsAsOccupied)
	{
		P_GET_OBJECT(UNewInventoryItem,Z_Param_itemAdded);
		P_GET_UBOOL(Z_Param_bIsRotated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkSlotsAsOccupied(Z_Param_itemAdded,Z_Param_bIsRotated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execGetInventorySlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInventorySlot*)Z_Param__Result=P_THIS->GetInventorySlot(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execGetInventorySize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetInventorySize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execTryGetKeyItemAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_OBJECT_REF(UKeyItem,Z_Param_Out_keyItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetKeyItemAtIndex(Z_Param_index,Z_Param_Out_keyItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventorySubsystem::execGetKeyItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UKeyItem*>*)Z_Param__Result=P_THIS->GetKeyItems();
		P_NATIVE_END;
	}
	static FName NAME_UPlayerInventorySubsystem_OnInitializedBP = FName(TEXT("OnInitializedBP"));
	void UPlayerInventorySubsystem::OnInitializedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerInventorySubsystem_OnInitializedBP),NULL);
	}
	void UPlayerInventorySubsystem::StaticRegisterNativesUPlayerInventorySubsystem()
	{
		UClass* Class = UPlayerInventorySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSpecialItemToInventory", &UPlayerInventorySubsystem::execAddSpecialItemToInventory },
			{ "CheckIfItemFitsSlot", &UPlayerInventorySubsystem::execCheckIfItemFitsSlot },
			{ "ClearInventorySlot", &UPlayerInventorySubsystem::execClearInventorySlot },
			{ "ClearInventorySlots", &UPlayerInventorySubsystem::execClearInventorySlots },
			{ "GetAmountOfItemType", &UPlayerInventorySubsystem::execGetAmountOfItemType },
			{ "GetInventorySize", &UPlayerInventorySubsystem::execGetInventorySize },
			{ "GetInventorySlot", &UPlayerInventorySubsystem::execGetInventorySlot },
			{ "GetKeyItems", &UPlayerInventorySubsystem::execGetKeyItems },
			{ "GetSlotsToMark", &UPlayerInventorySubsystem::execGetSlotsToMark },
			{ "MarkSlotsAsOccupied", &UPlayerInventorySubsystem::execMarkSlotsAsOccupied },
			{ "RemoveItemFromInventory", &UPlayerInventorySubsystem::execRemoveItemFromInventory },
			{ "TryAddItemToInventory", &UPlayerInventorySubsystem::execTryAddItemToInventory },
			{ "TryGetKeyItemAtIndex", &UPlayerInventorySubsystem::execTryGetKeyItemAtIndex },
			{ "TryRemoveItemsFromInventory", &UPlayerInventorySubsystem::execTryRemoveItemsFromInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics
	{
		struct PlayerInventorySubsystem_eventAddSpecialItemToInventory_Parms
		{
			USpecialItem* itemAdded;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemAdded;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::NewProp_itemAdded = { "itemAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventAddSpecialItemToInventory_Parms, itemAdded), Z_Construct_UClass_USpecialItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventAddSpecialItemToInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventAddSpecialItemToInventory_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::NewProp_itemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "//For mission items, keys, treasures, etc\n" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "ToolTip", "For mission items, keys, treasures, etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "AddSpecialItemToInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::PlayerInventorySubsystem_eventAddSpecialItemToInventory_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics
	{
		struct PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms
		{
			FVector2D itemPosition;
			FVector2D itemSize;
			bool bIsRotated;
			UNewInventoryItem* itemToAdd;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSize;
		static void NewProp_bIsRotated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotated;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemToAdd;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_itemPosition = { "itemPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms, itemPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_itemSize = { "itemSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms, itemSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_bIsRotated_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms*)Obj)->bIsRotated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_bIsRotated = { "bIsRotated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_bIsRotated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_itemToAdd = { "itemToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms, itemToAdd), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_itemPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_itemSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_bIsRotated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_itemToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "//Used to see if an items fits in an inventory slot, will return false if it is blocked by another item\n" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "ToolTip", "Used to see if an items fits in an inventory slot, will return false if it is blocked by another item" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "CheckIfItemFitsSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::PlayerInventorySubsystem_eventCheckIfItemFitsSlot_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics
	{
		struct PlayerInventorySubsystem_eventClearInventorySlot_Parms
		{
			int32 index;
			UImageWidget* imageWidget;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_imageWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventClearInventorySlot_Parms, index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::NewProp_imageWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::NewProp_imageWidget = { "imageWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventClearInventorySlot_Parms, imageWidget), Z_Construct_UClass_UImageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::NewProp_imageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::NewProp_imageWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::NewProp_imageWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "ClearInventorySlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::PlayerInventorySubsystem_eventClearInventorySlot_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics
	{
		struct PlayerInventorySubsystem_eventClearInventorySlots_Parms
		{
			FVector2D itemSize;
			FVector2D itemPosition;
			bool bIsRotated;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemPosition;
		static void NewProp_bIsRotated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::NewProp_itemSize = { "itemSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventClearInventorySlots_Parms, itemSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::NewProp_itemPosition = { "itemPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventClearInventorySlots_Parms, itemPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::NewProp_bIsRotated_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventClearInventorySlots_Parms*)Obj)->bIsRotated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::NewProp_bIsRotated = { "bIsRotated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventClearInventorySlots_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::NewProp_bIsRotated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::NewProp_itemSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::NewProp_itemPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::NewProp_bIsRotated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "ClearInventorySlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::PlayerInventorySubsystem_eventClearInventorySlots_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics
	{
		struct PlayerInventorySubsystem_eventGetAmountOfItemType_Parms
		{
			TSubclassOf<UNewInventoryItem>  itemClass;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetAmountOfItemType_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetAmountOfItemType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "GetAmountOfItemType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::PlayerInventorySubsystem_eventGetAmountOfItemType_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics
	{
		struct PlayerInventorySubsystem_eventGetInventorySize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetInventorySize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "//Getter for how many slots the inventory is in length and height\n" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "ToolTip", "Getter for how many slots the inventory is in length and height" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "GetInventorySize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::PlayerInventorySubsystem_eventGetInventorySize_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics
	{
		struct PlayerInventorySubsystem_eventGetInventorySlot_Parms
		{
			int32 x;
			int32 y;
			FInventorySlot ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetInventorySlot_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetInventorySlot_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetInventorySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(nullptr, 0) }; // 3009413277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "GetInventorySlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::PlayerInventorySubsystem_eventGetInventorySlot_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics
	{
		struct PlayerInventorySubsystem_eventGetKeyItems_Parms
		{
			TArray<UKeyItem*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UKeyItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetKeyItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "//Getter for items not placed in the attache case, ie keys, treasures, and mission items\n" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "ToolTip", "Getter for items not placed in the attache case, ie keys, treasures, and mission items" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "GetKeyItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::PlayerInventorySubsystem_eventGetKeyItems_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics
	{
		struct PlayerInventorySubsystem_eventGetSlotsToMark_Parms
		{
			FVector2D itemSize;
			FVector2D inventoryPosition;
			TArray<int32> slotsToMark;
			int32 lastIndex;
			bool bIsRotated;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_inventoryPosition;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_slotsToMark_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_slotsToMark;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lastIndex;
		static void NewProp_bIsRotated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_itemSize = { "itemSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetSlotsToMark_Parms, itemSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_inventoryPosition = { "inventoryPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetSlotsToMark_Parms, inventoryPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_slotsToMark_Inner = { "slotsToMark", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_slotsToMark = { "slotsToMark", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetSlotsToMark_Parms, slotsToMark), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_lastIndex = { "lastIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventGetSlotsToMark_Parms, lastIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_bIsRotated_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventGetSlotsToMark_Parms*)Obj)->bIsRotated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_bIsRotated = { "bIsRotated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventGetSlotsToMark_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_bIsRotated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_itemSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_inventoryPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_slotsToMark_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_slotsToMark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_lastIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::NewProp_bIsRotated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "GetSlotsToMark", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::PlayerInventorySubsystem_eventGetSlotsToMark_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics
	{
		struct PlayerInventorySubsystem_eventMarkSlotsAsOccupied_Parms
		{
			UNewInventoryItem* itemAdded;
			bool bIsRotated;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemAdded;
		static void NewProp_bIsRotated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::NewProp_itemAdded = { "itemAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventMarkSlotsAsOccupied_Parms, itemAdded), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::NewProp_bIsRotated_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventMarkSlotsAsOccupied_Parms*)Obj)->bIsRotated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::NewProp_bIsRotated = { "bIsRotated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventMarkSlotsAsOccupied_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::NewProp_bIsRotated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::NewProp_itemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::NewProp_bIsRotated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "MarkSlotsAsOccupied", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::PlayerInventorySubsystem_eventMarkSlotsAsOccupied_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_OnInitializedBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_OnInitializedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_OnInitializedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "OnInitializedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_OnInitializedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_OnInitializedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_OnInitializedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_OnInitializedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics
	{
		struct PlayerInventorySubsystem_eventRemoveItemFromInventory_Parms
		{
			UNewInventoryItem* itemToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::NewProp_itemToRemove = { "itemToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventRemoveItemFromInventory_Parms, itemToRemove), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::NewProp_itemToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "RemoveItemFromInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::PlayerInventorySubsystem_eventRemoveItemFromInventory_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics
	{
		struct PlayerInventorySubsystem_eventTryAddItemToInventory_Parms
		{
			UNewInventoryItem* itemAdded;
			int32 itemCount;
			bool bIsItemRotated;
			FVector2D outItemPosition;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemAdded;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_itemCount;
		static void NewProp_bIsItemRotated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsItemRotated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItemPosition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_itemAdded = { "itemAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventTryAddItemToInventory_Parms, itemAdded), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_itemCount = { "itemCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventTryAddItemToInventory_Parms, itemCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_bIsItemRotated_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventTryAddItemToInventory_Parms*)Obj)->bIsItemRotated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_bIsItemRotated = { "bIsItemRotated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventTryAddItemToInventory_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_bIsItemRotated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_outItemPosition = { "outItemPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventTryAddItemToInventory_Parms, outItemPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventTryAddItemToInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventTryAddItemToInventory_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_itemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_itemCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_bIsItemRotated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_outItemPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "//Used for adding items to the attache case. This is for ammo, weapons, grenades etc\n" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "ToolTip", "Used for adding items to the attache case. This is for ammo, weapons, grenades etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "TryAddItemToInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::PlayerInventorySubsystem_eventTryAddItemToInventory_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics
	{
		struct PlayerInventorySubsystem_eventTryGetKeyItemAtIndex_Parms
		{
			int32 index;
			UKeyItem* keyItem;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_keyItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventTryGetKeyItemAtIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::NewProp_keyItem = { "keyItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventTryGetKeyItemAtIndex_Parms, keyItem), Z_Construct_UClass_UKeyItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventTryGetKeyItemAtIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventTryGetKeyItemAtIndex_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::NewProp_keyItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "TryGetKeyItemAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::PlayerInventorySubsystem_eventTryGetKeyItemAtIndex_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics
	{
		struct PlayerInventorySubsystem_eventTryRemoveItemsFromInventory_Parms
		{
			TSubclassOf<UNewInventoryItem>  itemClass;
			int32 itemCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_itemCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventTryRemoveItemsFromInventory_Parms, itemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::NewProp_itemCount = { "itemCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventorySubsystem_eventTryRemoveItemsFromInventory_Parms, itemCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerInventorySubsystem_eventTryRemoveItemsFromInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerInventorySubsystem_eventTryRemoveItemsFromInventory_Parms), &Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::NewProp_itemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::NewProp_itemCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "//Used to remove a certain amount of an item from the attache case. Returns true if the amount of items has been removed\n" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "ToolTip", "Used to remove a certain amount of an item from the attache case. Returns true if the amount of items has been removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventorySubsystem, nullptr, "TryRemoveItemsFromInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::PlayerInventorySubsystem_eventTryRemoveItemsFromInventory_Parms), Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInventorySubsystem);
	UClass* Z_Construct_UClass_UPlayerInventorySubsystem_NoRegister()
	{
		return UPlayerInventorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInventorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemInfoUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemInfoUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnKeyItemAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyItemAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTreasureItemAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTreasureItemAdded;
		static const UECodeGen_Private::FStructPropertyParams NewProp_itemInformation_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_itemInformation_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemInformation_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_itemInformation;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amountOfEachItem_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfEachItem_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountOfEachItem_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_amountOfEachItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_keyItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_keyItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_keyItems;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_treasureItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_treasureItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_treasureItems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_inventorySlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inventorySlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inventorySlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInventorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInventorySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_AddSpecialItemToInventory, "AddSpecialItemToInventory" }, // 4156109790
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_CheckIfItemFitsSlot, "CheckIfItemFitsSlot" }, // 2544291684
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlot, "ClearInventorySlot" }, // 253286840
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_ClearInventorySlots, "ClearInventorySlots" }, // 3418763954
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_GetAmountOfItemType, "GetAmountOfItemType" }, // 3251546257
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySize, "GetInventorySize" }, // 2382873787
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_GetInventorySlot, "GetInventorySlot" }, // 919325848
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_GetKeyItems, "GetKeyItems" }, // 1535730562
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_GetSlotsToMark, "GetSlotsToMark" }, // 966919034
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_MarkSlotsAsOccupied, "MarkSlotsAsOccupied" }, // 2891865461
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_OnInitializedBP, "OnInitializedBP" }, // 2628315120
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_RemoveItemFromInventory, "RemoveItemFromInventory" }, // 1260313180
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_TryAddItemToInventory, "TryAddItemToInventory" }, // 2334737823
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_TryGetKeyItemAtIndex, "TryGetKeyItemAtIndex" }, // 2030085453
		{ &Z_Construct_UFunction_UPlayerInventorySubsystem_TryRemoveItemsFromInventory, "TryRemoveItemsFromInventory" }, // 2747690298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemAdded_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, OnItemAdded), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemAdded_MetaData)) }; // 2650304053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemRemoved = { "OnItemRemoved", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, OnItemRemoved), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemRemoved_MetaData)) }; // 2907208624
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemInfoUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemInfoUpdated = { "OnItemInfoUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, OnItemInfoUpdated), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnItemInfoUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemInfoUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemInfoUpdated_MetaData)) }; // 3704252789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnKeyItemAdded_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnKeyItemAdded = { "OnKeyItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, OnKeyItemAdded), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnKeyItemAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnKeyItemAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnKeyItemAdded_MetaData)) }; // 2453556401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnTreasureItemAdded_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnTreasureItemAdded = { "OnTreasureItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, OnTreasureItemAdded), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnTreasureItemAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnTreasureItemAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnTreasureItemAdded_MetaData)) }; // 744924348
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation_ValueProp = { "itemInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FItemInfo, METADATA_PARAMS(nullptr, 0) }; // 1170477693
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation_Key_KeyProp = { "itemInformation_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Takes in the item class name as the FString and will spit out how many exist in the inventory. Might be modified in the future to store more information\n" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
		{ "ToolTip", "Takes in the item class name as the FString and will spit out how many exist in the inventory. Might be modified in the future to store more information" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation = { "itemInformation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, itemInformation), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation_MetaData)) }; // 1170477693
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem_ValueProp = { "amountOfEachItem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem_Key_KeyProp = { "amountOfEachItem_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem = { "amountOfEachItem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, amountOfEachItem), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_keyItems_Inner = { "keyItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UKeyItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_keyItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_keyItems = { "keyItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, keyItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_keyItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_keyItems_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_treasureItems_Inner = { "treasureItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTreasureItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_treasureItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_treasureItems = { "treasureItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, treasureItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_treasureItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_treasureItems_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_inventorySlots_Inner = { "inventorySlots", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(nullptr, 0) }; // 3009413277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_inventorySlots_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player Logic/Inventory Logic/PlayerInventorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_inventorySlots = { "inventorySlots", nullptr, (EPropertyFlags)0x0040008000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInventorySubsystem, inventorySlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_inventorySlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_inventorySlots_MetaData)) }; // 3009413277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInventorySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnItemInfoUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnKeyItemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_OnTreasureItemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_itemInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_amountOfEachItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_keyItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_keyItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_treasureItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_treasureItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_inventorySlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventorySubsystem_Statics::NewProp_inventorySlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInventorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventorySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventorySubsystem_Statics::ClassParams = {
		&UPlayerInventorySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInventorySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventorySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInventorySubsystem()
	{
		if (!Z_Registration_Info_UClass_UPlayerInventorySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInventorySubsystem.OuterSingleton, Z_Construct_UClass_UPlayerInventorySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInventorySubsystem.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UPlayerInventorySubsystem>()
	{
		return UPlayerInventorySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventorySubsystem);
	UPlayerInventorySubsystem::~UPlayerInventorySubsystem() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_Statics::ScriptStructInfo[] = {
		{ FInventorySlot::StaticStruct, Z_Construct_UScriptStruct_FInventorySlot_Statics::NewStructOps, TEXT("InventorySlot"), &Z_Registration_Info_UScriptStruct_InventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySlot), 3009413277U) },
		{ FItemInfo::StaticStruct, Z_Construct_UScriptStruct_FItemInfo_Statics::NewStructOps, TEXT("ItemInfo"), &Z_Registration_Info_UScriptStruct_ItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemInfo), 1170477693U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInventorySubsystem, UPlayerInventorySubsystem::StaticClass, TEXT("UPlayerInventorySubsystem"), &Z_Registration_Info_UClass_UPlayerInventorySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInventorySubsystem), 2941099717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_62428624(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_Inventory_Logic_PlayerInventorySubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
