// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/WidgetUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetUtilities() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UWidgetUtilities();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UWidgetUtilities_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetUtilities::execGetAllImagesInPanel)
	{
		P_GET_OBJECT(UPanelWidget,Z_Param_panelWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UImage*>*)Z_Param__Result=UWidgetUtilities::GetAllImagesInPanel(Z_Param_panelWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetUtilities::execTryTintHoveredImage)
	{
		P_GET_OBJECT(UPanelWidget,Z_Param_panelWidget);
		P_GET_STRUCT(FLinearColor,Z_Param_tintColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWidgetUtilities::TryTintHoveredImage(Z_Param_panelWidget,Z_Param_tintColor);
		P_NATIVE_END;
	}
	void UWidgetUtilities::StaticRegisterNativesUWidgetUtilities()
	{
		UClass* Class = UWidgetUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllImagesInPanel", &UWidgetUtilities::execGetAllImagesInPanel },
			{ "TryTintHoveredImage", &UWidgetUtilities::execTryTintHoveredImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics
	{
		struct WidgetUtilities_eventGetAllImagesInPanel_Parms
		{
			UPanelWidget* panelWidget;
			TArray<UImage*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_panelWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_panelWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_panelWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_panelWidget = { "panelWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetUtilities_eventGetAllImagesInPanel_Parms, panelWidget), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_panelWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_panelWidget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetUtilities_eventGetAllImagesInPanel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_panelWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "WidgetUtilities" },
		{ "ModuleRelativePath", "Public/UI Logic/WidgetUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetUtilities, nullptr, "GetAllImagesInPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::WidgetUtilities_eventGetAllImagesInPanel_Parms), Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics
	{
		struct WidgetUtilities_eventTryTintHoveredImage_Parms
		{
			UPanelWidget* panelWidget;
			FLinearColor tintColor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_panelWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_panelWidget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tintColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_panelWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_panelWidget = { "panelWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetUtilities_eventTryTintHoveredImage_Parms, panelWidget), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_panelWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_panelWidget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_tintColor = { "tintColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetUtilities_eventTryTintHoveredImage_Parms, tintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetUtilities_eventTryTintHoveredImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetUtilities_eventTryTintHoveredImage_Parms), &Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_panelWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_tintColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "WidgetUtilities" },
		{ "ModuleRelativePath", "Public/UI Logic/WidgetUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetUtilities, nullptr, "TryTintHoveredImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::WidgetUtilities_eventTryTintHoveredImage_Parms), Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetUtilities);
	UClass* Z_Construct_UClass_UWidgetUtilities_NoRegister()
	{
		return UWidgetUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetUtilities_GetAllImagesInPanel, "GetAllImagesInPanel" }, // 3517283020
		{ &Z_Construct_UFunction_UWidgetUtilities_TryTintHoveredImage, "TryTintHoveredImage" }, // 3919116884
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/WidgetUtilities.h" },
		{ "ModuleRelativePath", "Public/UI Logic/WidgetUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetUtilities_Statics::ClassParams = {
		&UWidgetUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetUtilities()
	{
		if (!Z_Registration_Info_UClass_UWidgetUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetUtilities.OuterSingleton, Z_Construct_UClass_UWidgetUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetUtilities.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UWidgetUtilities>()
	{
		return UWidgetUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetUtilities);
	UWidgetUtilities::~UWidgetUtilities() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WidgetUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WidgetUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetUtilities, UWidgetUtilities::StaticClass, TEXT("UWidgetUtilities"), &Z_Registration_Info_UClass_UWidgetUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetUtilities), 3124474144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WidgetUtilities_h_3563302793(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WidgetUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_WidgetUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
