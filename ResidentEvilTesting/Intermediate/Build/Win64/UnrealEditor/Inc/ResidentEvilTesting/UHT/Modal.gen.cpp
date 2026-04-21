// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/Modal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UModal();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UModal_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void UModal::StaticRegisterNativesUModal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModal);
	UClass* Z_Construct_UClass_UModal_NoRegister()
	{
		return UModal::StaticClass();
	}
	struct Z_Construct_UClass_UModal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modalImageTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_modalImageTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modalTextBig_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_modalTextBig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modalTextSmaller_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_modalTextSmaller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modalImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_modalImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modalTextBlockBig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_modalTextBlockBig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modalTextBlockSmaller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_modalTextBlockSmaller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/Modal.h" },
		{ "ModuleRelativePath", "Public/UI Logic/Modal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModal_Statics::NewProp_modalImageTexture_MetaData[] = {
		{ "Category", "Modal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/Modal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModal_Statics::NewProp_modalImageTexture = { "modalImageTexture", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModal, modalImageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModal_Statics::NewProp_modalImageTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModal_Statics::NewProp_modalImageTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModal_Statics::NewProp_modalTextBig_MetaData[] = {
		{ "Category", "Modal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/Modal.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModal_Statics::NewProp_modalTextBig = { "modalTextBig", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModal, modalTextBig), METADATA_PARAMS(Z_Construct_UClass_UModal_Statics::NewProp_modalTextBig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModal_Statics::NewProp_modalTextBig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModal_Statics::NewProp_modalTextSmaller_MetaData[] = {
		{ "Category", "Modal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/Modal.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModal_Statics::NewProp_modalTextSmaller = { "modalTextSmaller", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModal, modalTextSmaller), METADATA_PARAMS(Z_Construct_UClass_UModal_Statics::NewProp_modalTextSmaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModal_Statics::NewProp_modalTextSmaller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModal_Statics::NewProp_modalImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Modal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/Modal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModal_Statics::NewProp_modalImage = { "modalImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModal, modalImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModal_Statics::NewProp_modalImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModal_Statics::NewProp_modalImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockBig_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Modal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/Modal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockBig = { "modalTextBlockBig", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModal, modalTextBlockBig), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockBig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockBig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockSmaller_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Modal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/Modal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockSmaller = { "modalTextBlockSmaller", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModal, modalTextBlockSmaller), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockSmaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockSmaller_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModal_Statics::NewProp_modalImageTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModal_Statics::NewProp_modalTextBig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModal_Statics::NewProp_modalTextSmaller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModal_Statics::NewProp_modalImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockBig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModal_Statics::NewProp_modalTextBlockSmaller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModal_Statics::ClassParams = {
		&UModal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModal_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModal()
	{
		if (!Z_Registration_Info_UClass_UModal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModal.OuterSingleton, Z_Construct_UClass_UModal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModal.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UModal>()
	{
		return UModal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModal);
	UModal::~UModal() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_Modal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_Modal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModal, UModal::StaticClass, TEXT("UModal"), &Z_Registration_Info_UClass_UModal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModal), 1512251263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_Modal_h_1176702956(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_Modal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_Modal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
