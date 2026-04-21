// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/CutsceneDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCutsceneDescription() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCutsceneDescription();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCutsceneDescription_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct CutsceneDescription_eventSetDescriptiveText_Parms
	{
		FString test;
	};
	static FName NAME_UCutsceneDescription_SetDescriptiveText = FName(TEXT("SetDescriptiveText"));
	void UCutsceneDescription::SetDescriptiveText(const FString& test)
	{
		CutsceneDescription_eventSetDescriptiveText_Parms Parms;
		Parms.test=test;
		ProcessEvent(FindFunctionChecked(NAME_UCutsceneDescription_SetDescriptiveText),&Parms);
	}
	void UCutsceneDescription::StaticRegisterNativesUCutsceneDescription()
	{
	}
	struct Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_test_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_test;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::NewProp_test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::NewProp_test = { "test", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CutsceneDescription_eventSetDescriptiveText_Parms, test), METADATA_PARAMS(Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::NewProp_test_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::NewProp_test_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::NewProp_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/CutsceneDescription.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCutsceneDescription, nullptr, "SetDescriptiveText", nullptr, nullptr, sizeof(CutsceneDescription_eventSetDescriptiveText_Parms), Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCutsceneDescription);
	UClass* Z_Construct_UClass_UCutsceneDescription_NoRegister()
	{
		return UCutsceneDescription::StaticClass();
	}
	struct Z_Construct_UClass_UCutsceneDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCutsceneDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCutsceneDescription_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCutsceneDescription_SetDescriptiveText, "SetDescriptiveText" }, // 2385699479
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutsceneDescription_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/CutsceneDescription.h" },
		{ "ModuleRelativePath", "Public/UI Logic/CutsceneDescription.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCutsceneDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCutsceneDescription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCutsceneDescription_Statics::ClassParams = {
		&UCutsceneDescription::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCutsceneDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCutsceneDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCutsceneDescription()
	{
		if (!Z_Registration_Info_UClass_UCutsceneDescription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCutsceneDescription.OuterSingleton, Z_Construct_UClass_UCutsceneDescription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCutsceneDescription.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UCutsceneDescription>()
	{
		return UCutsceneDescription::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCutsceneDescription);
	UCutsceneDescription::~UCutsceneDescription() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_CutsceneDescription_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_CutsceneDescription_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCutsceneDescription, UCutsceneDescription::StaticClass, TEXT("UCutsceneDescription"), &Z_Registration_Info_UClass_UCutsceneDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCutsceneDescription), 3221992850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_CutsceneDescription_h_2179685569(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_CutsceneDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_CutsceneDescription_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
