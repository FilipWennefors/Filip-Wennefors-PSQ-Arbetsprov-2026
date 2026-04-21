// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/BaseEnemyController.h"
#include "AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemyController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ABaseEnemyController();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ABaseEnemyController_NoRegister();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnDetectedPlayer_Parms
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
	void Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::NewProp_bCanDetectPlayer_SetBit(void* Obj)
	{
		((_Script_ResidentEvilTesting_eventOnDetectedPlayer_Parms*)Obj)->bCanDetectPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::NewProp_bCanDetectPlayer = { "bCanDetectPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_ResidentEvilTesting_eventOnDetectedPlayer_Parms), &Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::NewProp_bCanDetectPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::NewProp_bCanDetectPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnDetectedPlayer__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnDetectedPlayer_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABaseEnemyController::execOnTargetPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_AIStimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_AIStimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemyController::execSuspendBehaviourTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuspendBehaviourTree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemyController::execRunPreScriptedBehaviour)
	{
		P_GET_OBJECT(UBehaviorTree,Z_Param_scriptedBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunPreScriptedBehaviour(Z_Param_scriptedBehaviour);
		P_NATIVE_END;
	}
	struct BaseEnemyController_eventOnTargetPerceptionUpdatedHearing_Parms
	{
		AActor* Actor;
		FAIStimulus AIStimulus;
	};
	struct BaseEnemyController_eventOnTargetPerceptionUpdatedSight_Parms
	{
		AActor* Actor;
		FAIStimulus AIStimulus;
	};
	static FName NAME_ABaseEnemyController_OnControlledEnemyKilled = FName(TEXT("OnControlledEnemyKilled"));
	void ABaseEnemyController::OnControlledEnemyKilled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyController_OnControlledEnemyKilled),NULL);
	}
	static FName NAME_ABaseEnemyController_OnTargetPerceptionFailDebug = FName(TEXT("OnTargetPerceptionFailDebug"));
	void ABaseEnemyController::OnTargetPerceptionFailDebug()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyController_OnTargetPerceptionFailDebug),NULL);
	}
	static FName NAME_ABaseEnemyController_OnTargetPerceptionUpdatedHearing = FName(TEXT("OnTargetPerceptionUpdatedHearing"));
	void ABaseEnemyController::OnTargetPerceptionUpdatedHearing(AActor* Actor, FAIStimulus AIStimulus)
	{
		BaseEnemyController_eventOnTargetPerceptionUpdatedHearing_Parms Parms;
		Parms.Actor=Actor;
		Parms.AIStimulus=AIStimulus;
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyController_OnTargetPerceptionUpdatedHearing),&Parms);
	}
	static FName NAME_ABaseEnemyController_OnTargetPerceptionUpdatedSight = FName(TEXT("OnTargetPerceptionUpdatedSight"));
	void ABaseEnemyController::OnTargetPerceptionUpdatedSight(AActor* Actor, FAIStimulus AIStimulus)
	{
		BaseEnemyController_eventOnTargetPerceptionUpdatedSight_Parms Parms;
		Parms.Actor=Actor;
		Parms.AIStimulus=AIStimulus;
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyController_OnTargetPerceptionUpdatedSight),&Parms);
	}
	void ABaseEnemyController::StaticRegisterNativesABaseEnemyController()
	{
		UClass* Class = ABaseEnemyController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetPerceptionUpdated", &ABaseEnemyController::execOnTargetPerceptionUpdated },
			{ "RunPreScriptedBehaviour", &ABaseEnemyController::execRunPreScriptedBehaviour },
			{ "SuspendBehaviourTree", &ABaseEnemyController::execSuspendBehaviourTree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEnemyController_OnControlledEnemyKilled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyController_OnControlledEnemyKilled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlledPawn" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyController_OnControlledEnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyController, nullptr, "OnControlledEnemyKilled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyController_OnControlledEnemyKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_OnControlledEnemyKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyController_OnControlledEnemyKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyController_OnControlledEnemyKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionFailDebug_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionFailDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerPerceptionSystem" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionFailDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyController, nullptr, "OnTargetPerceptionFailDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionFailDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionFailDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionFailDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionFailDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics
	{
		struct BaseEnemyController_eventOnTargetPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus AIStimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AIStimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemyController_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::NewProp_AIStimulus = { "AIStimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemyController_eventOnTargetPerceptionUpdated_Parms, AIStimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::NewProp_AIStimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyController, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::BaseEnemyController_eventOnTargetPerceptionUpdated_Parms), Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AIStimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemyController_eventOnTargetPerceptionUpdatedHearing_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::NewProp_AIStimulus = { "AIStimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemyController_eventOnTargetPerceptionUpdatedHearing_Parms, AIStimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::NewProp_AIStimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerPerceptionSystem" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyController, nullptr, "OnTargetPerceptionUpdatedHearing", nullptr, nullptr, sizeof(BaseEnemyController_eventOnTargetPerceptionUpdatedHearing_Parms), Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AIStimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemyController_eventOnTargetPerceptionUpdatedSight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::NewProp_AIStimulus = { "AIStimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemyController_eventOnTargetPerceptionUpdatedSight_Parms, AIStimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::NewProp_AIStimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerPerceptionSystem" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyController, nullptr, "OnTargetPerceptionUpdatedSight", nullptr, nullptr, sizeof(BaseEnemyController_eventOnTargetPerceptionUpdatedSight_Parms), Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics
	{
		struct BaseEnemyController_eventRunPreScriptedBehaviour_Parms
		{
			UBehaviorTree* scriptedBehaviour;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scriptedBehaviour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::NewProp_scriptedBehaviour = { "scriptedBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemyController_eventRunPreScriptedBehaviour_Parms, scriptedBehaviour), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::NewProp_scriptedBehaviour,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::Function_MetaDataParams[] = {
		{ "Category", "PreScriptedBehaviour" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyController, nullptr, "RunPreScriptedBehaviour", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::BaseEnemyController_eventRunPreScriptedBehaviour_Parms), Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyController_SuspendBehaviourTree_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyController_SuspendBehaviourTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "BehaviourTree" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyController_SuspendBehaviourTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyController, nullptr, "SuspendBehaviourTree", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyController_SuspendBehaviourTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyController_SuspendBehaviourTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyController_SuspendBehaviourTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemyController_SuspendBehaviourTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemyController);
	UClass* Z_Construct_UClass_ABaseEnemyController_NoRegister()
	{
		return ABaseEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDetectedPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDetectedPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_behaviourTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_behaviourTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunPreScriptedBehaviourKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RunPreScriptedBehaviourKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemyController_OnControlledEnemyKilled, "OnControlledEnemyKilled" }, // 201672479
		{ &Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionFailDebug, "OnTargetPerceptionFailDebug" }, // 3067063362
		{ &Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 2925352618
		{ &Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedHearing, "OnTargetPerceptionUpdatedHearing" }, // 3606017538
		{ &Z_Construct_UFunction_ABaseEnemyController_OnTargetPerceptionUpdatedSight, "OnTargetPerceptionUpdatedSight" }, // 615864278
		{ &Z_Construct_UFunction_ABaseEnemyController_RunPreScriptedBehaviour, "RunPreScriptedBehaviour" }, // 1667018207
		{ &Z_Construct_UFunction_ABaseEnemyController_SuspendBehaviourTree, "SuspendBehaviourTree" }, // 58155428
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy Logic/BaseEnemyController.h" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_OnDetectedPlayer_MetaData[] = {
		{ "Category", "PlayerPerceptionSystem" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_OnDetectedPlayer = { "OnDetectedPlayer", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemyController, OnDetectedPlayer), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnDetectedPlayer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_OnDetectedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_OnDetectedPlayer_MetaData)) }; // 637374000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_behaviourTag_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//The Gameplay tag used to inject custom Behaviour Tree Behaviour for pre scripted behaviour\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
		{ "ToolTip", "The Gameplay tag used to inject custom Behaviour Tree Behaviour for pre scripted behaviour" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_behaviourTag = { "behaviourTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemyController, behaviourTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_behaviourTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_behaviourTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_RunPreScriptedBehaviourKeyName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//The name of whatever bool is used in the blackboard to determine if pre scripted behaviour should be ran\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
		{ "ToolTip", "The name of whatever bool is used in the blackboard to determine if pre scripted behaviour should be ran" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_RunPreScriptedBehaviourKeyName = { "RunPreScriptedBehaviourKeyName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemyController, RunPreScriptedBehaviourKeyName), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_RunPreScriptedBehaviourKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_RunPreScriptedBehaviourKeyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_AIPerceptionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerPerceptionSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/BaseEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemyController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_AIPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_AIPerceptionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_OnDetectedPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_behaviourTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_RunPreScriptedBehaviourKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyController_Statics::NewProp_AIPerceptionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemyController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemyController_Statics::ClassParams = {
		&ABaseEnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseEnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemyController()
	{
		if (!Z_Registration_Info_UClass_ABaseEnemyController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemyController.OuterSingleton, Z_Construct_UClass_ABaseEnemyController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEnemyController.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<ABaseEnemyController>()
	{
		return ABaseEnemyController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemyController);
	ABaseEnemyController::~ABaseEnemyController() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemyController, ABaseEnemyController::StaticClass, TEXT("ABaseEnemyController"), &Z_Registration_Info_UClass_ABaseEnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemyController), 1390737910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_1315408652(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_BaseEnemyController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
