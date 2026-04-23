// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Weapon Logic/Shotgun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgun() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AFirearm();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AShotgun();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AShotgun_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void AShotgun::StaticRegisterNativesAShotgun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShotgun);
	UClass* Z_Construct_UClass_AShotgun_NoRegister()
	{
		return AShotgun::StaticClass();
	}
	struct Z_Construct_UClass_AShotgun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_baseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fireRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fireRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_horizontalPelletsCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_horizontalPelletsCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verticalPelletsCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verticalPelletsCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_horizontalSpreadRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_horizontalSpreadRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verticalSpreadRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_verticalSpreadRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShotgun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFirearm,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon Logic/Shotgun.h" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Shotgun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::NewProp_baseDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Shotgun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShotgun_Statics::NewProp_baseDamage = { "baseDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShotgun, baseDamage), METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::NewProp_baseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::NewProp_baseDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::NewProp_fireRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Shotgun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShotgun_Statics::NewProp_fireRange = { "fireRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShotgun, fireRange), METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::NewProp_fireRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::NewProp_fireRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalPelletsCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Shotgun.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalPelletsCount = { "horizontalPelletsCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShotgun, horizontalPelletsCount), METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalPelletsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalPelletsCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::NewProp_verticalPelletsCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Shotgun.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AShotgun_Statics::NewProp_verticalPelletsCount = { "verticalPelletsCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShotgun, verticalPelletsCount), METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::NewProp_verticalPelletsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::NewProp_verticalPelletsCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalSpreadRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Shotgun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalSpreadRotation = { "horizontalSpreadRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShotgun, horizontalSpreadRotation), METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalSpreadRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalSpreadRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::NewProp_verticalSpreadRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Shotgun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShotgun_Statics::NewProp_verticalSpreadRotation = { "verticalSpreadRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShotgun, verticalSpreadRotation), METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::NewProp_verticalSpreadRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::NewProp_verticalSpreadRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShotgun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgun_Statics::NewProp_baseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgun_Statics::NewProp_fireRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalPelletsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgun_Statics::NewProp_verticalPelletsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgun_Statics::NewProp_horizontalSpreadRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgun_Statics::NewProp_verticalSpreadRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotgun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotgun_Statics::ClassParams = {
		&AShotgun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShotgun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShotgun()
	{
		if (!Z_Registration_Info_UClass_AShotgun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShotgun.OuterSingleton, Z_Construct_UClass_AShotgun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShotgun.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AShotgun>()
	{
		return AShotgun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgun);
	AShotgun::~AShotgun() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Shotgun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Shotgun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShotgun, AShotgun::StaticClass, TEXT("AShotgun"), &Z_Registration_Info_UClass_AShotgun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgun), 3881313708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Shotgun_h_22591551(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Shotgun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Shotgun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
