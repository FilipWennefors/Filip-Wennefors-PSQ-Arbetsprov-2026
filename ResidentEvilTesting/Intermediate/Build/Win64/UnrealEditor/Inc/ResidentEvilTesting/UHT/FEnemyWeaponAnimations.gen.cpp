// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/FEnemyWeaponAnimations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEnemyWeaponAnimations() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyWeaponAnimations();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyWeaponAnimations;
class UScriptStruct* FEnemyWeaponAnimations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyWeaponAnimations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyWeaponAnimations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyWeaponAnimations, Z_Construct_UPackage__Script_ResidentEvilTesting(), TEXT("EnemyWeaponAnimations"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyWeaponAnimations.OuterSingleton;
}
template<> RESIDENTEVILTESTING_API UScriptStruct* StaticStruct<FEnemyWeaponAnimations>()
{
	return FEnemyWeaponAnimations::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackingMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackingMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/FEnemyWeaponAnimations.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyWeaponAnimations>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/FEnemyWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyWeaponAnimations, IdleAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_AttackingMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/FEnemyWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_AttackingMontage = { "AttackingMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnemyWeaponAnimations, AttackingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_AttackingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_AttackingMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_IdleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewProp_AttackingMontage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
		nullptr,
		&NewStructOps,
		"EnemyWeaponAnimations",
		sizeof(FEnemyWeaponAnimations),
		alignof(FEnemyWeaponAnimations),
		Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyWeaponAnimations()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyWeaponAnimations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyWeaponAnimations.InnerSingleton, Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyWeaponAnimations.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_FEnemyWeaponAnimations_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_FEnemyWeaponAnimations_h_Statics::ScriptStructInfo[] = {
		{ FEnemyWeaponAnimations::StaticStruct, Z_Construct_UScriptStruct_FEnemyWeaponAnimations_Statics::NewStructOps, TEXT("EnemyWeaponAnimations"), &Z_Registration_Info_UScriptStruct_EnemyWeaponAnimations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyWeaponAnimations), 1729218315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_FEnemyWeaponAnimations_h_2339150417(TEXT("/Script/ResidentEvilTesting"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_FEnemyWeaponAnimations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_FEnemyWeaponAnimations_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
