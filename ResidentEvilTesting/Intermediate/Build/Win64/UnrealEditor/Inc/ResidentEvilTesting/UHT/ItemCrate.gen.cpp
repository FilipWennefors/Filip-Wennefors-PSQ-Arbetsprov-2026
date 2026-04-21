// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Pickup And Item Logic/ItemCrate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemCrate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AInteractableObject();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AItemCrate();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AItemCrate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void AItemCrate::StaticRegisterNativesAItemCrate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemCrate);
	UClass* Z_Construct_UClass_AItemCrate_NoRegister()
	{
		return AItemCrate::StaticClass();
	}
	struct Z_Construct_UClass_AItemCrate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrateHitbox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrateHitbox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPickup_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemPickup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemCrate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemCrate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup And Item Logic/ItemCrate.h" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/ItemCrate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemCrate_Statics::NewProp_CrateHitbox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/ItemCrate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemCrate_Statics::NewProp_CrateHitbox = { "CrateHitbox", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AItemCrate, CrateHitbox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemCrate_Statics::NewProp_CrateHitbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemCrate_Statics::NewProp_CrateHitbox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemCrate_Statics::NewProp_ItemPickup_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/ItemCrate.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemCrate_Statics::NewProp_ItemPickup = { "ItemPickup", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AItemCrate, ItemPickup), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemCrate_Statics::NewProp_ItemPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemCrate_Statics::NewProp_ItemPickup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemCrate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemCrate_Statics::NewProp_CrateHitbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemCrate_Statics::NewProp_ItemPickup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemCrate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemCrate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemCrate_Statics::ClassParams = {
		&AItemCrate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AItemCrate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemCrate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemCrate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemCrate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemCrate()
	{
		if (!Z_Registration_Info_UClass_AItemCrate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemCrate.OuterSingleton, Z_Construct_UClass_AItemCrate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemCrate.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AItemCrate>()
	{
		return AItemCrate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemCrate);
	AItemCrate::~AItemCrate() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_ItemCrate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_ItemCrate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemCrate, AItemCrate::StaticClass, TEXT("AItemCrate"), &Z_Registration_Info_UClass_AItemCrate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemCrate), 4099355501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_ItemCrate_h_1060072487(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_ItemCrate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_ItemCrate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
