// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvadersV2/SpaceInvadersGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceInvadersGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ASpaceInvadersGameMode();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ASpaceInvadersGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceInvadersV2();
// End Cross Module References
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execCalcActualInvadersWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_invadersHorizontalBounds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distBetweenInvaders);
		P_GET_PROPERTY(FInt64Property,Z_Param_invadersCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamera);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MiddlePos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartPos);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_cornerPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalcActualInvadersWidth(Z_Param_invadersHorizontalBounds,Z_Param_distBetweenInvaders,Z_Param_invadersCount,Z_Param_distFromCamera,Z_Param_Out_MiddlePos,Z_Param_Out_StartPos,Z_Param_Out_cornerPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execMoveInvadersIntoCorrectPos)
	{
		P_GET_TARRAY(AActor*,Z_Param_spawnedInvaders);
		P_GET_PROPERTY(FFloatProperty,Z_Param_invadersHorizontalBounds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distBetweenInvaders);
		P_GET_PROPERTY(FInt64Property,Z_Param_invadersCount);
		P_GET_STRUCT(FVector,Z_Param_screenMiddlePos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveInvadersIntoCorrectPos(Z_Param_spawnedInvaders,Z_Param_invadersHorizontalBounds,Z_Param_distBetweenInvaders,Z_Param_invadersCount,Z_Param_screenMiddlePos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execGetInvadersSpawnStartPos)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_invadersHorizontalBounds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distBetweenInvaders);
		P_GET_PROPERTY(FInt64Property,Z_Param_invadersCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInvadersSpawnStartPos(Z_Param_invadersHorizontalBounds,Z_Param_distBetweenInvaders,Z_Param_invadersCount,Z_Param_distFromCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execGetScreenMiddlePosInWorldSpace)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetScreenMiddlePosInWorldSpace(Z_Param_distFromCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execGetScreenKeyDimensionsInCamSpace)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_leftCubeWorldLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_rightCubeWorldLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_leftCubeWorldDirection);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_rightCubeWorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetScreenKeyDimensionsInCamSpace(Z_Param_Out_leftCubeWorldLocation,Z_Param_Out_rightCubeWorldLocation,Z_Param_Out_leftCubeWorldDirection,Z_Param_Out_rightCubeWorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execGetInvadersWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_invadersHorizontalBounds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distBetweenInvaders);
		P_GET_PROPERTY(FInt64Property,Z_Param_invadersCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInvadersWidth(Z_Param_invadersHorizontalBounds,Z_Param_distBetweenInvaders,Z_Param_invadersCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execGetScreenMiddleInWorldSpace)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_worldDirection);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_screenMiddlePosInWorldSpace);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetScreenMiddleInWorldSpace(Z_Param_Out_worldDirection,Z_Param_Out_screenMiddlePosInWorldSpace,Z_Param_Out_direction,Z_Param_distFromCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execMoveInvaders)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_moveSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_moveDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_GET_TARRAY(AActor*,Z_Param_invaders);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveInvaders(Z_Param_moveSpeed,Z_Param_moveDirection,Z_Param_deltaTime,Z_Param_invaders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execOnAllInvadersInvalid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAllInvadersInvalid_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execResetGameState)
	{
		P_GET_TARRAY(AActor*,Z_Param_SpawnedInvaders);
		P_GET_TARRAY(AActor*,Z_Param_SpawnedBarracks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetGameState(Z_Param_SpawnedInvaders,Z_Param_SpawnedBarracks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execAllInvadersKilled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_horizontalInvadersCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_verticalInvadersCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllInvadersKilled(Z_Param_horizontalInvadersCount,Z_Param_verticalInvadersCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execGetInvaderFarthestToRight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_horizontalInvadersCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_verticalInvadersCount);
		P_GET_TARRAY(AActor*,Z_Param_invaders);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetInvaderFarthestToRight(Z_Param_horizontalInvadersCount,Z_Param_verticalInvadersCount,Z_Param_invaders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execGetInvaderFarthestToLeft)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_horizontalInvadersCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_verticalInvadersCount);
		P_GET_TARRAY(AActor*,Z_Param_invaders);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetInvaderFarthestToLeft(Z_Param_horizontalInvadersCount,Z_Param_verticalInvadersCount,Z_Param_invaders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execMoveInvadersV2)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_moveSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_moveDirection);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_moveDirOut);
		P_GET_PROPERTY(FIntProperty,Z_Param_horizontalInvadersCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_verticalInvadersCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamera);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_GET_TARRAY(AActor*,Z_Param_invaders);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveInvadersV2(Z_Param_moveSpeed,Z_Param_moveDirection,Z_Param_Out_moveDirOut,Z_Param_horizontalInvadersCount,Z_Param_verticalInvadersCount,Z_Param_distFromCamera,Z_Param_deltaTime,Z_Param_invaders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersGameMode::execSpawnInvaders)
	{
		P_GET_OBJECT(UClass,Z_Param_InvadersBlueprint);
		P_GET_PROPERTY(FIntProperty,Z_Param_horizontalInvadersCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_verticalInvadersCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distBetweenInvaders);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InvadersVerticalSpawnPos);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_spawnedInvaders);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnInvaders(Z_Param_InvadersBlueprint,Z_Param_horizontalInvadersCount,Z_Param_verticalInvadersCount,Z_Param_distBetweenInvaders,Z_Param_InvadersVerticalSpawnPos,Z_Param_Out_spawnedInvaders,Z_Param_distFromCamera);
		P_NATIVE_END;
	}
	static FName NAME_ASpaceInvadersGameMode_OnAllInvadersInvalid = FName(TEXT("OnAllInvadersInvalid"));
	void ASpaceInvadersGameMode::OnAllInvadersInvalid()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpaceInvadersGameMode_OnAllInvadersInvalid),NULL);
	}
	void ASpaceInvadersGameMode::StaticRegisterNativesASpaceInvadersGameMode()
	{
		UClass* Class = ASpaceInvadersGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllInvadersKilled", &ASpaceInvadersGameMode::execAllInvadersKilled },
			{ "CalcActualInvadersWidth", &ASpaceInvadersGameMode::execCalcActualInvadersWidth },
			{ "GetInvaderFarthestToLeft", &ASpaceInvadersGameMode::execGetInvaderFarthestToLeft },
			{ "GetInvaderFarthestToRight", &ASpaceInvadersGameMode::execGetInvaderFarthestToRight },
			{ "GetInvadersSpawnStartPos", &ASpaceInvadersGameMode::execGetInvadersSpawnStartPos },
			{ "GetInvadersWidth", &ASpaceInvadersGameMode::execGetInvadersWidth },
			{ "GetScreenKeyDimensionsInCamSpace", &ASpaceInvadersGameMode::execGetScreenKeyDimensionsInCamSpace },
			{ "GetScreenMiddleInWorldSpace", &ASpaceInvadersGameMode::execGetScreenMiddleInWorldSpace },
			{ "GetScreenMiddlePosInWorldSpace", &ASpaceInvadersGameMode::execGetScreenMiddlePosInWorldSpace },
			{ "MoveInvaders", &ASpaceInvadersGameMode::execMoveInvaders },
			{ "MoveInvadersIntoCorrectPos", &ASpaceInvadersGameMode::execMoveInvadersIntoCorrectPos },
			{ "MoveInvadersV2", &ASpaceInvadersGameMode::execMoveInvadersV2 },
			{ "OnAllInvadersInvalid", &ASpaceInvadersGameMode::execOnAllInvadersInvalid },
			{ "ResetGameState", &ASpaceInvadersGameMode::execResetGameState },
			{ "SpawnInvaders", &ASpaceInvadersGameMode::execSpawnInvaders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics
	{
		struct SpaceInvadersGameMode_eventAllInvadersKilled_Parms
		{
			int32 horizontalInvadersCount;
			int32 verticalInvadersCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_horizontalInvadersCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verticalInvadersCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::NewProp_horizontalInvadersCount = { "horizontalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventAllInvadersKilled_Parms, horizontalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::NewProp_verticalInvadersCount = { "verticalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventAllInvadersKilled_Parms, verticalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpaceInvadersGameMode_eventAllInvadersKilled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpaceInvadersGameMode_eventAllInvadersKilled_Parms), &Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::NewProp_horizontalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::NewProp_verticalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "AllInvadersKilled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::SpaceInvadersGameMode_eventAllInvadersKilled_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics
	{
		struct SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms
		{
			float invadersHorizontalBounds;
			float distBetweenInvaders;
			int64 invadersCount;
			float distFromCamera;
			FVector MiddlePos;
			FVector StartPos;
			float cornerPos;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_invadersHorizontalBounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distBetweenInvaders;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_invadersCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MiddlePos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cornerPos;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_invadersHorizontalBounds = { "invadersHorizontalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms, invadersHorizontalBounds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_distBetweenInvaders = { "distBetweenInvaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms, distBetweenInvaders), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_invadersCount = { "invadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms, invadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_distFromCamera = { "distFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms, distFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_MiddlePos = { "MiddlePos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms, MiddlePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_cornerPos = { "cornerPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms, cornerPos), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_invadersHorizontalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_distBetweenInvaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_invadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_distFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_MiddlePos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_StartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_cornerPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "CalcActualInvadersWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::SpaceInvadersGameMode_eventCalcActualInvadersWidth_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics
	{
		struct SpaceInvadersGameMode_eventGetInvaderFarthestToLeft_Parms
		{
			int32 horizontalInvadersCount;
			int32 verticalInvadersCount;
			TArray<AActor*> invaders;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_horizontalInvadersCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verticalInvadersCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_invaders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_invaders;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_horizontalInvadersCount = { "horizontalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvaderFarthestToLeft_Parms, horizontalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_verticalInvadersCount = { "verticalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvaderFarthestToLeft_Parms, verticalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_invaders_Inner = { "invaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_invaders = { "invaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvaderFarthestToLeft_Parms, invaders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvaderFarthestToLeft_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_horizontalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_verticalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_invaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_invaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "GetInvaderFarthestToLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::SpaceInvadersGameMode_eventGetInvaderFarthestToLeft_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics
	{
		struct SpaceInvadersGameMode_eventGetInvaderFarthestToRight_Parms
		{
			int32 horizontalInvadersCount;
			int32 verticalInvadersCount;
			TArray<AActor*> invaders;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_horizontalInvadersCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verticalInvadersCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_invaders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_invaders;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_horizontalInvadersCount = { "horizontalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvaderFarthestToRight_Parms, horizontalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_verticalInvadersCount = { "verticalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvaderFarthestToRight_Parms, verticalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_invaders_Inner = { "invaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_invaders = { "invaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvaderFarthestToRight_Parms, invaders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvaderFarthestToRight_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_horizontalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_verticalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_invaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_invaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "GetInvaderFarthestToRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::SpaceInvadersGameMode_eventGetInvaderFarthestToRight_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics
	{
		struct SpaceInvadersGameMode_eventGetInvadersSpawnStartPos_Parms
		{
			float invadersHorizontalBounds;
			float distBetweenInvaders;
			int64 invadersCount;
			float distFromCamera;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_invadersHorizontalBounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distBetweenInvaders;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_invadersCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_invadersHorizontalBounds = { "invadersHorizontalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersSpawnStartPos_Parms, invadersHorizontalBounds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_distBetweenInvaders = { "distBetweenInvaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersSpawnStartPos_Parms, distBetweenInvaders), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_invadersCount = { "invadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersSpawnStartPos_Parms, invadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_distFromCamera = { "distFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersSpawnStartPos_Parms, distFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersSpawnStartPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_invadersHorizontalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_distBetweenInvaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_invadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_distFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "GetInvadersSpawnStartPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::SpaceInvadersGameMode_eventGetInvadersSpawnStartPos_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics
	{
		struct SpaceInvadersGameMode_eventGetInvadersWidth_Parms
		{
			float invadersHorizontalBounds;
			float distBetweenInvaders;
			int64 invadersCount;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_invadersHorizontalBounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distBetweenInvaders;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_invadersCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::NewProp_invadersHorizontalBounds = { "invadersHorizontalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersWidth_Parms, invadersHorizontalBounds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::NewProp_distBetweenInvaders = { "distBetweenInvaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersWidth_Parms, distBetweenInvaders), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::NewProp_invadersCount = { "invadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersWidth_Parms, invadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetInvadersWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::NewProp_invadersHorizontalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::NewProp_distBetweenInvaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::NewProp_invadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "GetInvadersWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::SpaceInvadersGameMode_eventGetInvadersWidth_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics
	{
		struct SpaceInvadersGameMode_eventGetScreenKeyDimensionsInCamSpace_Parms
		{
			FVector leftCubeWorldLocation;
			FVector rightCubeWorldLocation;
			FVector leftCubeWorldDirection;
			FVector rightCubeWorldDirection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftCubeWorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightCubeWorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftCubeWorldDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightCubeWorldDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::NewProp_leftCubeWorldLocation = { "leftCubeWorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenKeyDimensionsInCamSpace_Parms, leftCubeWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::NewProp_rightCubeWorldLocation = { "rightCubeWorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenKeyDimensionsInCamSpace_Parms, rightCubeWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::NewProp_leftCubeWorldDirection = { "leftCubeWorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenKeyDimensionsInCamSpace_Parms, leftCubeWorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::NewProp_rightCubeWorldDirection = { "rightCubeWorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenKeyDimensionsInCamSpace_Parms, rightCubeWorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::NewProp_leftCubeWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::NewProp_rightCubeWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::NewProp_leftCubeWorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::NewProp_rightCubeWorldDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "GetScreenKeyDimensionsInCamSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::SpaceInvadersGameMode_eventGetScreenKeyDimensionsInCamSpace_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics
	{
		struct SpaceInvadersGameMode_eventGetScreenMiddleInWorldSpace_Parms
		{
			FVector worldDirection;
			FVector screenMiddlePosInWorldSpace;
			FVector direction;
			float distFromCamera;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_worldDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_screenMiddlePosInWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::NewProp_worldDirection = { "worldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenMiddleInWorldSpace_Parms, worldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::NewProp_screenMiddlePosInWorldSpace = { "screenMiddlePosInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenMiddleInWorldSpace_Parms, screenMiddlePosInWorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenMiddleInWorldSpace_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::NewProp_distFromCamera = { "distFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenMiddleInWorldSpace_Parms, distFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::NewProp_worldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::NewProp_screenMiddlePosInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::NewProp_distFromCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Space Invaders Game Mode\", meta = (AllowPrivateAccess = \"true\"))\n//void TestSpawnCubesInVerticalFormation(UClass* spawnCube, float verticalCubes, float horizontalCubes, float distBetweenCubes, TArray<AActor*>& spawnedInvaders);\n" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Space Invaders Game Mode\", meta = (AllowPrivateAccess = \"true\"))\nvoid TestSpawnCubesInVerticalFormation(UClass* spawnCube, float verticalCubes, float horizontalCubes, float distBetweenCubes, TArray<AActor*>& spawnedInvaders);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "GetScreenMiddleInWorldSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::SpaceInvadersGameMode_eventGetScreenMiddleInWorldSpace_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics
	{
		struct SpaceInvadersGameMode_eventGetScreenMiddlePosInWorldSpace_Parms
		{
			float distFromCamera;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::NewProp_distFromCamera = { "distFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenMiddlePosInWorldSpace_Parms, distFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventGetScreenMiddlePosInWorldSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::NewProp_distFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "GetScreenMiddlePosInWorldSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::SpaceInvadersGameMode_eventGetScreenMiddlePosInWorldSpace_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics
	{
		struct SpaceInvadersGameMode_eventMoveInvaders_Parms
		{
			float moveSpeed;
			float moveDirection;
			float deltaTime;
			TArray<AActor*> invaders;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveDirection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_invaders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_invaders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvaders_Parms, moveSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvaders_Parms, moveDirection), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvaders_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_invaders_Inner = { "invaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_invaders = { "invaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvaders_Parms, invaders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_moveDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_deltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_invaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::NewProp_invaders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "Comment", "//OBSOLETE\n" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
		{ "ToolTip", "OBSOLETE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "MoveInvaders", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::SpaceInvadersGameMode_eventMoveInvaders_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics
	{
		struct SpaceInvadersGameMode_eventMoveInvadersIntoCorrectPos_Parms
		{
			TArray<AActor*> spawnedInvaders;
			float invadersHorizontalBounds;
			float distBetweenInvaders;
			int64 invadersCount;
			FVector screenMiddlePos;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedInvaders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_spawnedInvaders;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_invadersHorizontalBounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distBetweenInvaders;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_invadersCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_screenMiddlePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_spawnedInvaders_Inner = { "spawnedInvaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_spawnedInvaders = { "spawnedInvaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersIntoCorrectPos_Parms, spawnedInvaders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_invadersHorizontalBounds = { "invadersHorizontalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersIntoCorrectPos_Parms, invadersHorizontalBounds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_distBetweenInvaders = { "distBetweenInvaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersIntoCorrectPos_Parms, distBetweenInvaders), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_invadersCount = { "invadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersIntoCorrectPos_Parms, invadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_screenMiddlePos = { "screenMiddlePos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersIntoCorrectPos_Parms, screenMiddlePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_spawnedInvaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_spawnedInvaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_invadersHorizontalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_distBetweenInvaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_invadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::NewProp_screenMiddlePos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "MoveInvadersIntoCorrectPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::SpaceInvadersGameMode_eventMoveInvadersIntoCorrectPos_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics
	{
		struct SpaceInvadersGameMode_eventMoveInvadersV2_Parms
		{
			float moveSpeed;
			float moveDirection;
			float moveDirOut;
			int32 horizontalInvadersCount;
			int32 verticalInvadersCount;
			float distFromCamera;
			float deltaTime;
			TArray<AActor*> invaders;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveDirection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveDirOut;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_horizontalInvadersCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verticalInvadersCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamera;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_invaders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_invaders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersV2_Parms, moveSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersV2_Parms, moveDirection), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_moveDirOut = { "moveDirOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersV2_Parms, moveDirOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_horizontalInvadersCount = { "horizontalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersV2_Parms, horizontalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_verticalInvadersCount = { "verticalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersV2_Parms, verticalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_distFromCamera = { "distFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersV2_Parms, distFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersV2_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_invaders_Inner = { "invaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_invaders = { "invaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventMoveInvadersV2_Parms, invaders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_moveDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_moveDirOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_horizontalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_verticalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_distFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_deltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_invaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::NewProp_invaders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "MoveInvadersV2", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::SpaceInvadersGameMode_eventMoveInvadersV2_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_OnAllInvadersInvalid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_OnAllInvadersInvalid_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_OnAllInvadersInvalid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "OnAllInvadersInvalid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_OnAllInvadersInvalid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_OnAllInvadersInvalid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_OnAllInvadersInvalid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_OnAllInvadersInvalid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics
	{
		struct SpaceInvadersGameMode_eventResetGameState_Parms
		{
			TArray<AActor*> SpawnedInvaders;
			TArray<AActor*> SpawnedBarracks;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedInvaders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedInvaders;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedBarracks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedBarracks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::NewProp_SpawnedInvaders_Inner = { "SpawnedInvaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::NewProp_SpawnedInvaders = { "SpawnedInvaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventResetGameState_Parms, SpawnedInvaders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::NewProp_SpawnedBarracks_Inner = { "SpawnedBarracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::NewProp_SpawnedBarracks = { "SpawnedBarracks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventResetGameState_Parms, SpawnedBarracks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::NewProp_SpawnedInvaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::NewProp_SpawnedInvaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::NewProp_SpawnedBarracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::NewProp_SpawnedBarracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "ResetGameState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::SpaceInvadersGameMode_eventResetGameState_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics
	{
		struct SpaceInvadersGameMode_eventSpawnInvaders_Parms
		{
			UClass* InvadersBlueprint;
			int32 horizontalInvadersCount;
			int32 verticalInvadersCount;
			float distBetweenInvaders;
			float InvadersVerticalSpawnPos;
			TArray<AActor*> spawnedInvaders;
			float distFromCamera;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InvadersBlueprint;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_horizontalInvadersCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verticalInvadersCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distBetweenInvaders;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InvadersVerticalSpawnPos;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedInvaders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_spawnedInvaders;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_InvadersBlueprint = { "InvadersBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventSpawnInvaders_Parms, InvadersBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_horizontalInvadersCount = { "horizontalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventSpawnInvaders_Parms, horizontalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_verticalInvadersCount = { "verticalInvadersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventSpawnInvaders_Parms, verticalInvadersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_distBetweenInvaders = { "distBetweenInvaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventSpawnInvaders_Parms, distBetweenInvaders), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_InvadersVerticalSpawnPos = { "InvadersVerticalSpawnPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventSpawnInvaders_Parms, InvadersVerticalSpawnPos), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_spawnedInvaders_Inner = { "spawnedInvaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_spawnedInvaders = { "spawnedInvaders", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventSpawnInvaders_Parms, spawnedInvaders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_distFromCamera = { "distFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersGameMode_eventSpawnInvaders_Parms, distFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_InvadersBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_horizontalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_verticalInvadersCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_distBetweenInvaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_InvadersVerticalSpawnPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_spawnedInvaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_spawnedInvaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::NewProp_distFromCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersGameMode, nullptr, "SpawnInvaders", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::SpaceInvadersGameMode_eventSpawnInvaders_Parms), Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceInvadersGameMode);
	UClass* Z_Construct_UClass_ASpaceInvadersGameMode_NoRegister()
	{
		return ASpaceInvadersGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceInvadersGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceInvadersGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvadersV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpaceInvadersGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_AllInvadersKilled, "AllInvadersKilled" }, // 1174878775
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_CalcActualInvadersWidth, "CalcActualInvadersWidth" }, // 399618935
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToLeft, "GetInvaderFarthestToLeft" }, // 2484732834
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvaderFarthestToRight, "GetInvaderFarthestToRight" }, // 4099758012
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersSpawnStartPos, "GetInvadersSpawnStartPos" }, // 1407963067
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_GetInvadersWidth, "GetInvadersWidth" }, // 3513864581
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenKeyDimensionsInCamSpace, "GetScreenKeyDimensionsInCamSpace" }, // 877991979
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddleInWorldSpace, "GetScreenMiddleInWorldSpace" }, // 3804290998
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_GetScreenMiddlePosInWorldSpace, "GetScreenMiddlePosInWorldSpace" }, // 4021022945
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvaders, "MoveInvaders" }, // 272858807
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersIntoCorrectPos, "MoveInvadersIntoCorrectPos" }, // 2610546092
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_MoveInvadersV2, "MoveInvadersV2" }, // 1789653682
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_OnAllInvadersInvalid, "OnAllInvadersInvalid" }, // 518896984
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_ResetGameState, "ResetGameState" }, // 2272174371
		{ &Z_Construct_UFunction_ASpaceInvadersGameMode_SpawnInvaders, "SpawnInvaders" }, // 1790050264
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvadersGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpaceInvadersGameMode.h" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_RedMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpaceInvadersGameMode, RedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_RedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_RedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Space Invaders Game Mode" },
		{ "ModuleRelativePath", "SpaceInvadersGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpaceInvadersGameMode, BlueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_BlueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_BlueMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceInvadersGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_RedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceInvadersGameMode_Statics::NewProp_BlueMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceInvadersGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceInvadersGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceInvadersGameMode_Statics::ClassParams = {
		&ASpaceInvadersGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpaceInvadersGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceInvadersGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceInvadersGameMode()
	{
		if (!Z_Registration_Info_UClass_ASpaceInvadersGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceInvadersGameMode.OuterSingleton, Z_Construct_UClass_ASpaceInvadersGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpaceInvadersGameMode.OuterSingleton;
	}
	template<> SPACEINVADERSV2_API UClass* StaticClass<ASpaceInvadersGameMode>()
	{
		return ASpaceInvadersGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceInvadersGameMode);
	ASpaceInvadersGameMode::~ASpaceInvadersGameMode() {}
	struct Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceInvadersGameMode, ASpaceInvadersGameMode::StaticClass, TEXT("ASpaceInvadersGameMode"), &Z_Registration_Info_UClass_ASpaceInvadersGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceInvadersGameMode), 4183589830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_3339958193(TEXT("/Script/SpaceInvadersV2"),
		Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
