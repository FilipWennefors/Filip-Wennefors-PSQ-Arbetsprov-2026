// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Pickup And Item Logic/SpecialItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_USpecialItem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_USpecialItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void USpecialItem::StaticRegisterNativesUSpecialItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpecialItem);
	UClass* Z_Construct_UClass_USpecialItem_NoRegister()
	{
		return USpecialItem::StaticClass();
	}
	struct Z_Construct_UClass_USpecialItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpecialItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpecialItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickup And Item Logic/SpecialItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/SpecialItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpecialItem_Statics::NewProp_ItemTexture_MetaData[] = {
		{ "Category", "SpecialItem" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/SpecialItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpecialItem_Statics::NewProp_ItemTexture = { "ItemTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpecialItem, ItemTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpecialItem_Statics::NewProp_ItemTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpecialItem_Statics::NewProp_ItemTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpecialItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpecialItem_Statics::NewProp_ItemTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpecialItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpecialItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpecialItem_Statics::ClassParams = {
		&USpecialItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpecialItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpecialItem_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpecialItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpecialItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpecialItem()
	{
		if (!Z_Registration_Info_UClass_USpecialItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpecialItem.OuterSingleton, Z_Construct_UClass_USpecialItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpecialItem.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<USpecialItem>()
	{
		return USpecialItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpecialItem);
	USpecialItem::~USpecialItem() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_SpecialItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_SpecialItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpecialItem, USpecialItem::StaticClass, TEXT("USpecialItem"), &Z_Registration_Info_UClass_USpecialItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpecialItem), 1426393449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_SpecialItem_h_3267215377(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_SpecialItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_SpecialItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
