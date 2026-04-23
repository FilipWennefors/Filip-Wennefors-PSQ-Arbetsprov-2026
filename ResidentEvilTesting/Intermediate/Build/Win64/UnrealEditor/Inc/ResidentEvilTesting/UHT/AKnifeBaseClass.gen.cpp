// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Weapon Logic/AKnifeBaseClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAKnifeBaseClass() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AKnifeBaseClass();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AKnifeBaseClass_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AWeaponsBaseClass();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void AKnifeBaseClass::StaticRegisterNativesAKnifeBaseClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKnifeBaseClass);
	UClass* Z_Construct_UClass_AKnifeBaseClass_NoRegister()
	{
		return AKnifeBaseClass::StaticClass();
	}
	struct Z_Construct_UClass_AKnifeBaseClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKnifeBaseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponsBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeBaseClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon Logic/AKnifeBaseClass.h" },
		{ "ModuleRelativePath", "Public/Weapon Logic/AKnifeBaseClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKnifeBaseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnifeBaseClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKnifeBaseClass_Statics::ClassParams = {
		&AKnifeBaseClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKnifeBaseClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeBaseClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKnifeBaseClass()
	{
		if (!Z_Registration_Info_UClass_AKnifeBaseClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKnifeBaseClass.OuterSingleton, Z_Construct_UClass_AKnifeBaseClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKnifeBaseClass.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AKnifeBaseClass>()
	{
		return AKnifeBaseClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKnifeBaseClass);
	AKnifeBaseClass::~AKnifeBaseClass() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_AKnifeBaseClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_AKnifeBaseClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKnifeBaseClass, AKnifeBaseClass::StaticClass, TEXT("AKnifeBaseClass"), &Z_Registration_Info_UClass_AKnifeBaseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKnifeBaseClass), 2843984400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_AKnifeBaseClass_h_504532299(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_AKnifeBaseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_AKnifeBaseClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
