// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/WeaponWheel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponWheel() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UWeaponWheel();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UWeaponWheel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct WeaponWheel_eventOnNewWeaponSelected_Parms
	{
		int32 weaponIndex;
	};
	static FName NAME_UWeaponWheel_OnNewWeaponSelected = FName(TEXT("OnNewWeaponSelected"));
	void UWeaponWheel::OnNewWeaponSelected(int32 weaponIndex)
	{
		WeaponWheel_eventOnNewWeaponSelected_Parms Parms;
		Parms.weaponIndex=weaponIndex;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponWheel_OnNewWeaponSelected),&Parms);
	}
	void UWeaponWheel::StaticRegisterNativesUWeaponWheel()
	{
	}
	struct Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_weaponIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::NewProp_weaponIndex = { "weaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponWheel_eventOnNewWeaponSelected_Parms, weaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::NewProp_weaponIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/WeaponWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponWheel, nullptr, "OnNewWeaponSelected", nullptr, nullptr, sizeof(WeaponWheel_eventOnNewWeaponSelected_Parms), Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponWheel);
	UClass* Z_Construct_UClass_UWeaponWheel_NoRegister()
	{
		return UWeaponWheel::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponWheel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponWheel_OnNewWeaponSelected, "OnNewWeaponSelected" }, // 2072459005
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/WeaponWheel.h" },
		{ "ModuleRelativePath", "Public/UI Logic/WeaponWheel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponWheel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponWheel_Statics::ClassParams = {
		&UWeaponWheel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWeaponWheel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponWheel()
	{
		if (!Z_Registration_Info_UClass_UWeaponWheel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponWheel.OuterSingleton, Z_Construct_UClass_UWeaponWheel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponWheel.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UWeaponWheel>()
	{
		return UWeaponWheel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponWheel);
	UWeaponWheel::~UWeaponWheel() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WeaponWheel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WeaponWheel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponWheel, UWeaponWheel::StaticClass, TEXT("UWeaponWheel"), &Z_Registration_Info_UClass_UWeaponWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponWheel), 4256151113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WeaponWheel_h_4242994964(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WeaponWheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WeaponWheel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
