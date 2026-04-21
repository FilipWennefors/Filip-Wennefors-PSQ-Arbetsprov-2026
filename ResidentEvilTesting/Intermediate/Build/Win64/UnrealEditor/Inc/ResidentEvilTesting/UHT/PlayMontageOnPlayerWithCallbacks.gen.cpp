// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayMontageOnPlayerWithCallbacks() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_NoRegister();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksEnd__DelegateSignature();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksStart__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnMontageOnPlayerDelegate_Parms
		{
			FName notifyName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_notifyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::NewProp_notifyName = { "notifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnMontageOnPlayerDelegate_Parms, notifyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::NewProp_notifyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnMontageOnPlayerDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnMontageOnPlayerDelegate_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnPlayerMontageWithCallbacksStart__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksStart__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksStart__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnPlayerMontageWithCallbacksEnd__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnPlayerMontageWithCallbacksEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayMontageOnPlayerWithCallbacks::execCallOnNotifyBegin)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnNotifyBegin(Z_Param_NotifyName,Z_Param_Out_BranchingPointPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageOnPlayerWithCallbacks::execCallOnCompleted)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
		P_GET_UBOOL(Z_Param_bArg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnCompleted(Z_Param_AnimMontage,Z_Param_bArg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageOnPlayerWithCallbacks::execCallOnNotifyEnd)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnNotifyEnd(Z_Param_NotifyName,Z_Param_Out_BranchingPointPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageOnPlayerWithCallbacks::execCallOnInterrupted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnInterrupted(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageOnPlayerWithCallbacks::execCallOnBlendOut)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnBlendOut(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayMontageOnPlayerWithCallbacks::execPlayMontageOnPlayerWithCallbacks)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_playerSkeletalMesh);
		P_GET_OBJECT(UAnimMontage,Z_Param_montageToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_playRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_startingPosition);
		P_GET_PROPERTY(FNameProperty,Z_Param_startingSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayMontageOnPlayerWithCallbacks**)Z_Param__Result=UPlayMontageOnPlayerWithCallbacks::PlayMontageOnPlayerWithCallbacks(Z_Param_playerSkeletalMesh,Z_Param_montageToPlay,Z_Param_playRate,Z_Param_startingPosition,Z_Param_startingSection);
		P_NATIVE_END;
	}
	void UPlayMontageOnPlayerWithCallbacks::StaticRegisterNativesUPlayMontageOnPlayerWithCallbacks()
	{
		UClass* Class = UPlayMontageOnPlayerWithCallbacks::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallOnBlendOut", &UPlayMontageOnPlayerWithCallbacks::execCallOnBlendOut },
			{ "CallOnCompleted", &UPlayMontageOnPlayerWithCallbacks::execCallOnCompleted },
			{ "CallOnInterrupted", &UPlayMontageOnPlayerWithCallbacks::execCallOnInterrupted },
			{ "CallOnNotifyBegin", &UPlayMontageOnPlayerWithCallbacks::execCallOnNotifyBegin },
			{ "CallOnNotifyEnd", &UPlayMontageOnPlayerWithCallbacks::execCallOnNotifyEnd },
			{ "PlayMontageOnPlayerWithCallbacks", &UPlayMontageOnPlayerWithCallbacks::execPlayMontageOnPlayerWithCallbacks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics
	{
		struct PlayMontageOnPlayerWithCallbacks_eventCallOnBlendOut_Parms
		{
			FName Name;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventCallOnBlendOut_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks, nullptr, "CallOnBlendOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::PlayMontageOnPlayerWithCallbacks_eventCallOnBlendOut_Parms), Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics
	{
		struct PlayMontageOnPlayerWithCallbacks_eventCallOnCompleted_Parms
		{
			UAnimMontage* AnimMontage;
			bool bArg;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static void NewProp_bArg_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bArg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventCallOnCompleted_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::NewProp_bArg_SetBit(void* Obj)
	{
		((PlayMontageOnPlayerWithCallbacks_eventCallOnCompleted_Parms*)Obj)->bArg = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::NewProp_bArg = { "bArg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayMontageOnPlayerWithCallbacks_eventCallOnCompleted_Parms), &Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::NewProp_bArg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::NewProp_bArg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks, nullptr, "CallOnCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::PlayMontageOnPlayerWithCallbacks_eventCallOnCompleted_Parms), Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics
	{
		struct PlayMontageOnPlayerWithCallbacks_eventCallOnInterrupted_Parms
		{
			FName Name;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventCallOnInterrupted_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks, nullptr, "CallOnInterrupted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::PlayMontageOnPlayerWithCallbacks_eventCallOnInterrupted_Parms), Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics
	{
		struct PlayMontageOnPlayerWithCallbacks_eventCallOnNotifyBegin_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointPayload;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventCallOnNotifyBegin_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventCallOnNotifyBegin_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::NewProp_BranchingPointPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::NewProp_BranchingPointPayload_MetaData)) }; // 3465490004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::NewProp_BranchingPointPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks, nullptr, "CallOnNotifyBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::PlayMontageOnPlayerWithCallbacks_eventCallOnNotifyBegin_Parms), Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics
	{
		struct PlayMontageOnPlayerWithCallbacks_eventCallOnNotifyEnd_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointPayload;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventCallOnNotifyEnd_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventCallOnNotifyEnd_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::NewProp_BranchingPointPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::NewProp_BranchingPointPayload_MetaData)) }; // 3465490004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::NewProp_BranchingPointPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks, nullptr, "CallOnNotifyEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::PlayMontageOnPlayerWithCallbacks_eventCallOnNotifyEnd_Parms), Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics
	{
		struct PlayMontageOnPlayerWithCallbacks_eventPlayMontageOnPlayerWithCallbacks_Parms
		{
			USkeletalMeshComponent* playerSkeletalMesh;
			UAnimMontage* montageToPlay;
			float playRate;
			float startingPosition;
			FName startingSection;
			UPlayMontageOnPlayerWithCallbacks* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerSkeletalMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_montageToPlay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_startingPosition;
		static const UECodeGen_Private::FNamePropertyParams NewProp_startingSection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_playerSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_playerSkeletalMesh = { "playerSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventPlayMontageOnPlayerWithCallbacks_Parms, playerSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_playerSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_playerSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_montageToPlay = { "montageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventPlayMontageOnPlayerWithCallbacks_Parms, montageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_playRate = { "playRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventPlayMontageOnPlayerWithCallbacks_Parms, playRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_startingPosition = { "startingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventPlayMontageOnPlayerWithCallbacks_Parms, startingPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_startingSection = { "startingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventPlayMontageOnPlayerWithCallbacks_Parms, startingSection), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayMontageOnPlayerWithCallbacks_eventPlayMontageOnPlayerWithCallbacks_Parms, ReturnValue), Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_playerSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_montageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_playRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_startingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_startingSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "" },
		{ "Category", "PlayMontage" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks, nullptr, "PlayMontageOnPlayerWithCallbacks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::PlayMontageOnPlayerWithCallbacks_eventPlayMontageOnPlayerWithCallbacks_Parms), Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayMontageOnPlayerWithCallbacks);
	UClass* Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_NoRegister()
	{
		return UPlayMontageOnPlayerWithCallbacks::StaticClass();
	}
	struct Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageBlendingOut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageBlendingOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageInterrupted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageInterrupted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageNotifyBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageNotifyBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageNotifyEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageNotifyEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__playerSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__playerSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__montageToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__montageToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnBlendOut, "CallOnBlendOut" }, // 2990215977
		{ &Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnCompleted, "CallOnCompleted" }, // 3580865443
		{ &Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnInterrupted, "CallOnInterrupted" }, // 130836547
		{ &Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyBegin, "CallOnNotifyBegin" }, // 1415463072
		{ &Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_CallOnNotifyEnd, "CallOnNotifyEnd" }, // 2426426423
		{ &Z_Construct_UFunction_UPlayMontageOnPlayerWithCallbacks_PlayMontageOnPlayerWithCallbacks, "PlayMontageOnPlayerWithCallbacks" }, // 3615058808
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageCompleted = { "OnMontageCompleted", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayMontageOnPlayerWithCallbacks, OnMontageCompleted), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageCompleted_MetaData)) }; // 3821544365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageBlendingOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageBlendingOut = { "OnMontageBlendingOut", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayMontageOnPlayerWithCallbacks, OnMontageBlendingOut), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageBlendingOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageBlendingOut_MetaData)) }; // 3821544365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageInterrupted = { "OnMontageInterrupted", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayMontageOnPlayerWithCallbacks, OnMontageInterrupted), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageInterrupted_MetaData)) }; // 3821544365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyBegin = { "OnMontageNotifyBegin", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayMontageOnPlayerWithCallbacks, OnMontageNotifyBegin), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyBegin_MetaData)) }; // 3821544365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyEnd = { "OnMontageNotifyEnd", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayMontageOnPlayerWithCallbacks, OnMontageNotifyEnd), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnMontageOnPlayerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyEnd_MetaData)) }; // 3821544365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__playerSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__playerSkeletalMesh = { "_playerSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayMontageOnPlayerWithCallbacks, _playerSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__playerSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__playerSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__montageToPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayMontageOnPlayerWithCallbacks.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__montageToPlay = { "_montageToPlay", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayMontageOnPlayerWithCallbacks, _montageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__montageToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__montageToPlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageBlendingOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageInterrupted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp_OnMontageNotifyEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__playerSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::NewProp__montageToPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayMontageOnPlayerWithCallbacks>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::ClassParams = {
		&UPlayMontageOnPlayerWithCallbacks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks()
	{
		if (!Z_Registration_Info_UClass_UPlayMontageOnPlayerWithCallbacks.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayMontageOnPlayerWithCallbacks.OuterSingleton, Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayMontageOnPlayerWithCallbacks.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UPlayMontageOnPlayerWithCallbacks>()
	{
		return UPlayMontageOnPlayerWithCallbacks::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayMontageOnPlayerWithCallbacks);
	UPlayMontageOnPlayerWithCallbacks::~UPlayMontageOnPlayerWithCallbacks() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayMontageOnPlayerWithCallbacks, UPlayMontageOnPlayerWithCallbacks::StaticClass, TEXT("UPlayMontageOnPlayerWithCallbacks"), &Z_Registration_Info_UClass_UPlayMontageOnPlayerWithCallbacks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayMontageOnPlayerWithCallbacks), 3937864094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_2266722481(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayMontageOnPlayerWithCallbacks_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
