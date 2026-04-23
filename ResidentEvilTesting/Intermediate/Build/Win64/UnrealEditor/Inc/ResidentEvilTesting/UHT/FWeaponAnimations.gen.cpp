// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Weapon Logic/FWeaponAnimations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFWeaponAnimations() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnimations();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponAnimations;
class UScriptStruct* FWeaponAnimations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponAnimations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponAnimations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAnimations, Z_Construct_UPackage__Script_ResidentEvilTesting(), TEXT("WeaponAnimations"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponAnimations.OuterSingleton;
}
template<> RESIDENTEVILTESTING_API UScriptStruct* StaticStruct<FWeaponAnimations>()
{
	return FWeaponAnimations::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeployingAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeployingAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningIdleAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunningIdleAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedIdleAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchedIdleAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedWalkingAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchedWalkingAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadingAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadingAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimingAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HolsteringAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HolsteringAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Why do struct names start with F specifically? I cannot see how the letter would be related \n" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
		{ "ToolTip", "Why do struct names start with F specifically? I cannot see how the letter would be related" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAnimations>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_DeployingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_DeployingAnimation = { "DeployingAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, DeployingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_DeployingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_DeployingAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, IdleAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_RunningIdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_RunningIdleAnimation = { "RunningIdleAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, RunningIdleAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_RunningIdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_RunningIdleAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedIdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedIdleAnimation = { "CrouchedIdleAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, CrouchedIdleAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedIdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedIdleAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedWalkingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedWalkingAnimation = { "CrouchedWalkingAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, CrouchedWalkingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedWalkingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedWalkingAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_FiringAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_FiringAnimation = { "FiringAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, FiringAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_FiringAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_FiringAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_ReloadingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_ReloadingAnimation = { "ReloadingAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, ReloadingAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_ReloadingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_ReloadingAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_AimingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_AimingAnimation = { "AimingAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, AimingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_AimingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_AimingAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_HolsteringAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/FWeaponAnimations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_HolsteringAnimation = { "HolsteringAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponAnimations, HolsteringAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_HolsteringAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_HolsteringAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_DeployingAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_IdleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_RunningIdleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedIdleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_CrouchedWalkingAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_FiringAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_ReloadingAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_AimingAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewProp_HolsteringAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAnimations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
		nullptr,
		&NewStructOps,
		"WeaponAnimations",
		sizeof(FWeaponAnimations),
		alignof(FWeaponAnimations),
		Z_Construct_UScriptStruct_FWeaponAnimations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnimations()
	{
		if (!Z_Registration_Info_UScriptStruct_WeaponAnimations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponAnimations.InnerSingleton, Z_Construct_UScriptStruct_FWeaponAnimations_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponAnimations.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_FWeaponAnimations_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_FWeaponAnimations_h_Statics::ScriptStructInfo[] = {
		{ FWeaponAnimations::StaticStruct, Z_Construct_UScriptStruct_FWeaponAnimations_Statics::NewStructOps, TEXT("WeaponAnimations"), &Z_Registration_Info_UScriptStruct_WeaponAnimations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponAnimations), 3180885542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_FWeaponAnimations_h_1271105174(TEXT("/Script/ResidentEvilTesting"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_FWeaponAnimations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_FWeaponAnimations_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
