// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEnemyCollisionCompParams() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyCollisionCompParams();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyCollisionCompParams;
class UScriptStruct* FEnemyCollisionCompParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyCollisionCompParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyCollisionCompParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyCollisionCompParams, Z_Construct_UPackage__Script_ResidentEvilTesting(), TEXT("EnemyCollisionCompParams"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyCollisionCompParams.OuterSingleton;
}
template<> RESIDENTEVILTESTING_API UScriptStruct* StaticStruct<FEnemyCollisionCompParams>()
{
	return FEnemyCollisionCompParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHitAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnHitAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitStunDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hitStunDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWeakSpot_MetaData[];
#endif
		static void NewProp_bIsWeakSpot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeakSpot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyCollisionCompParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_OnHitAnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_OnHitAnimMontage = { "OnHitAnimMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyCollisionCompParams, OnHitAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_OnHitAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_OnHitAnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_hitStunDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_hitStunDuration = { "hitStunDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyCollisionCompParams, hitStunDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_hitStunDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_hitStunDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_damageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_damageMultiplier = { "damageMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyCollisionCompParams, damageMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_damageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_damageMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_bIsWeakSpot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_bIsWeakSpot_SetBit(void* Obj)
	{
		((FEnemyCollisionCompParams*)Obj)->bIsWeakSpot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_bIsWeakSpot = { "bIsWeakSpot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEnemyCollisionCompParams), &Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_bIsWeakSpot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_bIsWeakSpot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_bIsWeakSpot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_OnHitAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_hitStunDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_damageMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewProp_bIsWeakSpot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
		nullptr,
		&NewStructOps,
		"EnemyCollisionCompParams",
		sizeof(FEnemyCollisionCompParams),
		alignof(FEnemyCollisionCompParams),
		Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyCollisionCompParams()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyCollisionCompParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyCollisionCompParams.InnerSingleton, Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyCollisionCompParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_FEnemyCollisionCompParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_FEnemyCollisionCompParams_h_Statics::ScriptStructInfo[] = {
		{ FEnemyCollisionCompParams::StaticStruct, Z_Construct_UScriptStruct_FEnemyCollisionCompParams_Statics::NewStructOps, TEXT("EnemyCollisionCompParams"), &Z_Registration_Info_UScriptStruct_EnemyCollisionCompParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyCollisionCompParams), 1807156687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_FEnemyCollisionCompParams_h_2212633041(TEXT("/Script/ResidentEvilTesting"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_FEnemyCollisionCompParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_FEnemyCollisionCompParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
