// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Pickup And Item Logic/NewInventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewInventoryItem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AExtendedPlayerController_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItemIcon_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UNewInventoryItem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UNewInventoryItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UNewInventoryItem::execCanUseItem)
	{
		P_GET_OBJECT(AExtendedPlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseItem(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	struct NewInventoryItem_eventTryUseItem_Parms
	{
		AExtendedPlayerController* PlayerController;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		NewInventoryItem_eventTryUseItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UNewInventoryItem_TryUseItem = FName(TEXT("TryUseItem"));
	bool UNewInventoryItem::TryUseItem(AExtendedPlayerController* PlayerController)
	{
		NewInventoryItem_eventTryUseItem_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UNewInventoryItem_TryUseItem),&Parms);
		return !!Parms.ReturnValue;
	}
	void UNewInventoryItem::StaticRegisterNativesUNewInventoryItem()
	{
		UClass* Class = UNewInventoryItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanUseItem", &UNewInventoryItem::execCanUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics
	{
		struct NewInventoryItem_eventCanUseItem_Parms
		{
			AExtendedPlayerController* PlayerController;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NewInventoryItem_eventCanUseItem_Parms, PlayerController), Z_Construct_UClass_AExtendedPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewInventoryItem_eventCanUseItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NewInventoryItem_eventCanUseItem_Parms), &Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewInventoryItem, nullptr, "CanUseItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::NewInventoryItem_eventCanUseItem_Parms), Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewInventoryItem_CanUseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewInventoryItem_CanUseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NewInventoryItem_eventTryUseItem_Parms, PlayerController), Z_Construct_UClass_AExtendedPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewInventoryItem_eventTryUseItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NewInventoryItem_eventTryUseItem_Parms), &Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewInventoryItem, nullptr, "TryUseItem", nullptr, nullptr, sizeof(NewInventoryItem_eventTryUseItem_Parms), Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewInventoryItem_TryUseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewInventoryItem_TryUseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewInventoryItem);
	UClass* Z_Construct_UClass_UNewInventoryItem_NoRegister()
	{
		return UNewInventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_UNewInventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxItemsInStack_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxItemsInStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectDefaultTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InspectDefaultTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canItemBeUsed_MetaData[];
#endif
		static void NewProp_canItemBeUsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canItemBeUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_iconWidgetReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_iconWidgetReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRotated_MetaData[];
#endif
		static void NewProp_bIsRotated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemsInStack_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_itemsInStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewInventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewInventoryItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewInventoryItem_CanUseItem, "CanUseItem" }, // 1252677110
		{ &Z_Construct_UFunction_UNewInventoryItem_TryUseItem, "TryUseItem" }, // 4243775662
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickup And Item Logic/NewInventoryItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemSize_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemSize = { "ItemSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, ItemSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemPosition_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemPosition = { "ItemPosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, ItemPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemTexture_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemTexture = { "ItemTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, ItemTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_maxItemsInStack_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "Comment", "//Determines how many items can be placed in a stack of it. 1 means no stacking\n" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
		{ "ToolTip", "Determines how many items can be placed in a stack of it. 1 means no stacking" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_maxItemsInStack = { "maxItemsInStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, maxItemsInStack), METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_maxItemsInStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_maxItemsInStack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_IconColor_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_IconColor = { "IconColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, IconColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_IconColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_IconColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "Comment", "//Used to show the item in the inspect menu\n" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
		{ "ToolTip", "Used to show the item in the inspect menu" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_InspectDefaultTransform_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_InspectDefaultTransform = { "InspectDefaultTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, InspectDefaultTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_InspectDefaultTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_InspectDefaultTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_canItemBeUsed_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	void Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_canItemBeUsed_SetBit(void* Obj)
	{
		((UNewInventoryItem*)Obj)->canItemBeUsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_canItemBeUsed = { "canItemBeUsed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNewInventoryItem), &Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_canItemBeUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_canItemBeUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_canItemBeUsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_iconWidgetReference_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "Comment", "//Represents the icon used in the inventory to represent the entire item\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
		{ "ToolTip", "Represents the icon used in the inventory to represent the entire item" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_iconWidgetReference = { "iconWidgetReference", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, iconWidgetReference), Z_Construct_UClass_UItemIcon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_iconWidgetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_iconWidgetReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_bIsRotated_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	void Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_bIsRotated_SetBit(void* Obj)
	{
		((UNewInventoryItem*)Obj)->bIsRotated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_bIsRotated = { "bIsRotated", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNewInventoryItem), &Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_bIsRotated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_bIsRotated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_bIsRotated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_itemsInStack_MetaData[] = {
		{ "Category", "NewInventoryItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/NewInventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_itemsInStack = { "itemsInStack", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewInventoryItem, itemsInStack), METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_itemsInStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_itemsInStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_maxItemsInStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_IconColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_ItemMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_InspectDefaultTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_canItemBeUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_iconWidgetReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_bIsRotated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewInventoryItem_Statics::NewProp_itemsInStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewInventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewInventoryItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewInventoryItem_Statics::ClassParams = {
		&UNewInventoryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNewInventoryItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNewInventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewInventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewInventoryItem()
	{
		if (!Z_Registration_Info_UClass_UNewInventoryItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewInventoryItem.OuterSingleton, Z_Construct_UClass_UNewInventoryItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewInventoryItem.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UNewInventoryItem>()
	{
		return UNewInventoryItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewInventoryItem);
	UNewInventoryItem::~UNewInventoryItem() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_NewInventoryItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_NewInventoryItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewInventoryItem, UNewInventoryItem::StaticClass, TEXT("UNewInventoryItem"), &Z_Registration_Info_UClass_UNewInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewInventoryItem), 1022767509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_NewInventoryItem_h_1336664111(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_NewInventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_NewInventoryItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
