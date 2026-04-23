// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/UnlockDoorMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockDoorMenu() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UUnlockDoorMenu();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UUnlockDoorMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UUnlockDoorMenu::execClearImageTints)
	{
		P_GET_OBJECT(UPanelWidget,Z_Param_panelWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearImageTints(Z_Param_panelWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnlockDoorMenu::execGetHoveredImage)
	{
		P_GET_OBJECT(UPanelWidget,Z_Param_panelWidget);
		P_GET_OBJECT_REF(UImage,Z_Param_Out_image);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_keyItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHoveredImage(Z_Param_panelWidget,Z_Param_Out_image,Z_Param_Out_keyItemIndex);
		P_NATIVE_END;
	}
	static FName NAME_UUnlockDoorMenu_OnBackKeyPressed = FName(TEXT("OnBackKeyPressed"));
	void UUnlockDoorMenu::OnBackKeyPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUnlockDoorMenu_OnBackKeyPressed),NULL);
	}
	static FName NAME_UUnlockDoorMenu_OnSpacePressed = FName(TEXT("OnSpacePressed"));
	void UUnlockDoorMenu::OnSpacePressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUnlockDoorMenu_OnSpacePressed),NULL);
	}
	void UUnlockDoorMenu::StaticRegisterNativesUUnlockDoorMenu()
	{
		UClass* Class = UUnlockDoorMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearImageTints", &UUnlockDoorMenu::execClearImageTints },
			{ "GetHoveredImage", &UUnlockDoorMenu::execGetHoveredImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics
	{
		struct UnlockDoorMenu_eventClearImageTints_Parms
		{
			UPanelWidget* panelWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_panelWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_panelWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::NewProp_panelWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::NewProp_panelWidget = { "panelWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnlockDoorMenu_eventClearImageTints_Parms, panelWidget), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::NewProp_panelWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::NewProp_panelWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::NewProp_panelWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnlockDoorMenu" },
		{ "ModuleRelativePath", "Public/UI Logic/UnlockDoorMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnlockDoorMenu, nullptr, "ClearImageTints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::UnlockDoorMenu_eventClearImageTints_Parms), Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics
	{
		struct UnlockDoorMenu_eventGetHoveredImage_Parms
		{
			UPanelWidget* panelWidget;
			UImage* image;
			int32 keyItemIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_panelWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_panelWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_image;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_keyItemIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_panelWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_panelWidget = { "panelWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnlockDoorMenu_eventGetHoveredImage_Parms, panelWidget), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_panelWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_panelWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_image_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnlockDoorMenu_eventGetHoveredImage_Parms, image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_image_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_keyItemIndex = { "keyItemIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnlockDoorMenu_eventGetHoveredImage_Parms, keyItemIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnlockDoorMenu_eventGetHoveredImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UnlockDoorMenu_eventGetHoveredImage_Parms), &Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_panelWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_keyItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnlockDoorMenu" },
		{ "ModuleRelativePath", "Public/UI Logic/UnlockDoorMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnlockDoorMenu, nullptr, "GetHoveredImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::UnlockDoorMenu_eventGetHoveredImage_Parms), Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnlockDoorMenu_OnBackKeyPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnlockDoorMenu_OnBackKeyPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnlockDoorMenu" },
		{ "ModuleRelativePath", "Public/UI Logic/UnlockDoorMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnlockDoorMenu_OnBackKeyPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnlockDoorMenu, nullptr, "OnBackKeyPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnlockDoorMenu_OnBackKeyPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_OnBackKeyPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnlockDoorMenu_OnBackKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnlockDoorMenu_OnBackKeyPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnlockDoorMenu_OnSpacePressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnlockDoorMenu_OnSpacePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnlockDoorMenu" },
		{ "ModuleRelativePath", "Public/UI Logic/UnlockDoorMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnlockDoorMenu_OnSpacePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnlockDoorMenu, nullptr, "OnSpacePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnlockDoorMenu_OnSpacePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnlockDoorMenu_OnSpacePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnlockDoorMenu_OnSpacePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnlockDoorMenu_OnSpacePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnlockDoorMenu);
	UClass* Z_Construct_UClass_UUnlockDoorMenu_NoRegister()
	{
		return UUnlockDoorMenu::StaticClass();
	}
	struct Z_Construct_UClass_UUnlockDoorMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selectedKeyItem_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_selectedKeyItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnlockDoorMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnlockDoorMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnlockDoorMenu_ClearImageTints, "ClearImageTints" }, // 4085372867
		{ &Z_Construct_UFunction_UUnlockDoorMenu_GetHoveredImage, "GetHoveredImage" }, // 1163986550
		{ &Z_Construct_UFunction_UUnlockDoorMenu_OnBackKeyPressed, "OnBackKeyPressed" }, // 1018720245
		{ &Z_Construct_UFunction_UUnlockDoorMenu_OnSpacePressed, "OnSpacePressed" }, // 441900230
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnlockDoorMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/UnlockDoorMenu.h" },
		{ "ModuleRelativePath", "Public/UI Logic/UnlockDoorMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnlockDoorMenu_Statics::NewProp_selectedKeyItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI Logic/UnlockDoorMenu.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUnlockDoorMenu_Statics::NewProp_selectedKeyItem = { "selectedKeyItem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnlockDoorMenu, selectedKeyItem), METADATA_PARAMS(Z_Construct_UClass_UUnlockDoorMenu_Statics::NewProp_selectedKeyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockDoorMenu_Statics::NewProp_selectedKeyItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnlockDoorMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnlockDoorMenu_Statics::NewProp_selectedKeyItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnlockDoorMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnlockDoorMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnlockDoorMenu_Statics::ClassParams = {
		&UUnlockDoorMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUnlockDoorMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockDoorMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnlockDoorMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockDoorMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnlockDoorMenu()
	{
		if (!Z_Registration_Info_UClass_UUnlockDoorMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnlockDoorMenu.OuterSingleton, Z_Construct_UClass_UUnlockDoorMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnlockDoorMenu.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UUnlockDoorMenu>()
	{
		return UUnlockDoorMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnlockDoorMenu);
	UUnlockDoorMenu::~UUnlockDoorMenu() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_UnlockDoorMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_UnlockDoorMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnlockDoorMenu, UUnlockDoorMenu::StaticClass, TEXT("UUnlockDoorMenu"), &Z_Registration_Info_UClass_UUnlockDoorMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnlockDoorMenu), 3541450933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_UnlockDoorMenu_h_60738526(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_UnlockDoorMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_UnlockDoorMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
