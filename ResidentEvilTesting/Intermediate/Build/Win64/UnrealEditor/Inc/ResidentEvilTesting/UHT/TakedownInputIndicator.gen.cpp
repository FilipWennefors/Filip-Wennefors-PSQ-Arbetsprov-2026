// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/TakedownInputIndicator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakedownInputIndicator() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UTakedownInputIndicator();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UTakedownInputIndicator_NoRegister();
	RESIDENTEVILTESTING_API UEnum* Z_Construct_UEnum_ResidentEvilTesting_ETakedownType();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct TakedownInputIndicator_eventSetInputIcon_Parms
	{
		ETakedownType takedownType;
	};
	static FName NAME_UTakedownInputIndicator_SetInputIcon = FName(TEXT("SetInputIcon"));
	void UTakedownInputIndicator::SetInputIcon(ETakedownType takedownType)
	{
		TakedownInputIndicator_eventSetInputIcon_Parms Parms;
		Parms.takedownType=takedownType;
		ProcessEvent(FindFunctionChecked(NAME_UTakedownInputIndicator_SetInputIcon),&Parms);
	}
	void UTakedownInputIndicator::StaticRegisterNativesUTakedownInputIndicator()
	{
	}
	struct Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_takedownType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_takedownType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::NewProp_takedownType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::NewProp_takedownType = { "takedownType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakedownInputIndicator_eventSetInputIcon_Parms, takedownType), Z_Construct_UEnum_ResidentEvilTesting_ETakedownType, METADATA_PARAMS(nullptr, 0) }; // 451650815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::NewProp_takedownType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::NewProp_takedownType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "TakedownInputIndicator" },
		{ "ModuleRelativePath", "Public/UI Logic/TakedownInputIndicator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakedownInputIndicator, nullptr, "SetInputIcon", nullptr, nullptr, sizeof(TakedownInputIndicator_eventSetInputIcon_Parms), Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakedownInputIndicator);
	UClass* Z_Construct_UClass_UTakedownInputIndicator_NoRegister()
	{
		return UTakedownInputIndicator::StaticClass();
	}
	struct Z_Construct_UClass_UTakedownInputIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakedownIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TakedownIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakedownInputIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakedownInputIndicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakedownInputIndicator_SetInputIcon, "SetInputIcon" }, // 3475869996
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakedownInputIndicator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/TakedownInputIndicator.h" },
		{ "ModuleRelativePath", "Public/UI Logic/TakedownInputIndicator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakedownInputIndicator_Statics::NewProp_TakedownIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TakedownInputIndicator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/TakedownInputIndicator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTakedownInputIndicator_Statics::NewProp_TakedownIcon = { "TakedownIcon", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakedownInputIndicator, TakedownIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakedownInputIndicator_Statics::NewProp_TakedownIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakedownInputIndicator_Statics::NewProp_TakedownIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakedownInputIndicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakedownInputIndicator_Statics::NewProp_TakedownIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakedownInputIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakedownInputIndicator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakedownInputIndicator_Statics::ClassParams = {
		&UTakedownInputIndicator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTakedownInputIndicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakedownInputIndicator_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakedownInputIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakedownInputIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakedownInputIndicator()
	{
		if (!Z_Registration_Info_UClass_UTakedownInputIndicator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakedownInputIndicator.OuterSingleton, Z_Construct_UClass_UTakedownInputIndicator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakedownInputIndicator.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UTakedownInputIndicator>()
	{
		return UTakedownInputIndicator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakedownInputIndicator);
	UTakedownInputIndicator::~UTakedownInputIndicator() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TakedownInputIndicator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TakedownInputIndicator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakedownInputIndicator, UTakedownInputIndicator::StaticClass, TEXT("UTakedownInputIndicator"), &Z_Registration_Info_UClass_UTakedownInputIndicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakedownInputIndicator), 3782234330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TakedownInputIndicator_h_36617397(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TakedownInputIndicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_TakedownInputIndicator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
