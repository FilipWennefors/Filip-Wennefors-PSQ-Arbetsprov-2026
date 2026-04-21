// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/EnemyBaseWeapon.h"
#include "ResidentEvilTesting/Public/Enemy Logic/FEnemyWeaponAnimations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBaseWeapon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AEnemyBaseWeapon();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AEnemyBaseWeapon_NoRegister();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyWeaponAnimations();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyBaseWeapon::execGetAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEnemyWeaponAnimations*)Z_Param__Result=P_THIS->GetAnimations();
		P_NATIVE_END;
	}
	void AEnemyBaseWeapon::StaticRegisterNativesAEnemyBaseWeapon()
	{
		UClass* Class = AEnemyBaseWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimations", &AEnemyBaseWeapon::execGetAnimations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics
	{
		struct EnemyBaseWeapon_eventGetAnimations_Parms
		{
			FEnemyWeaponAnimations ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnemyBaseWeapon_eventGetAnimations_Parms, ReturnValue), Z_Construct_UScriptStruct_FEnemyWeaponAnimations, METADATA_PARAMS(nullptr, 0) }; // 1729218315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Enemy Logic/EnemyBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBaseWeapon, nullptr, "GetAnimations", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::EnemyBaseWeapon_eventGetAnimations_Parms), Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBaseWeapon);
	UClass* Z_Construct_UClass_AEnemyBaseWeapon_NoRegister()
	{
		return AEnemyBaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animations_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_animations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyBaseWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBaseWeapon_GetAnimations, "GetAnimations" }, // 3035476345
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy Logic/EnemyBaseWeapon.h" },
		{ "ModuleRelativePath", "Public/Enemy Logic/EnemyBaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_weaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/EnemyBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_weaponMesh = { "weaponMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyBaseWeapon, weaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_weaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_weaponMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_animations_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/EnemyBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_animations = { "animations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyBaseWeapon, animations), Z_Construct_UScriptStruct_FEnemyWeaponAnimations, METADATA_PARAMS(Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_animations_MetaData)) }; // 1729218315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBaseWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_weaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBaseWeapon_Statics::NewProp_animations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBaseWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBaseWeapon_Statics::ClassParams = {
		&AEnemyBaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyBaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyBaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyBaseWeapon()
	{
		if (!Z_Registration_Info_UClass_AEnemyBaseWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBaseWeapon.OuterSingleton, Z_Construct_UClass_AEnemyBaseWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyBaseWeapon.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AEnemyBaseWeapon>()
	{
		return AEnemyBaseWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBaseWeapon);
	AEnemyBaseWeapon::~AEnemyBaseWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemyBaseWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemyBaseWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBaseWeapon, AEnemyBaseWeapon::StaticClass, TEXT("AEnemyBaseWeapon"), &Z_Registration_Info_UClass_AEnemyBaseWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBaseWeapon), 179757737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemyBaseWeapon_h_4198627371(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemyBaseWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemyBaseWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
