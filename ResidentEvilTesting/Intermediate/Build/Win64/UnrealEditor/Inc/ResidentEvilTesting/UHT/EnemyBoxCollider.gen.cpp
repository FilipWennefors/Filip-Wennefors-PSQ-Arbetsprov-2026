// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CustomCollisions/EnemyBoxCollider.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBoxCollider() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UEnemyBoxCollider();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UEnemyBoxCollider_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UEnemyHitComponent_NoRegister();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyCollisionCompParams();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	void UEnemyBoxCollider::StaticRegisterNativesUEnemyBoxCollider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyBoxCollider);
	UClass* Z_Construct_UClass_UEnemyBoxCollider_NoRegister()
	{
		return UEnemyBoxCollider::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyBoxCollider_Statics
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
	UObject* (*const Z_Construct_UClass_UEnemyBoxCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBoxCollider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Enemy Box Collider" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Enemy Logic/CustomCollisions/EnemyBoxCollider.h" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/EnemyBoxCollider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBoxCollider_Statics::NewProp_parameters_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/EnemyBoxCollider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyBoxCollider_Statics::NewProp_parameters = { "parameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyBoxCollider, parameters), Z_Construct_UScriptStruct_FEnemyCollisionCompParams, METADATA_PARAMS(Z_Construct_UClass_UEnemyBoxCollider_Statics::NewProp_parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBoxCollider_Statics::NewProp_parameters_MetaData)) }; // 1807156687
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyBoxCollider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBoxCollider_Statics::NewProp_parameters,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnemyBoxCollider_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemyHitComponent_NoRegister, (int32)VTABLE_OFFSET(UEnemyBoxCollider, IEnemyHitComponent), false },  // 2297991691
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyBoxCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyBoxCollider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyBoxCollider_Statics::ClassParams = {
		&UEnemyBoxCollider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyBoxCollider_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBoxCollider_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyBoxCollider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBoxCollider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyBoxCollider()
	{
		if (!Z_Registration_Info_UClass_UEnemyBoxCollider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyBoxCollider.OuterSingleton, Z_Construct_UClass_UEnemyBoxCollider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyBoxCollider.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UEnemyBoxCollider>()
	{
		return UEnemyBoxCollider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyBoxCollider);
	UEnemyBoxCollider::~UEnemyBoxCollider() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyBoxCollider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyBoxCollider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyBoxCollider, UEnemyBoxCollider::StaticClass, TEXT("UEnemyBoxCollider"), &Z_Registration_Info_UClass_UEnemyBoxCollider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyBoxCollider), 1531038414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyBoxCollider_h_2946846589(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyBoxCollider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyBoxCollider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
