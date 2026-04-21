// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/PlayerInventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventory() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UNewInventoryItem_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UPlayerInventory();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UPlayerInventory_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerInventory::execCalculateSelectedIndex)
	{
		P_GET_OBJECT(UWrapBox,Z_Param_attacheCase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_iconSize);
		P_GET_STRUCT(FIntVector,Z_Param_attacheCaseSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->CalculateSelectedIndex(Z_Param_attacheCase,Z_Param_iconSize,Z_Param_attacheCaseSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventory::execGetFirstIndexViewportPosition)
	{
		P_GET_OBJECT(UWrapBox,Z_Param_attacheCase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetFirstIndexViewportPosition(Z_Param_attacheCase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventory::execGetSelectedIndex)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_iconSize);
		P_GET_OBJECT(UImage,Z_Param_cornerIndicator);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_indicatorPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2f*)Z_Param__Result=P_THIS->GetSelectedIndex(Z_Param_iconSize,Z_Param_cornerIndicator,Z_Param_Out_indicatorPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInventory::execClampSelectedIndex)
	{
		P_GET_OBJECT(UNewInventoryItem,Z_Param_itemToMove);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_xClamped);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_yClamped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClampSelectedIndex(Z_Param_itemToMove,Z_Param_x,Z_Param_y,Z_Param_Out_xClamped,Z_Param_Out_yClamped);
		P_NATIVE_END;
	}
	static FName NAME_UPlayerInventory_MovingItemState = FName(TEXT("MovingItemState"));
	void UPlayerInventory::MovingItemState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerInventory_MovingItemState),NULL);
	}
	static FName NAME_UPlayerInventory_NavigatingItemState = FName(TEXT("NavigatingItemState"));
	void UPlayerInventory::NavigatingItemState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerInventory_NavigatingItemState),NULL);
	}
	static FName NAME_UPlayerInventory_OnBackKeyInput = FName(TEXT("OnBackKeyInput"));
	void UPlayerInventory::OnBackKeyInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerInventory_OnBackKeyInput),NULL);
	}
	static FName NAME_UPlayerInventory_OnDebugKeyPressed = FName(TEXT("OnDebugKeyPressed"));
	void UPlayerInventory::OnDebugKeyPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerInventory_OnDebugKeyPressed),NULL);
	}
	static FName NAME_UPlayerInventory_OnPreviewItemInput = FName(TEXT("OnPreviewItemInput"));
	void UPlayerInventory::OnPreviewItemInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerInventory_OnPreviewItemInput),NULL);
	}
	void UPlayerInventory::StaticRegisterNativesUPlayerInventory()
	{
		UClass* Class = UPlayerInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateSelectedIndex", &UPlayerInventory::execCalculateSelectedIndex },
			{ "ClampSelectedIndex", &UPlayerInventory::execClampSelectedIndex },
			{ "GetFirstIndexViewportPosition", &UPlayerInventory::execGetFirstIndexViewportPosition },
			{ "GetSelectedIndex", &UPlayerInventory::execGetSelectedIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics
	{
		struct PlayerInventory_eventCalculateSelectedIndex_Parms
		{
			UWrapBox* attacheCase;
			float iconSize;
			FIntVector attacheCaseSize;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attacheCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attacheCase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_iconSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_attacheCaseSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_attacheCase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_attacheCase = { "attacheCase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventCalculateSelectedIndex_Parms, attacheCase), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_attacheCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_attacheCase_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_iconSize = { "iconSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventCalculateSelectedIndex_Parms, iconSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_attacheCaseSize = { "attacheCaseSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventCalculateSelectedIndex_Parms, attacheCaseSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventCalculateSelectedIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_attacheCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_iconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_attacheCaseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "CalculateSelectedIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::PlayerInventory_eventCalculateSelectedIndex_Parms), Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics
	{
		struct PlayerInventory_eventClampSelectedIndex_Parms
		{
			UNewInventoryItem* itemToMove;
			int32 x;
			int32 y;
			int32 xClamped;
			int32 yClamped;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemToMove;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_xClamped;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_yClamped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_itemToMove = { "itemToMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventClampSelectedIndex_Parms, itemToMove), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventClampSelectedIndex_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventClampSelectedIndex_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_xClamped = { "xClamped", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventClampSelectedIndex_Parms, xClamped), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_yClamped = { "yClamped", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventClampSelectedIndex_Parms, yClamped), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_itemToMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_xClamped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::NewProp_yClamped,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// UFUNCTION(BlueprintCallable, Category = \"Experiments\")\n// FInventoryGridSlot GetSlot(int x, int y);\n" },
		{ "Keywords", "Inventory" },
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Experiments\")\nFInventoryGridSlot GetSlot(int x, int y);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "ClampSelectedIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::PlayerInventory_eventClampSelectedIndex_Parms), Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics
	{
		struct PlayerInventory_eventGetFirstIndexViewportPosition_Parms
		{
			UWrapBox* attacheCase;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attacheCase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attacheCase;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::NewProp_attacheCase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::NewProp_attacheCase = { "attacheCase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventGetFirstIndexViewportPosition_Parms, attacheCase), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::NewProp_attacheCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::NewProp_attacheCase_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventGetFirstIndexViewportPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::NewProp_attacheCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "GetFirstIndexViewportPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::PlayerInventory_eventGetFirstIndexViewportPosition_Parms), Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics
	{
		struct PlayerInventory_eventGetSelectedIndex_Parms
		{
			float iconSize;
			UImage* cornerIndicator;
			FVector2D indicatorPos;
			FVector2f ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_iconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cornerIndicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cornerIndicator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_indicatorPos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_iconSize = { "iconSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventGetSelectedIndex_Parms, iconSize), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_cornerIndicator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_cornerIndicator = { "cornerIndicator", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventGetSelectedIndex_Parms, cornerIndicator), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_cornerIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_cornerIndicator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_indicatorPos = { "indicatorPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventGetSelectedIndex_Parms, indicatorPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInventory_eventGetSelectedIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_iconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_cornerIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_indicatorPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Keywords", "Inventory" },
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "GetSelectedIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::PlayerInventory_eventGetSelectedIndex_Parms), Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventory_MovingItemState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_MovingItemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_MovingItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "MovingItemState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_MovingItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_MovingItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_MovingItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_MovingItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventory_NavigatingItemState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_NavigatingItemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_NavigatingItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "NavigatingItemState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_NavigatingItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_NavigatingItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_NavigatingItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_NavigatingItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventory_OnBackKeyInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_OnBackKeyInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterfaceInput" },
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_OnBackKeyInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "OnBackKeyInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_OnBackKeyInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_OnBackKeyInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_OnBackKeyInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_OnBackKeyInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventory_OnDebugKeyPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_OnDebugKeyPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterfaceInput" },
		{ "Comment", "//Call in order to implement temp functionality called when Q pressed(Q is the input key used to test things as it is not used in game for anything)\n" },
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
		{ "ToolTip", "Call in order to implement temp functionality called when Q pressed(Q is the input key used to test things as it is not used in game for anything)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_OnDebugKeyPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "OnDebugKeyPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_OnDebugKeyPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_OnDebugKeyPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_OnDebugKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_OnDebugKeyPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInventory_OnPreviewItemInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventory_OnPreviewItemInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterfaceInput" },
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventory_OnPreviewItemInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventory, nullptr, "OnPreviewItemInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventory_OnPreviewItemInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventory_OnPreviewItemInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventory_OnPreviewItemInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventory_OnPreviewItemInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInventory);
	UClass* Z_Construct_UClass_UPlayerInventory_NoRegister()
	{
		return UPlayerInventory::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInventory_CalculateSelectedIndex, "CalculateSelectedIndex" }, // 1705630415
		{ &Z_Construct_UFunction_UPlayerInventory_ClampSelectedIndex, "ClampSelectedIndex" }, // 4056781709
		{ &Z_Construct_UFunction_UPlayerInventory_GetFirstIndexViewportPosition, "GetFirstIndexViewportPosition" }, // 235240537
		{ &Z_Construct_UFunction_UPlayerInventory_GetSelectedIndex, "GetSelectedIndex" }, // 1991058207
		{ &Z_Construct_UFunction_UPlayerInventory_MovingItemState, "MovingItemState" }, // 1091900696
		{ &Z_Construct_UFunction_UPlayerInventory_NavigatingItemState, "NavigatingItemState" }, // 1379730115
		{ &Z_Construct_UFunction_UPlayerInventory_OnBackKeyInput, "OnBackKeyInput" }, // 771666814
		{ &Z_Construct_UFunction_UPlayerInventory_OnDebugKeyPressed, "OnDebugKeyPressed" }, // 3978165712
		{ &Z_Construct_UFunction_UPlayerInventory_OnPreviewItemInput, "OnPreviewItemInput" }, // 1967530789
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/PlayerInventory.h" },
		{ "ModuleRelativePath", "Public/UI Logic/PlayerInventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventory_Statics::ClassParams = {
		&UPlayerInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInventory()
	{
		if (!Z_Registration_Info_UClass_UPlayerInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInventory.OuterSingleton, Z_Construct_UClass_UPlayerInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInventory.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UPlayerInventory>()
	{
		return UPlayerInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventory);
	UPlayerInventory::~UPlayerInventory() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInventory, UPlayerInventory::StaticClass, TEXT("UPlayerInventory"), &Z_Registration_Info_UClass_UPlayerInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInventory), 1368852494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_532727605(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_PlayerInventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
