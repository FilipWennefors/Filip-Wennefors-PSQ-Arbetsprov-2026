// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Weapon Logic/Knife.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AKnife();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AKnife_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AKnifeBaseClass();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void AKnife::StaticRegisterNativesAKnife()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKnife);
	UClass* Z_Construct_UClass_AKnife_NoRegister()
	{
		return AKnife::StaticClass();
	}
	struct Z_Construct_UClass_AKnife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shootWeaponSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_shootWeaponSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackingCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackingCooldown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKnife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKnifeBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnife_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon Logic/Knife.h" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Knife.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnife_Statics::NewProp_shootWeaponSFX_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Knife.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AKnife_Statics::NewProp_shootWeaponSFX = { "shootWeaponSFX", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKnife, shootWeaponSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKnife_Statics::NewProp_shootWeaponSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnife_Statics::NewProp_shootWeaponSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnife_Statics::NewProp_AttackingCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon Logic/Knife.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKnife_Statics::NewProp_AttackingCooldown = { "AttackingCooldown", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKnife, AttackingCooldown), METADATA_PARAMS(Z_Construct_UClass_AKnife_Statics::NewProp_AttackingCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnife_Statics::NewProp_AttackingCooldown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKnife_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnife_Statics::NewProp_shootWeaponSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnife_Statics::NewProp_AttackingCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKnife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnife>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKnife_Statics::ClassParams = {
		&AKnife::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKnife_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKnife_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKnife_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKnife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKnife()
	{
		if (!Z_Registration_Info_UClass_AKnife.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKnife.OuterSingleton, Z_Construct_UClass_AKnife_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKnife.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AKnife>()
	{
		return AKnife::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKnife);
	AKnife::~AKnife() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Knife_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Knife_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKnife, AKnife::StaticClass, TEXT("AKnife"), &Z_Registration_Info_UClass_AKnife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKnife), 83561653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Knife_h_3918127908(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Knife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Knife_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
