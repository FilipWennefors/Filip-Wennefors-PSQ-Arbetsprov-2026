// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CentralEnemyCommanderSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCentralEnemyCommanderSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCentralEnemyCommanderSubsystem();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCentralEnemyCommanderSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct CentralEnemyCommanderSubsystem_eventNotifyDesireEngagePlayer_Parms
	{
		APawn* EnemyPawn;
	};
	struct CentralEnemyCommanderSubsystem_eventOnEnemyKilled_Parms
	{
		ABaseEnemy* EnemyKilled;
		bool bIsReallyDead;
	};
	static FName NAME_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer = FName(TEXT("NotifyDesireEngagePlayer"));
	void UCentralEnemyCommanderSubsystem::NotifyDesireEngagePlayer(APawn* EnemyPawn)
	{
		CentralEnemyCommanderSubsystem_eventNotifyDesireEngagePlayer_Parms Parms;
		Parms.EnemyPawn=EnemyPawn;
		ProcessEvent(FindFunctionChecked(NAME_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer),&Parms);
	}
	static FName NAME_UCentralEnemyCommanderSubsystem_OnEnemyKilled = FName(TEXT("OnEnemyKilled"));
	void UCentralEnemyCommanderSubsystem::OnEnemyKilled(ABaseEnemy* EnemyKilled, bool bIsReallyDead)
	{
		CentralEnemyCommanderSubsystem_eventOnEnemyKilled_Parms Parms;
		Parms.EnemyKilled=EnemyKilled;
		Parms.bIsReallyDead=bIsReallyDead ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCentralEnemyCommanderSubsystem_OnEnemyKilled),&Parms);
	}
	static FName NAME_UCentralEnemyCommanderSubsystem_OnInitializedBP = FName(TEXT("OnInitializedBP"));
	void UCentralEnemyCommanderSubsystem::OnInitializedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCentralEnemyCommanderSubsystem_OnInitializedBP),NULL);
	}
	void UCentralEnemyCommanderSubsystem::StaticRegisterNativesUCentralEnemyCommanderSubsystem()
	{
	}
	struct Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::NewProp_EnemyPawn = { "EnemyPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CentralEnemyCommanderSubsystem_eventNotifyDesireEngagePlayer_Parms, EnemyPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::NewProp_EnemyPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/CentralEnemyCommanderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCentralEnemyCommanderSubsystem, nullptr, "NotifyDesireEngagePlayer", nullptr, nullptr, sizeof(CentralEnemyCommanderSubsystem_eventNotifyDesireEngagePlayer_Parms), Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyKilled;
		static void NewProp_bIsReallyDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReallyDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::NewProp_EnemyKilled = { "EnemyKilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CentralEnemyCommanderSubsystem_eventOnEnemyKilled_Parms, EnemyKilled), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::NewProp_bIsReallyDead_SetBit(void* Obj)
	{
		((CentralEnemyCommanderSubsystem_eventOnEnemyKilled_Parms*)Obj)->bIsReallyDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::NewProp_bIsReallyDead = { "bIsReallyDead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CentralEnemyCommanderSubsystem_eventOnEnemyKilled_Parms), &Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::NewProp_bIsReallyDead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::NewProp_EnemyKilled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::NewProp_bIsReallyDead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/CentralEnemyCommanderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCentralEnemyCommanderSubsystem, nullptr, "OnEnemyKilled", nullptr, nullptr, sizeof(CentralEnemyCommanderSubsystem_eventOnEnemyKilled_Parms), Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnInitializedBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnInitializedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/CentralEnemyCommanderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnInitializedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCentralEnemyCommanderSubsystem, nullptr, "OnInitializedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnInitializedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnInitializedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnInitializedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnInitializedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCentralEnemyCommanderSubsystem);
	UClass* Z_Construct_UClass_UCentralEnemyCommanderSubsystem_NoRegister()
	{
		return UCentralEnemyCommanderSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_NotifyDesireEngagePlayer, "NotifyDesireEngagePlayer" }, // 4284743079
		{ &Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnEnemyKilled, "OnEnemyKilled" }, // 1143436588
		{ &Z_Construct_UFunction_UCentralEnemyCommanderSubsystem_OnInitializedBP, "OnInitializedBP" }, // 576476613
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy Logic/CentralEnemyCommanderSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CentralEnemyCommanderSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCentralEnemyCommanderSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics::ClassParams = {
		&UCentralEnemyCommanderSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCentralEnemyCommanderSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCentralEnemyCommanderSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCentralEnemyCommanderSubsystem.OuterSingleton, Z_Construct_UClass_UCentralEnemyCommanderSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCentralEnemyCommanderSubsystem.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UCentralEnemyCommanderSubsystem>()
	{
		return UCentralEnemyCommanderSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCentralEnemyCommanderSubsystem);
	UCentralEnemyCommanderSubsystem::~UCentralEnemyCommanderSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CentralEnemyCommanderSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CentralEnemyCommanderSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCentralEnemyCommanderSubsystem, UCentralEnemyCommanderSubsystem::StaticClass, TEXT("UCentralEnemyCommanderSubsystem"), &Z_Registration_Info_UClass_UCentralEnemyCommanderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCentralEnemyCommanderSubsystem), 2247600818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CentralEnemyCommanderSubsystem_h_2144101010(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CentralEnemyCommanderSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CentralEnemyCommanderSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
