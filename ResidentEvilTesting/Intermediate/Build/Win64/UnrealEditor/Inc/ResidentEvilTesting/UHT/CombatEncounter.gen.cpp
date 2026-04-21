// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CombatEncounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEncounter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ACombatEncounter();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ACombatEncounter_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(ACombatEncounter::execOnEnemyKilledInternal)
	{
		P_GET_OBJECT(ABaseEnemy,Z_Param_enemyKilled);
		P_GET_UBOOL(Z_Param_bIsReallyDead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnemyKilledInternal(Z_Param_enemyKilled,Z_Param_bIsReallyDead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACombatEncounter::execInitialSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitialSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACombatEncounter::execOnNewEnemySpawned)
	{
		P_GET_OBJECT(ABaseEnemy,Z_Param_enemySpawned);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewEnemySpawned(Z_Param_enemySpawned);
		P_NATIVE_END;
	}
	struct CombatEncounter_eventOnEnemyKilled_Parms
	{
		ABaseEnemy* enemyKilled;
		bool bIsReallyDead;
	};
	static FName NAME_ACombatEncounter_OnEnemyKilled = FName(TEXT("OnEnemyKilled"));
	void ACombatEncounter::OnEnemyKilled(ABaseEnemy* enemyKilled, bool bIsReallyDead)
	{
		CombatEncounter_eventOnEnemyKilled_Parms Parms;
		Parms.enemyKilled=enemyKilled;
		Parms.bIsReallyDead=bIsReallyDead ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACombatEncounter_OnEnemyKilled),&Parms);
	}
	void ACombatEncounter::StaticRegisterNativesACombatEncounter()
	{
		UClass* Class = ACombatEncounter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitialSetup", &ACombatEncounter::execInitialSetup },
			{ "OnEnemyKilledInternal", &ACombatEncounter::execOnEnemyKilledInternal },
			{ "OnNewEnemySpawned", &ACombatEncounter::execOnNewEnemySpawned },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACombatEncounter_InitialSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACombatEncounter_InitialSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatEncounter_InitialSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACombatEncounter, nullptr, "InitialSetup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACombatEncounter_InitialSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatEncounter_InitialSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACombatEncounter_InitialSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatEncounter_InitialSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyKilled;
		static void NewProp_bIsReallyDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReallyDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::NewProp_enemyKilled = { "enemyKilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CombatEncounter_eventOnEnemyKilled_Parms, enemyKilled), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::NewProp_bIsReallyDead_SetBit(void* Obj)
	{
		((CombatEncounter_eventOnEnemyKilled_Parms*)Obj)->bIsReallyDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::NewProp_bIsReallyDead = { "bIsReallyDead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CombatEncounter_eventOnEnemyKilled_Parms), &Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::NewProp_bIsReallyDead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::NewProp_enemyKilled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::NewProp_bIsReallyDead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACombatEncounter, nullptr, "OnEnemyKilled", nullptr, nullptr, sizeof(CombatEncounter_eventOnEnemyKilled_Parms), Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics
	{
		struct CombatEncounter_eventOnEnemyKilledInternal_Parms
		{
			ABaseEnemy* enemyKilled;
			bool bIsReallyDead;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyKilled;
		static void NewProp_bIsReallyDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReallyDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::NewProp_enemyKilled = { "enemyKilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CombatEncounter_eventOnEnemyKilledInternal_Parms, enemyKilled), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::NewProp_bIsReallyDead_SetBit(void* Obj)
	{
		((CombatEncounter_eventOnEnemyKilledInternal_Parms*)Obj)->bIsReallyDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::NewProp_bIsReallyDead = { "bIsReallyDead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CombatEncounter_eventOnEnemyKilledInternal_Parms), &Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::NewProp_bIsReallyDead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::NewProp_enemyKilled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::NewProp_bIsReallyDead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACombatEncounter, nullptr, "OnEnemyKilledInternal", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::CombatEncounter_eventOnEnemyKilledInternal_Parms), Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics
	{
		struct CombatEncounter_eventOnNewEnemySpawned_Parms
		{
			ABaseEnemy* enemySpawned;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemySpawned;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::NewProp_enemySpawned = { "enemySpawned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CombatEncounter_eventOnNewEnemySpawned_Parms, enemySpawned), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::NewProp_enemySpawned,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACombatEncounter, nullptr, "OnNewEnemySpawned", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::CombatEncounter_eventOnNewEnemySpawned_Parms), Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatEncounter);
	UClass* Z_Construct_UClass_ACombatEncounter_NoRegister()
	{
		return ACombatEncounter::StaticClass();
	}
	struct Z_Construct_UClass_ACombatEncounter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_encounterEnemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_encounterEnemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_encounterEnemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemiesCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_enemiesCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemySpawners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemySpawners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_enemySpawners;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_boxOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_boxSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatEncounter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACombatEncounter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACombatEncounter_InitialSetup, "InitialSetup" }, // 3240928537
		{ &Z_Construct_UFunction_ACombatEncounter_OnEnemyKilled, "OnEnemyKilled" }, // 2875333206
		{ &Z_Construct_UFunction_ACombatEncounter_OnEnemyKilledInternal, "OnEnemyKilledInternal" }, // 2866803251
		{ &Z_Construct_UFunction_ACombatEncounter_OnNewEnemySpawned, "OnNewEnemySpawned" }, // 3465037732
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatEncounter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy Logic/CombatEncounter.h" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatEncounter_Statics::NewProp_encounterEnemies_Inner = { "encounterEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatEncounter_Statics::NewProp_encounterEnemies_MetaData[] = {
		{ "Category", "CombatEncounter" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombatEncounter_Statics::NewProp_encounterEnemies = { "encounterEnemies", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombatEncounter, encounterEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_encounterEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_encounterEnemies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemiesCount_MetaData[] = {
		{ "Category", "CombatEncounter" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemiesCount = { "enemiesCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombatEncounter, enemiesCount), METADATA_PARAMS(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemiesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemiesCount_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemySpawners_Inner = { "enemySpawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AEnemySpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemySpawners_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemySpawners = { "enemySpawners", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombatEncounter, enemySpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemySpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemySpawners_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxOffset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxOffset = { "boxOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombatEncounter, boxOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxSize_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CombatEncounter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxSize = { "boxSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombatEncounter, boxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatEncounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatEncounter_Statics::NewProp_encounterEnemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatEncounter_Statics::NewProp_encounterEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemiesCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemySpawners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatEncounter_Statics::NewProp_enemySpawners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatEncounter_Statics::NewProp_boxSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatEncounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatEncounter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatEncounter_Statics::ClassParams = {
		&ACombatEncounter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACombatEncounter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACombatEncounter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACombatEncounter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatEncounter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombatEncounter()
	{
		if (!Z_Registration_Info_UClass_ACombatEncounter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatEncounter.OuterSingleton, Z_Construct_UClass_ACombatEncounter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombatEncounter.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<ACombatEncounter>()
	{
		return ACombatEncounter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatEncounter);
	ACombatEncounter::~ACombatEncounter() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombatEncounter, ACombatEncounter::StaticClass, TEXT("ACombatEncounter"), &Z_Registration_Info_UClass_ACombatEncounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatEncounter), 3336668952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_2177870563(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
