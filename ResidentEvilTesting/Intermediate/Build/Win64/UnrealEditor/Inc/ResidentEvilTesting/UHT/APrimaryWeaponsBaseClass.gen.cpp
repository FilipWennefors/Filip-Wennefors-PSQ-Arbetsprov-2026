// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Weapon Logic/APrimaryWeaponsBaseClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPrimaryWeaponsBaseClass() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_APrimaryWeaponsBaseClass();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_APrimaryWeaponsBaseClass_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AWeaponsBaseClass();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void APrimaryWeaponsBaseClass::StaticRegisterNativesAPrimaryWeaponsBaseClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimaryWeaponsBaseClass);
	UClass* Z_Construct_UClass_APrimaryWeaponsBaseClass_NoRegister()
	{
		return APrimaryWeaponsBaseClass::StaticClass();
	}
	struct Z_Construct_UClass_APrimaryWeaponsBaseClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrimaryWeaponsBaseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponsBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimaryWeaponsBaseClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Primary weapon is the class used by player weapons in the weapon wheel and as a primary weapon IE, pistols, shotguns, rifles, grenades etc. It does not include knives\n" },
		{ "IncludePath", "Weapon Logic/APrimaryWeaponsBaseClass.h" },
		{ "ModuleRelativePath", "Public/Weapon Logic/APrimaryWeaponsBaseClass.h" },
		{ "ToolTip", "Primary weapon is the class used by player weapons in the weapon wheel and as a primary weapon IE, pistols, shotguns, rifles, grenades etc. It does not include knives" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrimaryWeaponsBaseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimaryWeaponsBaseClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimaryWeaponsBaseClass_Statics::ClassParams = {
		&APrimaryWeaponsBaseClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APrimaryWeaponsBaseClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryWeaponsBaseClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrimaryWeaponsBaseClass()
	{
		if (!Z_Registration_Info_UClass_APrimaryWeaponsBaseClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimaryWeaponsBaseClass.OuterSingleton, Z_Construct_UClass_APrimaryWeaponsBaseClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrimaryWeaponsBaseClass.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<APrimaryWeaponsBaseClass>()
	{
		return APrimaryWeaponsBaseClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimaryWeaponsBaseClass);
	APrimaryWeaponsBaseClass::~APrimaryWeaponsBaseClass() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_APrimaryWeaponsBaseClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_APrimaryWeaponsBaseClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrimaryWeaponsBaseClass, APrimaryWeaponsBaseClass::StaticClass, TEXT("APrimaryWeaponsBaseClass"), &Z_Registration_Info_UClass_APrimaryWeaponsBaseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimaryWeaponsBaseClass), 3878359294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_APrimaryWeaponsBaseClass_h_263616255(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_APrimaryWeaponsBaseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_APrimaryWeaponsBaseClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
