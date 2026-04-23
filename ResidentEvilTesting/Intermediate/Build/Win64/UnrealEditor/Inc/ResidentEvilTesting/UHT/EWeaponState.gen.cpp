// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Player Logic/EWeaponState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWeaponState() {}
// Cross Module References
	RESIDENTEVILTESTING_API UEnum* Z_Construct_UEnum_ResidentEvilTesting_EWeaponState();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
	static UEnum* EWeaponState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResidentEvilTesting_EWeaponState, Z_Construct_UPackage__Script_ResidentEvilTesting(), TEXT("EWeaponState"));
		}
		return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UEnum* StaticEnum<EWeaponState>()
	{
		return EWeaponState_StaticEnum();
	}
	struct Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics::Enumerators[] = {
		{ "EWeaponState::Deploying", (int64)EWeaponState::Deploying },
		{ "EWeaponState::Idle", (int64)EWeaponState::Idle },
		{ "EWeaponState::Aiming", (int64)EWeaponState::Aiming },
		{ "EWeaponState::Holstering", (int64)EWeaponState::Holstering },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics::Enum_MetaDataParams[] = {
		{ "Aiming.Comment", "/**\n * \n */" },
		{ "Aiming.Name", "EWeaponState::Aiming" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "Deploying.Comment", "/**\n * \n */" },
		{ "Deploying.Name", "EWeaponState::Deploying" },
		{ "Holstering.Comment", "/**\n * \n */" },
		{ "Holstering.Name", "EWeaponState::Holstering" },
		{ "Idle.Comment", "/**\n * \n */" },
		{ "Idle.Name", "EWeaponState::Idle" },
		{ "ModuleRelativePath", "Public/Player Logic/EWeaponState.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
		nullptr,
		"EWeaponState",
		"EWeaponState",
		Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ResidentEvilTesting_EWeaponState()
	{
		if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_ResidentEvilTesting_EWeaponState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_EWeaponState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_EWeaponState_h_Statics::EnumInfo[] = {
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1983975811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_EWeaponState_h_2073534553(TEXT("/Script/ResidentEvilTesting"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_EWeaponState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_EWeaponState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
