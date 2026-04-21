// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/ItemActionsMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemActionsMenu() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItemActionsMenu();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItemActionsMenu_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UNewInventoryItem_NoRegister();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnMenuClosedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct ItemActionsMenu_eventOnMenuEnabled_Parms
	{
		UNewInventoryItem* itemInspected;
	};
	static FName NAME_UItemActionsMenu_CloseMenu = FName(TEXT("CloseMenu"));
	void UItemActionsMenu::CloseMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UItemActionsMenu_CloseMenu),NULL);
	}
	static FName NAME_UItemActionsMenu_OnBackButtonPressed = FName(TEXT("OnBackButtonPressed"));
	void UItemActionsMenu::OnBackButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UItemActionsMenu_OnBackButtonPressed),NULL);
	}
	static FName NAME_UItemActionsMenu_OnMenuEnabled = FName(TEXT("OnMenuEnabled"));
	void UItemActionsMenu::OnMenuEnabled(UNewInventoryItem* itemInspected)
	{
		ItemActionsMenu_eventOnMenuEnabled_Parms Parms;
		Parms.itemInspected=itemInspected;
		ProcessEvent(FindFunctionChecked(NAME_UItemActionsMenu_OnMenuEnabled),&Parms);
	}
	void UItemActionsMenu::StaticRegisterNativesUItemActionsMenu()
	{
	}
	struct Z_Construct_UFunction_UItemActionsMenu_CloseMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemActionsMenu_CloseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemActionsMenu_CloseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemActionsMenu, nullptr, "CloseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemActionsMenu_CloseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionsMenu_CloseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemActionsMenu_CloseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemActionsMenu_CloseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemActionsMenu_OnBackButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemActionsMenu_OnBackButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemActionsMenu_OnBackButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemActionsMenu, nullptr, "OnBackButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemActionsMenu_OnBackButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionsMenu_OnBackButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemActionsMenu_OnBackButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemActionsMenu_OnBackButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemInspected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::NewProp_itemInspected = { "itemInspected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ItemActionsMenu_eventOnMenuEnabled_Parms, itemInspected), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::NewProp_itemInspected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemActionsMenu, nullptr, "OnMenuEnabled", nullptr, nullptr, sizeof(ItemActionsMenu_eventOnMenuEnabled_Parms), Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemActionsMenu);
	UClass* Z_Construct_UClass_UItemActionsMenu_NoRegister()
	{
		return UItemActionsMenu::StaticClass();
	}
	struct Z_Construct_UClass_UItemActionsMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMenuClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuClosed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemActionsMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemActionsMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemActionsMenu_CloseMenu, "CloseMenu" }, // 2574056206
		{ &Z_Construct_UFunction_UItemActionsMenu_OnBackButtonPressed, "OnBackButtonPressed" }, // 1717292168
		{ &Z_Construct_UFunction_UItemActionsMenu_OnMenuEnabled, "OnMenuEnabled" }, // 1233706091
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionsMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI Logic/ItemActionsMenu.h" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionsMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionsMenu_Statics::NewProp_OnMenuClosed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionsMenu.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemActionsMenu_Statics::NewProp_OnMenuClosed = { "OnMenuClosed", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemActionsMenu, OnMenuClosed), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMenuClosedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UItemActionsMenu_Statics::NewProp_OnMenuClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionsMenu_Statics::NewProp_OnMenuClosed_MetaData)) }; // 2317189571
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemActionsMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemActionsMenu_Statics::NewProp_OnMenuClosed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemActionsMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemActionsMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemActionsMenu_Statics::ClassParams = {
		&UItemActionsMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemActionsMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionsMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemActionsMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionsMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemActionsMenu()
	{
		if (!Z_Registration_Info_UClass_UItemActionsMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemActionsMenu.OuterSingleton, Z_Construct_UClass_UItemActionsMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemActionsMenu.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UItemActionsMenu>()
	{
		return UItemActionsMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemActionsMenu);
	UItemActionsMenu::~UItemActionsMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionsMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionsMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemActionsMenu, UItemActionsMenu::StaticClass, TEXT("UItemActionsMenu"), &Z_Registration_Info_UClass_UItemActionsMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemActionsMenu), 3581657026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionsMenu_h_2665253788(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionsMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionsMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
