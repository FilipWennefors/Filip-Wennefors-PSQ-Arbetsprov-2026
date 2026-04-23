// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/TabMenuManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTabMenuManager() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UTabMenuManager();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UTabMenuManager_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UTabMenuManager::execGetWidgetIndexBackwardsPress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_widgetChildrenCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentWidgetIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_newWidgetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWidgetIndexBackwardsPress(Z_Param_widgetChildrenCount,Z_Param_CurrentWidgetIndex,Z_Param_Out_newWidgetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTabMenuManager::execGetWidgetIndexForwardsPress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_widgetChildrenCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentWidgetIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_newWidgetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWidgetIndexForwardsPress(Z_Param_widgetChildrenCount,Z_Param_CurrentWidgetIndex,Z_Param_Out_newWidgetIndex);
		P_NATIVE_END;
	}
	static FName NAME_UTabMenuManager_OnOpened = FName(TEXT("OnOpened"));
	void UTabMenuManager::OnOpened()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTabMenuManager_OnOpened),NULL);
	}
	static FName NAME_UTabMenuManager_OnSwitchMenuBackwardsInput = FName(TEXT("OnSwitchMenuBackwardsInput"));
	void UTabMenuManager::OnSwitchMenuBackwardsInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTabMenuManager_OnSwitchMenuBackwardsInput),NULL);
	}
	static FName NAME_UTabMenuManager_OnSwitchMenuForwardsInput = FName(TEXT("OnSwitchMenuForwardsInput"));
	void UTabMenuManager::OnSwitchMenuForwardsInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTabMenuManager_OnSwitchMenuForwardsInput),NULL);
	}
	void UTabMenuManager::StaticRegisterNativesUTabMenuManager()
	{
		UClass* Class = UTabMenuManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWidgetIndexBackwardsPress", &UTabMenuManager::execGetWidgetIndexBackwardsPress },
			{ "GetWidgetIndexForwardsPress", &UTabMenuManager::execGetWidgetIndexForwardsPress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics
	{
		struct TabMenuManager_eventGetWidgetIndexBackwardsPress_Parms
		{
			int32 widgetChildrenCount;
			int32 CurrentWidgetIndex;
			int32 newWidgetIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_widgetChildrenCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentWidgetIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newWidgetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::NewProp_widgetChildrenCount = { "widgetChildrenCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TabMenuManager_eventGetWidgetIndexBackwardsPress_Parms, widgetChildrenCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::NewProp_CurrentWidgetIndex = { "CurrentWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TabMenuManager_eventGetWidgetIndexBackwardsPress_Parms, CurrentWidgetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::NewProp_newWidgetIndex = { "newWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TabMenuManager_eventGetWidgetIndexBackwardsPress_Parms, newWidgetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::NewProp_widgetChildrenCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::NewProp_CurrentWidgetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::NewProp_newWidgetIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabManager" },
		{ "ModuleRelativePath", "Public/UI Logic/TabMenuManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabMenuManager, nullptr, "GetWidgetIndexBackwardsPress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::TabMenuManager_eventGetWidgetIndexBackwardsPress_Parms), Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics
	{
		struct TabMenuManager_eventGetWidgetIndexForwardsPress_Parms
		{
			int32 widgetChildrenCount;
			int32 CurrentWidgetIndex;
			int32 newWidgetIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_widgetChildrenCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentWidgetIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newWidgetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::NewProp_widgetChildrenCount = { "widgetChildrenCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TabMenuManager_eventGetWidgetIndexForwardsPress_Parms, widgetChildrenCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::NewProp_CurrentWidgetIndex = { "CurrentWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TabMenuManager_eventGetWidgetIndexForwardsPress_Parms, CurrentWidgetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::NewProp_newWidgetIndex = { "newWidgetIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TabMenuManager_eventGetWidgetIndexForwardsPress_Parms, newWidgetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::NewProp_widgetChildrenCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::NewProp_CurrentWidgetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::NewProp_newWidgetIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabManager" },
		{ "ModuleRelativePath", "Public/UI Logic/TabMenuManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabMenuManager, nullptr, "GetWidgetIndexForwardsPress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::TabMenuManager_eventGetWidgetIndexForwardsPress_Parms), Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTabMenuManager_OnOpened_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabMenuManager_OnOpened_Statics::Function_MetaDataParams[] = {
		{ "Category", "TabMenuManager" },
		{ "ModuleRelativePath", "Public/UI Logic/TabMenuManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabMenuManager_OnOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabMenuManager, nullptr, "OnOpened", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTabMenuManager_OnOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabMenuManager_OnOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTabMenuManager_OnOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTabMenuManager_OnOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuBackwardsInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuBackwardsInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/UI Logic/TabMenuManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuBackwardsInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabMenuManager, nullptr, "OnSwitchMenuBackwardsInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuBackwardsInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuBackwardsInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuBackwardsInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuBackwardsInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuForwardsInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuForwardsInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/UI Logic/TabMenuManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuForwardsInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabMenuManager, nullptr, "OnSwitchMenuForwardsInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuForwardsInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuForwardsInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuForwardsInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuForwardsInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTabMenuManager);
	UClass* Z_Construct_UClass_UTabMenuManager_NoRegister()
	{
		return UTabMenuManager::StaticClass();
	}
	struct Z_Construct_UClass_UTabMenuManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTabMenuManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTabMenuManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexBackwardsPress, "GetWidgetIndexBackwardsPress" }, // 256646454
		{ &Z_Construct_UFunction_UTabMenuManager_GetWidgetIndexForwardsPress, "GetWidgetIndexForwardsPress" }, // 1188641111
		{ &Z_Construct_UFunction_UTabMenuManager_OnOpened, "OnOpened" }, // 1373147349
		{ &Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuBackwardsInput, "OnSwitchMenuBackwardsInput" }, // 1679229850
		{ &Z_Construct_UFunction_UTabMenuManager_OnSwitchMenuForwardsInput, "OnSwitchMenuForwardsInput" }, // 3430624602
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabMenuManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/TabMenuManager.h" },
		{ "ModuleRelativePath", "Public/UI Logic/TabMenuManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTabMenuManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTabMenuManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTabMenuManager_Statics::ClassParams = {
		&UTabMenuManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTabMenuManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTabMenuManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTabMenuManager()
	{
		if (!Z_Registration_Info_UClass_UTabMenuManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTabMenuManager.OuterSingleton, Z_Construct_UClass_UTabMenuManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTabMenuManager.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UTabMenuManager>()
	{
		return UTabMenuManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTabMenuManager);
	UTabMenuManager::~UTabMenuManager() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TabMenuManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TabMenuManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTabMenuManager, UTabMenuManager::StaticClass, TEXT("UTabMenuManager"), &Z_Registration_Info_UClass_UTabMenuManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTabMenuManager), 3456706616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TabMenuManager_h_1216062758(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TabMenuManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TabMenuManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
