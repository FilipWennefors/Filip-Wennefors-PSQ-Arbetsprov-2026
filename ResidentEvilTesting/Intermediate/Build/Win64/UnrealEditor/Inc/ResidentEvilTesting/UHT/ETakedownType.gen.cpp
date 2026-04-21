// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Player Logic/ETakedownType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETakedownType() {}
// Cross Module References
	RESIDENTEVILTESTING_API UEnum* Z_Construct_UEnum_ResidentEvilTesting_ETakedownType();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETakedownType;
	static UEnum* ETakedownType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETakedownType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETakedownType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResidentEvilTesting_ETakedownType, Z_Construct_UPackage__Script_ResidentEvilTesting(), TEXT("ETakedownType"));
		}
		return Z_Registration_Info_UEnum_ETakedownType.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UEnum* StaticEnum<ETakedownType>()
	{
		return ETakedownType_StaticEnum();
	}
	struct Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics::Enumerators[] = {
		{ "ETakedownType::RoundhouseKick", (int64)ETakedownType::RoundhouseKick },
		{ "ETakedownType::GroundStab", (int64)ETakedownType::GroundStab },
		{ "ETakedownType::Backstab", (int64)ETakedownType::Backstab },
		{ "ETakedownType::NONE", (int64)ETakedownType::NONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics::Enum_MetaDataParams[] = {
		{ "Backstab.Name", "ETakedownType::Backstab" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** This enum exists because the player can perform multiple d\n * \n */" },
		{ "GroundStab.Name", "ETakedownType::GroundStab" },
		{ "ModuleRelativePath", "Public/Player Logic/ETakedownType.h" },
		{ "NONE.Name", "ETakedownType::NONE" },
		{ "RoundhouseKick.Name", "ETakedownType::RoundhouseKick" },
		{ "ToolTip", "This enum exists because the player can perform multiple d" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
		nullptr,
		"ETakedownType",
		"ETakedownType",
		Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ResidentEvilTesting_ETakedownType()
	{
		if (!Z_Registration_Info_UEnum_ETakedownType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETakedownType.InnerSingleton, Z_Construct_UEnum_ResidentEvilTesting_ETakedownType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETakedownType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ETakedownType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ETakedownType_h_Statics::EnumInfo[] = {
		{ ETakedownType_StaticEnum, TEXT("ETakedownType"), &Z_Registration_Info_UEnum_ETakedownType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 451650815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ETakedownType_h_2995586777(TEXT("/Script/ResidentEvilTesting"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ETakedownType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ETakedownType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
