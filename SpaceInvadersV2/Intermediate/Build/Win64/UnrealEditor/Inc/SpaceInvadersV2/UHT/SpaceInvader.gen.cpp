// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvadersV2/SpaceInvader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceInvader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ASpaceInvader();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ASpaceInvader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceInvadersV2();
// End Cross Module References
	DEFINE_FUNCTION(ASpaceInvader::execInvokeOnInvaderKilled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_scoreGainedUponKill);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvokeOnInvaderKilled(Z_Param_scoreGainedUponKill);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvader::execShootRandomChance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentageChance);
		P_GET_STRUCT(FTransform,Z_Param_shipRelativeSpawnPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootRandomChance(Z_Param_percentageChance,Z_Param_shipRelativeSpawnPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvader::execIsObjectInvader)
	{
		P_GET_OBJECT(AActor,Z_Param_objectToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsObjectInvader(Z_Param_objectToCheck);
		P_NATIVE_END;
	}
	void ASpaceInvader::StaticRegisterNativesASpaceInvader()
	{
		UClass* Class = ASpaceInvader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InvokeOnInvaderKilled", &ASpaceInvader::execInvokeOnInvaderKilled },
			{ "IsObjectInvader", &ASpaceInvader::execIsObjectInvader },
			{ "ShootRandomChance", &ASpaceInvader::execShootRandomChance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics
	{
		struct SpaceInvader_eventInvokeOnInvaderKilled_Parms
		{
			int32 scoreGainedUponKill;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_scoreGainedUponKill;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::NewProp_scoreGainedUponKill = { "scoreGainedUponKill", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvader_eventInvokeOnInvaderKilled_Parms, scoreGainedUponKill), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::NewProp_scoreGainedUponKill,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "SpaceInvader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvader, nullptr, "InvokeOnInvaderKilled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::SpaceInvader_eventInvokeOnInvaderKilled_Parms), Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics
	{
		struct SpaceInvader_eventIsObjectInvader_Parms
		{
			AActor* objectToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::NewProp_objectToCheck = { "objectToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvader_eventIsObjectInvader_Parms, objectToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpaceInvader_eventIsObjectInvader_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpaceInvader_eventIsObjectInvader_Parms), &Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::NewProp_objectToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Space Invader" },
		{ "Keywords", "Is Object Invader" },
		{ "ModuleRelativePath", "SpaceInvader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvader, nullptr, "IsObjectInvader", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::SpaceInvader_eventIsObjectInvader_Parms), Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvader_IsObjectInvader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvader_IsObjectInvader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics
	{
		struct SpaceInvader_eventShootRandomChance_Parms
		{
			float percentageChance;
			FTransform shipRelativeSpawnPos;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percentageChance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_shipRelativeSpawnPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::NewProp_percentageChance = { "percentageChance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvader_eventShootRandomChance_Parms, percentageChance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::NewProp_shipRelativeSpawnPos = { "shipRelativeSpawnPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvader_eventShootRandomChance_Parms, shipRelativeSpawnPos), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::NewProp_percentageChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::NewProp_shipRelativeSpawnPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "SpaceInvader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvader, nullptr, "ShootRandomChance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::SpaceInvader_eventShootRandomChance_Parms), Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvader_ShootRandomChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvader_ShootRandomChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceInvader);
	UClass* Z_Construct_UClass_ASpaceInvader_NoRegister()
	{
		return ASpaceInvader::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceInvader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_invaderMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_invaderMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitboxCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitboxCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyBulletActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_enemyBulletActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceInvader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvadersV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpaceInvader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpaceInvader_InvokeOnInvaderKilled, "InvokeOnInvaderKilled" }, // 83471594
		{ &Z_Construct_UFunction_ASpaceInvader_IsObjectInvader, "IsObjectInvader" }, // 4258571205
		{ &Z_Construct_UFunction_ASpaceInvader_ShootRandomChance, "ShootRandomChance" }, // 3489257019
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpaceInvader.h" },
		{ "ModuleRelativePath", "SpaceInvader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvader_Statics::NewProp_invaderMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceInvader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceInvader_Statics::NewProp_invaderMesh = { "invaderMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpaceInvader, invaderMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceInvader_Statics::NewProp_invaderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvader_Statics::NewProp_invaderMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvader_Statics::NewProp_hitboxCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceInvader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceInvader_Statics::NewProp_hitboxCollider = { "hitboxCollider", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpaceInvader, hitboxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceInvader_Statics::NewProp_hitboxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvader_Statics::NewProp_hitboxCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvader_Statics::NewProp_enemyBulletActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "SpaceInvader.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceInvader_Statics::NewProp_enemyBulletActor = { "enemyBulletActor", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpaceInvader, enemyBulletActor), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceInvader_Statics::NewProp_enemyBulletActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvader_Statics::NewProp_enemyBulletActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceInvader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceInvader_Statics::NewProp_invaderMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceInvader_Statics::NewProp_hitboxCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceInvader_Statics::NewProp_enemyBulletActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceInvader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceInvader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceInvader_Statics::ClassParams = {
		&ASpaceInvader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpaceInvader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvader_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceInvader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceInvader()
	{
		if (!Z_Registration_Info_UClass_ASpaceInvader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceInvader.OuterSingleton, Z_Construct_UClass_ASpaceInvader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpaceInvader.OuterSingleton;
	}
	template<> SPACEINVADERSV2_API UClass* StaticClass<ASpaceInvader>()
	{
		return ASpaceInvader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceInvader);
	ASpaceInvader::~ASpaceInvader() {}
	struct Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceInvader, ASpaceInvader::StaticClass, TEXT("ASpaceInvader"), &Z_Registration_Info_UClass_ASpaceInvader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceInvader), 4050153117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvader_h_3922519509(TEXT("/Script/SpaceInvadersV2"),
		Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
