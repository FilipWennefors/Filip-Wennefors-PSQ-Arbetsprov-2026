// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/ItemIcon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemIcon() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItemIcon();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItemIcon_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct ItemIcon_eventUpdateItemsCountText_Parms
	{
		int32 newItemsCountTextNumber;
	};
	static FName NAME_UItemIcon_UpdateItemsCountText = FName(TEXT("UpdateItemsCountText"));
	void UItemIcon::UpdateItemsCountText(int32 newItemsCountTextNumber)
	{
		ItemIcon_eventUpdateItemsCountText_Parms Parms;
		Parms.newItemsCountTextNumber=newItemsCountTextNumber;
		ProcessEvent(FindFunctionChecked(NAME_UItemIcon_UpdateItemsCountText),&Parms);
	}
	void UItemIcon::StaticRegisterNativesUItemIcon()
	{
	}
	struct Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newItemsCountTextNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::NewProp_newItemsCountTextNumber = { "newItemsCountTextNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ItemIcon_eventUpdateItemsCountText_Parms, newItemsCountTextNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::NewProp_newItemsCountTextNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemIcon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemIcon, nullptr, "UpdateItemsCountText", nullptr, nullptr, sizeof(ItemIcon_eventUpdateItemsCountText_Parms), Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemIcon_UpdateItemsCountText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemIcon_UpdateItemsCountText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemIcon);
	UClass* Z_Construct_UClass_UItemIcon_NoRegister()
	{
		return UItemIcon::StaticClass();
	}
	struct Z_Construct_UClass_UItemIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIconImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIconImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemIcon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemIcon_UpdateItemsCountText, "UpdateItemsCountText" }, // 3587899207
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemIcon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/ItemIcon.h" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemIcon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemIcon_Statics::NewProp_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemIcon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemIcon_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemIcon, Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemIcon_Statics::NewProp_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemIcon_Statics::NewProp_Canvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemIcon_Statics::NewProp_ItemIconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemIcon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemIcon_Statics::NewProp_ItemIconImage = { "ItemIconImage", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemIcon, ItemIconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemIcon_Statics::NewProp_ItemIconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemIcon_Statics::NewProp_ItemIconImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemIcon_Statics::NewProp_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemIcon_Statics::NewProp_ItemIconImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemIcon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemIcon_Statics::ClassParams = {
		&UItemIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemIcon_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemIcon()
	{
		if (!Z_Registration_Info_UClass_UItemIcon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemIcon.OuterSingleton, Z_Construct_UClass_UItemIcon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemIcon.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UItemIcon>()
	{
		return UItemIcon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemIcon);
	UItemIcon::~UItemIcon() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemIcon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemIcon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemIcon, UItemIcon::StaticClass, TEXT("UItemIcon"), &Z_Registration_Info_UClass_UItemIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemIcon), 3405952423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemIcon_h_354800381(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemIcon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemIcon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
