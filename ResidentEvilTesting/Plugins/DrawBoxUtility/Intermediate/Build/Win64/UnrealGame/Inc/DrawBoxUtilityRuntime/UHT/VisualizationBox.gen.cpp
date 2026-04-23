// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrawBoxUtilityRuntime/Public/VisualizationBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualizationBox() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DRAWBOXUTILITYRUNTIME_API UClass* Z_Construct_UClass_UVisualizationBox();
	DRAWBOXUTILITYRUNTIME_API UClass* Z_Construct_UClass_UVisualizationBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DrawBoxUtilityRuntime();
// End Cross Module References
	void UVisualizationBox::StaticRegisterNativesUVisualizationBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualizationBox);
	UClass* Z_Construct_UClass_UVisualizationBox_NoRegister()
	{
		return UVisualizationBox::StaticClass();
	}
	struct Z_Construct_UClass_UVisualizationBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_boxDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_boxOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lineThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualizationBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DrawBoxUtilityRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//Component to draw an editor only box. Can be useful for various visualizations\n" },
		{ "IncludePath", "VisualizationBox.h" },
		{ "ModuleRelativePath", "Public/VisualizationBox.h" },
		{ "ToolTip", "Component to draw an editor only box. Can be useful for various visualizations" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxDimensions_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/VisualizationBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxDimensions = { "boxDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVisualizationBox, boxDimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxDimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxOffset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/VisualizationBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxOffset = { "boxOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVisualizationBox, boxOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationBox_Statics::NewProp_lineThickness_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/VisualizationBox.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVisualizationBox_Statics::NewProp_lineThickness = { "lineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVisualizationBox, lineThickness), METADATA_PARAMS(Z_Construct_UClass_UVisualizationBox_Statics::NewProp_lineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationBox_Statics::NewProp_lineThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVisualizationBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisualizationBox_Statics::NewProp_boxOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisualizationBox_Statics::NewProp_lineThickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualizationBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualizationBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualizationBox_Statics::ClassParams = {
		&UVisualizationBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVisualizationBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationBox_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVisualizationBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualizationBox()
	{
		if (!Z_Registration_Info_UClass_UVisualizationBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualizationBox.OuterSingleton, Z_Construct_UClass_UVisualizationBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVisualizationBox.OuterSingleton;
	}
	template<> DRAWBOXUTILITYRUNTIME_API UClass* StaticClass<UVisualizationBox>()
	{
		return UVisualizationBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualizationBox);
	UVisualizationBox::~UVisualizationBox() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DrawBoxUtility_Source_DrawBoxUtilityRuntime_Public_VisualizationBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DrawBoxUtility_Source_DrawBoxUtilityRuntime_Public_VisualizationBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVisualizationBox, UVisualizationBox::StaticClass, TEXT("UVisualizationBox"), &Z_Registration_Info_UClass_UVisualizationBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualizationBox), 1252321129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DrawBoxUtility_Source_DrawBoxUtilityRuntime_Public_VisualizationBox_h_49349433(TEXT("/Script/DrawBoxUtilityRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DrawBoxUtility_Source_DrawBoxUtilityRuntime_Public_VisualizationBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DrawBoxUtility_Source_DrawBoxUtilityRuntime_Public_VisualizationBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
