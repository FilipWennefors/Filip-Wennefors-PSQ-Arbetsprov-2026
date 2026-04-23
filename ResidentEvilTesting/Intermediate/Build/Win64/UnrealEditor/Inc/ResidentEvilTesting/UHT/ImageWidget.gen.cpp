// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/ImageWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageWidget() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UImageWidget();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UImageWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void UImageWidget::StaticRegisterNativesUImageWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageWidget);
	UClass* Z_Construct_UClass_UImageWidget_NoRegister()
	{
		return UImageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UImageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Image widget is a class created that represents the background images in the attache case\n * \n */" },
		{ "IncludePath", "UI Logic/ImageWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/ImageWidget.h" },
		{ "ToolTip", "Image widget is a class created that represents the background images in the attache case" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageWidget_Statics::NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ImageWidget" },
		{ "Comment", "//Temporary for testing, Change back to protected afterwards\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/ImageWidget.h" },
		{ "ToolTip", "Temporary for testing, Change back to protected afterwards" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageWidget_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageWidget, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageWidget_Statics::NewProp_SizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageWidget_Statics::NewProp_SizeBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageWidget_Statics::NewProp_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ImageWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/ImageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageWidget_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageWidget, Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageWidget_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageWidget_Statics::NewProp_Image_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageWidget_Statics::NewProp_SizeBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageWidget_Statics::NewProp_Image,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageWidget_Statics::ClassParams = {
		&UImageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImageWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImageWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageWidget()
	{
		if (!Z_Registration_Info_UClass_UImageWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageWidget.OuterSingleton, Z_Construct_UClass_UImageWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageWidget.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UImageWidget>()
	{
		return UImageWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageWidget);
	UImageWidget::~UImageWidget() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ImageWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ImageWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImageWidget, UImageWidget::StaticClass, TEXT("UImageWidget"), &Z_Registration_Info_UClass_UImageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageWidget), 906785084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ImageWidget_h_1233800568(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ImageWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ImageWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
