// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/GeneralUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneralUtilities() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UGeneralUtilities();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UGeneralUtilities_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UGeneralUtilities::execFindClosestActor)
	{
		P_GET_TARRAY(AActor*,Z_Param_actors);
		P_GET_STRUCT(FVector,Z_Param_closestTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UGeneralUtilities::FindClosestActor(Z_Param_actors,Z_Param_closestTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneralUtilities::execCheckIfPointOnScreen)
	{
		P_GET_OBJECT(APlayerController,Z_Param_playerController);
		P_GET_STRUCT(FVector,Z_Param_pointToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeneralUtilities::CheckIfPointOnScreen(Z_Param_playerController,Z_Param_pointToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneralUtilities::execIsActorOnScreen)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeneralUtilities::IsActorOnScreen(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneralUtilities::execIsActorInFront)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_OBJECT(AActor,Z_Param_inFrontOfActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeneralUtilities::IsActorInFront(Z_Param_actor,Z_Param_inFrontOfActor);
		P_NATIVE_END;
	}
	void UGeneralUtilities::StaticRegisterNativesUGeneralUtilities()
	{
		UClass* Class = UGeneralUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfPointOnScreen", &UGeneralUtilities::execCheckIfPointOnScreen },
			{ "FindClosestActor", &UGeneralUtilities::execFindClosestActor },
			{ "IsActorInFront", &UGeneralUtilities::execIsActorInFront },
			{ "IsActorOnScreen", &UGeneralUtilities::execIsActorOnScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics
	{
		struct GeneralUtilities_eventCheckIfPointOnScreen_Parms
		{
			APlayerController* playerController;
			FVector pointToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_pointToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::NewProp_playerController = { "playerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralUtilities_eventCheckIfPointOnScreen_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::NewProp_pointToCheck = { "pointToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralUtilities_eventCheckIfPointOnScreen_Parms, pointToCheck), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneralUtilities_eventCheckIfPointOnScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeneralUtilities_eventCheckIfPointOnScreen_Parms), &Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::NewProp_playerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::NewProp_pointToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeneralUtilities" },
		{ "Comment", "/** \n\x09 * Checks if a specified 2D screen position is on the player's screen\n\x09 *\n\x09 * @param\x09\x09playerController\x09The controller for the player whose screen is supposed to be checked\n\x09 * @param\x09\x09pointToCheck\x09\x09The point to check whether it is on the player screen \n\x09 * @return\x09\x09true if the point is located on the player's screen\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeneralUtilities.h" },
		{ "ToolTip", "Checks if a specified 2D screen position is on the player's screen\n\n@param               playerController        The controller for the player whose screen is supposed to be checked\n@param               pointToCheck            The point to check whether it is on the player screen\n@return              true if the point is located on the player's screen" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralUtilities, nullptr, "CheckIfPointOnScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::GeneralUtilities_eventCheckIfPointOnScreen_Parms), Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics
	{
		struct GeneralUtilities_eventFindClosestActor_Parms
		{
			TArray<AActor*> actors;
			FVector closestTo;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_actors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestTo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::NewProp_actors_Inner = { "actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::NewProp_actors = { "actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralUtilities_eventFindClosestActor_Parms, actors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::NewProp_closestTo = { "closestTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralUtilities_eventFindClosestActor_Parms, closestTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralUtilities_eventFindClosestActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::NewProp_actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::NewProp_actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::NewProp_closestTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeneralUtilities" },
		{ "Comment", "/** \n\x09 * This function takes in an array of actors and returns the one which is closest to the specified position\n\x09 *\n\x09 * @param\x09\x09""actors\x09\x09\x09The array of actors from which you want to get the closest position\n\x09 * @param\x09\x09""closestTo\x09\x09The position which you want to get the actor closest to\n\x09 * @return\x09\x09the actor which is closest to the specified position \n\x09 */" },
		{ "ModuleRelativePath", "Public/GeneralUtilities.h" },
		{ "ToolTip", "This function takes in an array of actors and returns the one which is closest to the specified position\n\n@param               actors                  The array of actors from which you want to get the closest position\n@param               closestTo               The position which you want to get the actor closest to\n@return              the actor which is closest to the specified position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralUtilities, nullptr, "FindClosestActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::GeneralUtilities_eventFindClosestActor_Parms), Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralUtilities_FindClosestActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralUtilities_FindClosestActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics
	{
		struct GeneralUtilities_eventIsActorInFront_Parms
		{
			AActor* actor;
			AActor* inFrontOfActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inFrontOfActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralUtilities_eventIsActorInFront_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::NewProp_inFrontOfActor = { "inFrontOfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralUtilities_eventIsActorInFront_Parms, inFrontOfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneralUtilities_eventIsActorInFront_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeneralUtilities_eventIsActorInFront_Parms), &Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::NewProp_inFrontOfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeneralUtilities" },
		{ "Comment", "/** \n\x09 * Check whether an actor is in front of another\n\x09 *\n\x09 * @param\x09\x09""actor\x09\x09\x09\x09The actor you want to check to see if it's in front of another\n\x09 * @param\x09\x09inFrontOfActor\x09\x09The actor you want so see if the other actor is in front of. \n\x09 * @return\x09\x09true if actor is in front of the second actor in the params list \n\x09 */" },
		{ "ModuleRelativePath", "Public/GeneralUtilities.h" },
		{ "ToolTip", "Check whether an actor is in front of another\n\n@param               actor                           The actor you want to check to see if it's in front of another\n@param               inFrontOfActor          The actor you want so see if the other actor is in front of.\n@return              true if actor is in front of the second actor in the params list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralUtilities, nullptr, "IsActorInFront", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::GeneralUtilities_eventIsActorInFront_Parms), Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralUtilities_IsActorInFront()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralUtilities_IsActorInFront_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics
	{
		struct GeneralUtilities_eventIsActorOnScreen_Parms
		{
			AActor* actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralUtilities_eventIsActorOnScreen_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneralUtilities_eventIsActorOnScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeneralUtilities_eventIsActorOnScreen_Parms), &Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeneralUtilities" },
		{ "ModuleRelativePath", "Public/GeneralUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralUtilities, nullptr, "IsActorOnScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::GeneralUtilities_eventIsActorOnScreen_Parms), Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneralUtilities);
	UClass* Z_Construct_UClass_UGeneralUtilities_NoRegister()
	{
		return UGeneralUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UGeneralUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneralUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneralUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneralUtilities_CheckIfPointOnScreen, "CheckIfPointOnScreen" }, // 1692354906
		{ &Z_Construct_UFunction_UGeneralUtilities_FindClosestActor, "FindClosestActor" }, // 3880975478
		{ &Z_Construct_UFunction_UGeneralUtilities_IsActorInFront, "IsActorInFront" }, // 2111551815
		{ &Z_Construct_UFunction_UGeneralUtilities_IsActorOnScreen, "IsActorOnScreen" }, // 451773046
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneralUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GeneralUtilities.h" },
		{ "ModuleRelativePath", "Public/GeneralUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneralUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneralUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneralUtilities_Statics::ClassParams = {
		&UGeneralUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeneralUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneralUtilities()
	{
		if (!Z_Registration_Info_UClass_UGeneralUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneralUtilities.OuterSingleton, Z_Construct_UClass_UGeneralUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeneralUtilities.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UGeneralUtilities>()
	{
		return UGeneralUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralUtilities);
	UGeneralUtilities::~UGeneralUtilities() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_GeneralUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_GeneralUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeneralUtilities, UGeneralUtilities::StaticClass, TEXT("UGeneralUtilities"), &Z_Registration_Info_UClass_UGeneralUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneralUtilities), 820472301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_GeneralUtilities_h_869958920(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_GeneralUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_GeneralUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
