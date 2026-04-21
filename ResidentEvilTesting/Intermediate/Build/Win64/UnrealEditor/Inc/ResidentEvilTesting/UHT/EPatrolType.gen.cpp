// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/EPatrolType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPatrolType() {}
// Cross Module References
	RESIDENTEVILTESTING_API UEnum* Z_Construct_UEnum_ResidentEvilTesting_EPatrolType();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatrolType;
	static UEnum* EPatrolType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPatrolType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPatrolType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResidentEvilTesting_EPatrolType, Z_Construct_UPackage__Script_ResidentEvilTesting(), TEXT("EPatrolType"));
		}
		return Z_Registration_Info_UEnum_EPatrolType.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UEnum* StaticEnum<EPatrolType>()
	{
		return EPatrolType_StaticEnum();
	}
	struct Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics::Enumerators[] = {
		{ "EPatrolType::StandStill", (int64)EPatrolType::StandStill },
		{ "EPatrolType::PatrolRadius", (int64)EPatrolType::PatrolRadius },
		{ "EPatrolType::PatrolSplinePath", (int64)EPatrolType::PatrolSplinePath },
		{ "EPatrolType::NONE", (int64)EPatrolType::NONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Enemy Logic/EPatrolType.h" },
		{ "NONE.Comment", "/**\n * \n */" },
		{ "NONE.Name", "EPatrolType::NONE" },
		{ "PatrolRadius.Comment", "/**\n * \n */" },
		{ "PatrolRadius.Name", "EPatrolType::PatrolRadius" },
		{ "PatrolSplinePath.Comment", "/**\n * \n */" },
		{ "PatrolSplinePath.Name", "EPatrolType::PatrolSplinePath" },
		{ "StandStill.Comment", "/**\n * \n */" },
		{ "StandStill.Name", "EPatrolType::StandStill" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
		nullptr,
		"EPatrolType",
		"EPatrolType",
		Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ResidentEvilTesting_EPatrolType()
	{
		if (!Z_Registration_Info_UEnum_EPatrolType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatrolType.InnerSingleton, Z_Construct_UEnum_ResidentEvilTesting_EPatrolType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPatrolType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EPatrolType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EPatrolType_h_Statics::EnumInfo[] = {
		{ EPatrolType_StaticEnum, TEXT("EPatrolType"), &Z_Registration_Info_UEnum_EPatrolType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3360514232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EPatrolType_h_1001761087(TEXT("/Script/ResidentEvilTesting"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EPatrolType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EPatrolType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
