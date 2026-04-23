// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Pickup And Item Logic/AmmoItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoItem() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UAmmoItem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UAmmoItem_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UNewInventoryItem();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void UAmmoItem::StaticRegisterNativesUAmmoItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmmoItem);
	UClass* Z_Construct_UClass_UAmmoItem_NoRegister()
	{
		return UAmmoItem::StaticClass();
	}
	struct Z_Construct_UClass_UAmmoItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmmoItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNewInventoryItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickup And Item Logic/AmmoItem.h" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/AmmoItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmmoItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmmoItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmmoItem_Statics::ClassParams = {
		&UAmmoItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAmmoItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmmoItem()
	{
		if (!Z_Registration_Info_UClass_UAmmoItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmmoItem.OuterSingleton, Z_Construct_UClass_UAmmoItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAmmoItem.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UAmmoItem>()
	{
		return UAmmoItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmmoItem);
	UAmmoItem::~UAmmoItem() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_AmmoItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_AmmoItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAmmoItem, UAmmoItem::StaticClass, TEXT("UAmmoItem"), &Z_Registration_Info_UClass_UAmmoItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmmoItem), 3802946668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_AmmoItem_h_2639852711(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_AmmoItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_AmmoItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
