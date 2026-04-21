// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CustomCollisions/EnemySphereCollider.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySphereCollider() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UEnemyHitComponent_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UEnemySphereCollider();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UEnemySphereCollider_NoRegister();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyCollisionCompParams();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void UEnemySphereCollider::StaticRegisterNativesUEnemySphereCollider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemySphereCollider);
	UClass* Z_Construct_UClass_UEnemySphereCollider_NoRegister()
	{
		return UEnemySphereCollider::StaticClass();
	}
	struct Z_Construct_UClass_UEnemySphereCollider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemySphereCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySphereCollider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Enemy Sphere Collider" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Enemy Logic/CustomCollisions/EnemySphereCollider.h" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/EnemySphereCollider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySphereCollider_Statics::NewProp_parameters_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/EnemySphereCollider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemySphereCollider_Statics::NewProp_parameters = { "parameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemySphereCollider, parameters), Z_Construct_UScriptStruct_FEnemyCollisionCompParams, METADATA_PARAMS(Z_Construct_UClass_UEnemySphereCollider_Statics::NewProp_parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySphereCollider_Statics::NewProp_parameters_MetaData)) }; // 1807156687
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemySphereCollider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySphereCollider_Statics::NewProp_parameters,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnemySphereCollider_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemyHitComponent_NoRegister, (int32)VTABLE_OFFSET(UEnemySphereCollider, IEnemyHitComponent), false },  // 2297991691
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemySphereCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySphereCollider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemySphereCollider_Statics::ClassParams = {
		&UEnemySphereCollider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemySphereCollider_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySphereCollider_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemySphereCollider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySphereCollider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemySphereCollider()
	{
		if (!Z_Registration_Info_UClass_UEnemySphereCollider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemySphereCollider.OuterSingleton, Z_Construct_UClass_UEnemySphereCollider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemySphereCollider.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UEnemySphereCollider>()
	{
		return UEnemySphereCollider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemySphereCollider);
	UEnemySphereCollider::~UEnemySphereCollider() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemySphereCollider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemySphereCollider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemySphereCollider, UEnemySphereCollider::StaticClass, TEXT("UEnemySphereCollider"), &Z_Registration_Info_UClass_UEnemySphereCollider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemySphereCollider), 650265495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemySphereCollider_h_2250163279(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemySphereCollider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemySphereCollider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
