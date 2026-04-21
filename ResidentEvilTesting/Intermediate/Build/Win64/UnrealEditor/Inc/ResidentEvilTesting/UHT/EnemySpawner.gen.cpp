// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/EnemySpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AEnemySpawner();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnEnemySpawned_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::NewProp_enemySpawned = { "enemySpawned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnEnemySpawned_Parms, enemySpawned), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::NewProp_enemySpawned,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnEnemySpawned__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnEnemySpawned_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AEnemySpawner::execIsEnemySpawnerOnScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnemySpawnerOnScreen();
		P_NATIVE_END;
	}
	void AEnemySpawner::StaticRegisterNativesAEnemySpawner()
	{
		UClass* Class = AEnemySpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnemySpawnerOnScreen", &AEnemySpawner::execIsEnemySpawnerOnScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics
	{
		struct EnemySpawner_eventIsEnemySpawnerOnScreen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemySpawner_eventIsEnemySpawnerOnScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EnemySpawner_eventIsEnemySpawnerOnScreen_Parms), &Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpawner, nullptr, "IsEnemySpawnerOnScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::EnemySpawner_eventIsEnemySpawnerOnScreen_Parms), Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawner);
	UClass* Z_Construct_UClass_AEnemySpawner_NoRegister()
	{
		return AEnemySpawner::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnemySpawned_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnemySpawned;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemySpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemySpawner_IsEnemySpawnerOnScreen, "IsEnemySpawnerOnScreen" }, // 2825404890
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "Enemy Logic/EnemySpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/EnemySpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_OnEnemySpawned_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Enemy Logic/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_OnEnemySpawned = { "OnEnemySpawned", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemySpawner, OnEnemySpawned), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnEnemySpawned__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_OnEnemySpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_OnEnemySpawned_MetaData)) }; // 1074818897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_OnEnemySpawned,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Statics::ClassParams = {
		&AEnemySpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemySpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawner()
	{
		if (!Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton, Z_Construct_UClass_AEnemySpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AEnemySpawner>()
	{
		return AEnemySpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner);
	AEnemySpawner::~AEnemySpawner() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawner, AEnemySpawner::StaticClass, TEXT("AEnemySpawner"), &Z_Registration_Info_UClass_AEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawner), 3490054330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_2828104434(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EnemySpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
