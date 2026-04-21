// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/CustomAnimationWarper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomAnimationWarper() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCustomAnimationWarper();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCustomAnimationWarper_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void UCustomAnimationWarper::StaticRegisterNativesUCustomAnimationWarper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomAnimationWarper);
	UClass* Z_Construct_UClass_UCustomAnimationWarper_NoRegister()
	{
		return UCustomAnimationWarper::StaticClass();
	}
	struct Z_Construct_UClass_UCustomAnimationWarper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_warpName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_warpName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_motionWarpStartTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_motionWarpStartTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpEndTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionWarpEndTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_motionWarpDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_motionWarpDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomAnimationWarper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomAnimationWarper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\x09This is a custom class to implement motion warping for animation montages. Since Motion warping is experimental/in beta for Unreal and not for shipping builds, and since\n *\x09the built-in motion warper lacks the ability to disable collisions/warp through colliders, this is the solution used\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "CustomAnimationWarper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomAnimationWarper.h" },
		{ "ToolTip", "This is a custom class to implement motion warping for animation montages. Since Motion warping is experimental/in beta for Unreal and not for shipping builds, and since\n*     the built-in motion warper lacks the ability to disable collisions/warp through colliders, this is the solution used" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_warpName_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/CustomAnimationWarper.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_warpName = { "warpName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomAnimationWarper, warpName), METADATA_PARAMS(Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_warpName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_warpName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpStartTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomAnimationWarper.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpStartTransform = { "motionWarpStartTransform", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomAnimationWarper, motionWarpStartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpStartTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpStartTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_MotionWarpEndTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomAnimationWarper.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_MotionWarpEndTransform = { "MotionWarpEndTransform", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomAnimationWarper, MotionWarpEndTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_MotionWarpEndTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_MotionWarpEndTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomAnimationWarper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpDuration = { "motionWarpDuration", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomAnimationWarper, motionWarpDuration), METADATA_PARAMS(Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomAnimationWarper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_warpName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpStartTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_MotionWarpEndTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomAnimationWarper_Statics::NewProp_motionWarpDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomAnimationWarper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomAnimationWarper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomAnimationWarper_Statics::ClassParams = {
		&UCustomAnimationWarper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomAnimationWarper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAnimationWarper_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomAnimationWarper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAnimationWarper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomAnimationWarper()
	{
		if (!Z_Registration_Info_UClass_UCustomAnimationWarper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomAnimationWarper.OuterSingleton, Z_Construct_UClass_UCustomAnimationWarper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomAnimationWarper.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UCustomAnimationWarper>()
	{
		return UCustomAnimationWarper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomAnimationWarper);
	UCustomAnimationWarper::~UCustomAnimationWarper() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomAnimationWarper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomAnimationWarper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomAnimationWarper, UCustomAnimationWarper::StaticClass, TEXT("UCustomAnimationWarper"), &Z_Registration_Info_UClass_UCustomAnimationWarper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomAnimationWarper), 2964246778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomAnimationWarper_h_1664118243(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomAnimationWarper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomAnimationWarper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
