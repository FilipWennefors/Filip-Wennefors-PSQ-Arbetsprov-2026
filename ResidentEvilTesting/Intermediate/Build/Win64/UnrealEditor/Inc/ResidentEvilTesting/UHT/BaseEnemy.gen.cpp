// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/BaseEnemy.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ABaseEnemy();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AEnemyBaseWeapon_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ASpline_NoRegister();
	RESIDENTEVILTESTING_API UEnum* Z_Construct_UEnum_ResidentEvilTesting_EPatrolType();
	RESIDENTEVILTESTING_API UEnum* Z_Construct_UEnum_ResidentEvilTesting_ETakedownType();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(ABaseEnemy::execOnPlayerDetected)
	{
		P_GET_UBOOL(Z_Param_bCanDetectPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDetected(Z_Param_bCanDetectPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execShowTakedownIndicator)
	{
		P_GET_ENUM(ETakedownType,Z_Param_takedownType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowTakedownIndicator(ETakedownType(Z_Param_takedownType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execStaggerEnemy)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_componentHit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_staggerDuration);
		P_GET_OBJECT(UAnimMontage,Z_Param_staggerAnim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StaggerEnemy(Z_Param_componentHit,Z_Param_staggerDuration,Z_Param_staggerAnim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execCalculateStaggerChance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_staggerDamageDealt);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minDamageStaggerThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_guaranteedStaggerDamageThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minStaggerChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateStaggerChance(Z_Param_staggerDamageDealt,Z_Param_minDamageStaggerThreshold,Z_Param_guaranteedStaggerDamageThreshold,Z_Param_minStaggerChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execApplyStunEffect)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_stunDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyStunEffect(Z_Param_stunDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execKillEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execSetCollisionResponseToPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionResponseToPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execSetCollisionResponseToRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionResponseToRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execNotifyPlayerPerformsTakedown)
	{
		P_GET_ENUM(ETakedownType,Z_Param_takedownType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyPlayerPerformsTakedown(ETakedownType(Z_Param_takedownType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetPlayerBackstabPosOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayerBackstabPosOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetTakedownType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETakedownType*)Z_Param__Result=P_THIS->GetTakedownType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetIsTakedownable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsTakedownable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetSpawnTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSpawnTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetFollowSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASpline**)Z_Param__Result=P_THIS->GetFollowSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetPatrolRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPatrolRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetPatrolType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPatrolType*)Z_Param__Result=P_THIS->GetPatrolType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetCanPerformMeleeAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanPerformMeleeAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetMeleeAttackSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeleeAttackSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execGetMeleeAttackAnimMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetMeleeAttackAnimMontage();
		P_NATIVE_END;
	}
	struct BaseEnemy_eventOnHitActor_Parms
	{
		AActor* hitActor;
	};
	static FName NAME_ABaseEnemy_NotifyOnAttackParried = FName(TEXT("NotifyOnAttackParried"));
	void ABaseEnemy::NotifyOnAttackParried()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemy_NotifyOnAttackParried),NULL);
	}
	static FName NAME_ABaseEnemy_OnHitActor = FName(TEXT("OnHitActor"));
	void ABaseEnemy::OnHitActor(AActor* hitActor)
	{
		BaseEnemy_eventOnHitActor_Parms Parms;
		Parms.hitActor=hitActor;
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemy_OnHitActor),&Parms);
	}
	static FName NAME_ABaseEnemy_OnKilled = FName(TEXT("OnKilled"));
	void ABaseEnemy::OnKilled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemy_OnKilled),NULL);
	}
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
		UClass* Class = ABaseEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyStunEffect", &ABaseEnemy::execApplyStunEffect },
			{ "CalculateStaggerChance", &ABaseEnemy::execCalculateStaggerChance },
			{ "GetCanPerformMeleeAttack", &ABaseEnemy::execGetCanPerformMeleeAttack },
			{ "GetFollowSpline", &ABaseEnemy::execGetFollowSpline },
			{ "GetIsTakedownable", &ABaseEnemy::execGetIsTakedownable },
			{ "GetMeleeAttackAnimMontage", &ABaseEnemy::execGetMeleeAttackAnimMontage },
			{ "GetMeleeAttackSpeed", &ABaseEnemy::execGetMeleeAttackSpeed },
			{ "GetPatrolRadius", &ABaseEnemy::execGetPatrolRadius },
			{ "GetPatrolType", &ABaseEnemy::execGetPatrolType },
			{ "GetPlayerBackstabPosOffset", &ABaseEnemy::execGetPlayerBackstabPosOffset },
			{ "GetSpawnTransform", &ABaseEnemy::execGetSpawnTransform },
			{ "GetTakedownType", &ABaseEnemy::execGetTakedownType },
			{ "KillEnemy", &ABaseEnemy::execKillEnemy },
			{ "NotifyPlayerPerformsTakedown", &ABaseEnemy::execNotifyPlayerPerformsTakedown },
			{ "OnPlayerDetected", &ABaseEnemy::execOnPlayerDetected },
			{ "SetCollisionResponseToPawn", &ABaseEnemy::execSetCollisionResponseToPawn },
			{ "SetCollisionResponseToRagdoll", &ABaseEnemy::execSetCollisionResponseToRagdoll },
			{ "ShowTakedownIndicator", &ABaseEnemy::execShowTakedownIndicator },
			{ "StaggerEnemy", &ABaseEnemy::execStaggerEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics
	{
		struct BaseEnemy_eventApplyStunEffect_Parms
		{
			float stunDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stunDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::NewProp_stunDuration = { "stunDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventApplyStunEffect_Parms, stunDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::NewProp_stunDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stagger and stun" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "ApplyStunEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::BaseEnemy_eventApplyStunEffect_Parms), Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics
	{
		struct BaseEnemy_eventCalculateStaggerChance_Parms
		{
			float staggerDamageDealt;
			float minDamageStaggerThreshold;
			float guaranteedStaggerDamageThreshold;
			float minStaggerChance;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staggerDamageDealt;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minDamageStaggerThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_guaranteedStaggerDamageThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minStaggerChance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_staggerDamageDealt = { "staggerDamageDealt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventCalculateStaggerChance_Parms, staggerDamageDealt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_minDamageStaggerThreshold = { "minDamageStaggerThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventCalculateStaggerChance_Parms, minDamageStaggerThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_guaranteedStaggerDamageThreshold = { "guaranteedStaggerDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventCalculateStaggerChance_Parms, guaranteedStaggerDamageThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_minStaggerChance = { "minStaggerChance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventCalculateStaggerChance_Parms, minStaggerChance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventCalculateStaggerChance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_staggerDamageDealt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_minDamageStaggerThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_guaranteedStaggerDamageThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_minStaggerChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stagger and stun" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "CalculateStaggerChance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::BaseEnemy_eventCalculateStaggerChance_Parms), Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics
	{
		struct BaseEnemy_eventGetCanPerformMeleeAttack_Parms
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
	void Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseEnemy_eventGetCanPerformMeleeAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseEnemy_eventGetCanPerformMeleeAttack_Parms), &Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetCanPerformMeleeAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::BaseEnemy_eventGetCanPerformMeleeAttack_Parms), Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics
	{
		struct BaseEnemy_eventGetFollowSpline_Parms
		{
			ASpline* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventGetFollowSpline_Parms, ReturnValue), Z_Construct_UClass_ASpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetFollowSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::BaseEnemy_eventGetFollowSpline_Parms), Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics
	{
		struct BaseEnemy_eventGetIsTakedownable_Parms
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
	void Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseEnemy_eventGetIsTakedownable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseEnemy_eventGetIsTakedownable_Parms), &Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//Was originally supposed to be isBackstabbable but since backstabs and takedowns on enemies lying on the floor uses the same button, it might be smarter to merge functionality\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
		{ "ToolTip", "Was originally supposed to be isBackstabbable but since backstabs and takedowns on enemies lying on the floor uses the same button, it might be smarter to merge functionality" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetIsTakedownable", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::BaseEnemy_eventGetIsTakedownable_Parms), Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics
	{
		struct BaseEnemy_eventGetMeleeAttackAnimMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventGetMeleeAttackAnimMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetMeleeAttackAnimMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::BaseEnemy_eventGetMeleeAttackAnimMontage_Parms), Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics
	{
		struct BaseEnemy_eventGetMeleeAttackSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventGetMeleeAttackSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetMeleeAttackSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::BaseEnemy_eventGetMeleeAttackSpeed_Parms), Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics
	{
		struct BaseEnemy_eventGetPatrolRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventGetPatrolRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetPatrolRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::BaseEnemy_eventGetPatrolRadius_Parms), Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics
	{
		struct BaseEnemy_eventGetPatrolType_Parms
		{
			EPatrolType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventGetPatrolType_Parms, ReturnValue), Z_Construct_UEnum_ResidentEvilTesting_EPatrolType, METADATA_PARAMS(nullptr, 0) }; // 3360514232
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetPatrolType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::BaseEnemy_eventGetPatrolType_Parms), Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetPatrolType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetPatrolType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics
	{
		struct BaseEnemy_eventGetPlayerBackstabPosOffset_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventGetPlayerBackstabPosOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "//Used to determine how much to move the player behind for animations\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
		{ "ToolTip", "Used to determine how much to move the player behind for animations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetPlayerBackstabPosOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::BaseEnemy_eventGetPlayerBackstabPosOffset_Parms), Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics
	{
		struct BaseEnemy_eventGetSpawnTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventGetSpawnTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetSpawnTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::BaseEnemy_eventGetSpawnTransform_Parms), Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics
	{
		struct BaseEnemy_eventGetTakedownType_Parms
		{
			ETakedownType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventGetTakedownType_Parms, ReturnValue), Z_Construct_UEnum_ResidentEvilTesting_ETakedownType, METADATA_PARAMS(nullptr, 0) }; // 451650815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetTakedownType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::BaseEnemy_eventGetTakedownType_Parms), Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetTakedownType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetTakedownType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_KillEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_KillEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death Logic" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_KillEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "KillEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_KillEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_KillEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_KillEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_KillEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_NotifyOnAttackParried_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_NotifyOnAttackParried_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_NotifyOnAttackParried_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "NotifyOnAttackParried", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_NotifyOnAttackParried_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_NotifyOnAttackParried_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_NotifyOnAttackParried()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_NotifyOnAttackParried_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics
	{
		struct BaseEnemy_eventNotifyPlayerPerformsTakedown_Parms
		{
			ETakedownType takedownType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_takedownType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_takedownType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::NewProp_takedownType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::NewProp_takedownType = { "takedownType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventNotifyPlayerPerformsTakedown_Parms, takedownType), Z_Construct_UEnum_ResidentEvilTesting_ETakedownType, METADATA_PARAMS(nullptr, 0) }; // 451650815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::NewProp_takedownType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::NewProp_takedownType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Takedowns" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "NotifyPlayerPerformsTakedown", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::BaseEnemy_eventNotifyPlayerPerformsTakedown_Parms), Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventOnHitActor_Parms, hitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::NewProp_hitActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Enemy AI" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnHitActor", nullptr, nullptr, sizeof(BaseEnemy_eventOnHitActor_Parms), Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_OnHitActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnHitActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_OnKilled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnKilled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death Logic" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnKilled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_OnKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics
	{
		struct BaseEnemy_eventOnPlayerDetected_Parms
		{
			bool bCanDetectPlayer;
		};
		static void NewProp_bCanDetectPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDetectPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::NewProp_bCanDetectPlayer_SetBit(void* Obj)
	{
		((BaseEnemy_eventOnPlayerDetected_Parms*)Obj)->bCanDetectPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::NewProp_bCanDetectPlayer = { "bCanDetectPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseEnemy_eventOnPlayerDetected_Parms), &Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::NewProp_bCanDetectPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::NewProp_bCanDetectPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnPlayerDetected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::BaseEnemy_eventOnPlayerDetected_Parms), Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToPawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "//Use setCollisionResponseToChannels here\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
		{ "ToolTip", "Use setCollisionResponseToChannels here" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "SetCollisionResponseToPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToRagdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "//Use setCollisionResponseToChannels here\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
		{ "ToolTip", "Use setCollisionResponseToChannels here" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "SetCollisionResponseToRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics
	{
		struct BaseEnemy_eventShowTakedownIndicator_Parms
		{
			ETakedownType takedownType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_takedownType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_takedownType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::NewProp_takedownType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::NewProp_takedownType = { "takedownType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventShowTakedownIndicator_Parms, takedownType), Z_Construct_UEnum_ResidentEvilTesting_ETakedownType, METADATA_PARAMS(nullptr, 0) }; // 451650815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::NewProp_takedownType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::NewProp_takedownType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stagger and stun" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "ShowTakedownIndicator", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::BaseEnemy_eventShowTakedownIndicator_Parms), Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics
	{
		struct BaseEnemy_eventStaggerEnemy_Parms
		{
			UPrimitiveComponent* componentHit;
			float staggerDuration;
			UAnimMontage* staggerAnim;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_componentHit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_componentHit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staggerDuration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staggerAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_componentHit_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_componentHit = { "componentHit", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventStaggerEnemy_Parms, componentHit), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_componentHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_componentHit_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_staggerDuration = { "staggerDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventStaggerEnemy_Parms, staggerDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_staggerAnim = { "staggerAnim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventStaggerEnemy_Parms, staggerAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_componentHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_staggerDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::NewProp_staggerAnim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stagger and stun" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "StaggerEnemy", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::BaseEnemy_eventStaggerEnemy_Parms), Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_StaggerEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_StaggerEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_equippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_equippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ragdollCollisionResponses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ragdollCollisionResponses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pawnCollisionResponses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pawnCollisionResponses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meleeAttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_meleeAttackSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_patrolType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_patrolType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_patrolType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_patrolRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_patrolRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_followSpline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_followSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerTakedownIndicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerTakedownIndicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_backStabAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_backStabAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultMeleeAttackAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultMeleeAttackAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerBackstabPosOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerBackstabPosOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bCanDetectPlayer_MetaData[];
#endif
		static void NewProp__bCanDetectPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bCanDetectPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLyingDown_MetaData[];
#endif
		static void NewProp_bIsLyingDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLyingDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsKilled_MetaData[];
#endif
		static void NewProp_bIsKilled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsKilled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStunned_MetaData[];
#endif
		static void NewProp_bIsStunned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStunned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaggered_MetaData[];
#endif
		static void NewProp_bIsStaggered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaggered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_equippedWeaponActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_equippedWeaponActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_spawnTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemy_ApplyStunEffect, "ApplyStunEffect" }, // 1534760185
		{ &Z_Construct_UFunction_ABaseEnemy_CalculateStaggerChance, "CalculateStaggerChance" }, // 1596928692
		{ &Z_Construct_UFunction_ABaseEnemy_GetCanPerformMeleeAttack, "GetCanPerformMeleeAttack" }, // 1897905179
		{ &Z_Construct_UFunction_ABaseEnemy_GetFollowSpline, "GetFollowSpline" }, // 382320441
		{ &Z_Construct_UFunction_ABaseEnemy_GetIsTakedownable, "GetIsTakedownable" }, // 765263206
		{ &Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackAnimMontage, "GetMeleeAttackAnimMontage" }, // 1527242734
		{ &Z_Construct_UFunction_ABaseEnemy_GetMeleeAttackSpeed, "GetMeleeAttackSpeed" }, // 2058866185
		{ &Z_Construct_UFunction_ABaseEnemy_GetPatrolRadius, "GetPatrolRadius" }, // 1714351133
		{ &Z_Construct_UFunction_ABaseEnemy_GetPatrolType, "GetPatrolType" }, // 2675549573
		{ &Z_Construct_UFunction_ABaseEnemy_GetPlayerBackstabPosOffset, "GetPlayerBackstabPosOffset" }, // 1162278587
		{ &Z_Construct_UFunction_ABaseEnemy_GetSpawnTransform, "GetSpawnTransform" }, // 3090993367
		{ &Z_Construct_UFunction_ABaseEnemy_GetTakedownType, "GetTakedownType" }, // 460954036
		{ &Z_Construct_UFunction_ABaseEnemy_KillEnemy, "KillEnemy" }, // 1638548447
		{ &Z_Construct_UFunction_ABaseEnemy_NotifyOnAttackParried, "NotifyOnAttackParried" }, // 2122398513
		{ &Z_Construct_UFunction_ABaseEnemy_NotifyPlayerPerformsTakedown, "NotifyPlayerPerformsTakedown" }, // 1547791541
		{ &Z_Construct_UFunction_ABaseEnemy_OnHitActor, "OnHitActor" }, // 2937720373
		{ &Z_Construct_UFunction_ABaseEnemy_OnKilled, "OnKilled" }, // 2037545802
		{ &Z_Construct_UFunction_ABaseEnemy_OnPlayerDetected, "OnPlayerDetected" }, // 849017480
		{ &Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToPawn, "SetCollisionResponseToPawn" }, // 1531210118
		{ &Z_Construct_UFunction_ABaseEnemy_SetCollisionResponseToRagdoll, "SetCollisionResponseToRagdoll" }, // 804150683
		{ &Z_Construct_UFunction_ABaseEnemy_ShowTakedownIndicator, "ShowTakedownIndicator" }, // 3288436300
		{ &Z_Construct_UFunction_ABaseEnemy_StaggerEnemy, "StaggerEnemy" }, // 1998881842
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy Logic/BaseEnemy.h" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BaseEnemy" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeapon = { "equippedWeapon", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, equippedWeapon), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyBaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ragdollCollisionResponses_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ragdollCollisionResponses = { "ragdollCollisionResponses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, ragdollCollisionResponses), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ragdollCollisionResponses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ragdollCollisionResponses_MetaData)) }; // 1221833410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_pawnCollisionResponses_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_pawnCollisionResponses = { "pawnCollisionResponses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, pawnCollisionResponses), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_pawnCollisionResponses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_pawnCollisionResponses_MetaData)) }; // 1221833410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, health), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_maxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, maxHealth), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_meleeAttackSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_meleeAttackSpeed = { "meleeAttackSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, meleeAttackSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_meleeAttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_meleeAttackSpeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "Comment", "//How do we want the enemy to patrol the environment\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
		{ "ToolTip", "How do we want the enemy to patrol the environment" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolType = { "patrolType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, patrolType), Z_Construct_UEnum_ResidentEvilTesting_EPatrolType, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolType_MetaData)) }; // 3360514232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolRadius = { "patrolRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, patrolRadius), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_followSpline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_followSpline = { "followSpline", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, followSpline), Z_Construct_UClass_ASpline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_followSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_followSpline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerTakedownIndicator_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerTakedownIndicator = { "playerTakedownIndicator", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, playerTakedownIndicator), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerTakedownIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerTakedownIndicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_backStabAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_backStabAnimation = { "backStabAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, backStabAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_backStabAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_backStabAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_defaultMeleeAttackAnim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_defaultMeleeAttackAnim = { "defaultMeleeAttackAnim", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, defaultMeleeAttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_defaultMeleeAttackAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_defaultMeleeAttackAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerBackstabPosOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Default" },
		{ "Comment", "//Used to determine how much to move the player behind for animations\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
		{ "ToolTip", "Used to determine how much to move the player behind for animations" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerBackstabPosOffset = { "playerBackstabPosOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, playerBackstabPosOffset), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerBackstabPosOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerBackstabPosOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp__bCanDetectPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp__bCanDetectPlayer_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->_bCanDetectPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp__bCanDetectPlayer = { "_bCanDetectPlayer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp__bCanDetectPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__bCanDetectPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp__bCanDetectPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsLyingDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseEnemy" },
		{ "Comment", "//Means that the enemy is lying down on the floor either due to being downed from attack or \"Killed\" with a chance to reanimate\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
		{ "ToolTip", "Means that the enemy is lying down on the floor either due to being downed from attack or \"Killed\" with a chance to reanimate" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsLyingDown_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bIsLyingDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsLyingDown = { "bIsLyingDown", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsLyingDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsLyingDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsLyingDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsKilled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsKilled_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bIsKilled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsKilled = { "bIsKilled", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsKilled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsKilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsKilled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStunned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStunned_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bIsStunned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStunned = { "bIsStunned", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStunned_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStunned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStunned_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStaggered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStaggered_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bIsStaggered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStaggered = { "bIsStaggered", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStaggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStaggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStaggered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeaponActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeaponActor = { "equippedWeaponActor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, equippedWeaponActor), Z_Construct_UClass_AEnemyBaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeaponActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeaponActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_spawnTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_spawnTransform = { "spawnTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, spawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_spawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_spawnTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ragdollCollisionResponses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_pawnCollisionResponses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_meleeAttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_patrolRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_followSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerTakedownIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_backStabAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_defaultMeleeAttackAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_playerBackstabPosOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp__bCanDetectPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsLyingDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsKilled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStunned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsStaggered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_equippedWeaponActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_spawnTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<ABaseEnemy>()
	{
		return ABaseEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
	ABaseEnemy::~ABaseEnemy() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 3534428322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_651999026(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
