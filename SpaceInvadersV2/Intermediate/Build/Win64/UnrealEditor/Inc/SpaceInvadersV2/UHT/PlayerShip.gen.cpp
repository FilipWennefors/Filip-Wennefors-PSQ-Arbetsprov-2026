// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvadersV2/PlayerShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShip() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_APlayerShip();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_APlayerShip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceInvadersV2();
// End Cross Module References
	DEFINE_FUNCTION(APlayerShip::execLocalMovePlayerShip)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocalMovePlayerShip(Z_Param_speed,Z_Param_direction,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execSetPlayerHealth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerHealth(Z_Param_newHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execTakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_damageTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_damageTaken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execTestMirroredEaseInOutQuartFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TestMirroredEaseInOutQuartFactor(Z_Param_t);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execMovePlayerShip)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePlayerShip(Z_Param_speed,Z_Param_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execShoot)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fireRate);
		P_GET_STRUCT(FTransform,Z_Param_shipRelativeSpawnPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot(Z_Param_fireRate,Z_Param_shipRelativeSpawnPos);
		P_NATIVE_END;
	}
	void APlayerShip::StaticRegisterNativesAPlayerShip()
	{
		UClass* Class = APlayerShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LocalMovePlayerShip", &APlayerShip::execLocalMovePlayerShip },
			{ "MovePlayerShip", &APlayerShip::execMovePlayerShip },
			{ "SetPlayerHealth", &APlayerShip::execSetPlayerHealth },
			{ "Shoot", &APlayerShip::execShoot },
			{ "TakeDamage", &APlayerShip::execTakeDamage },
			{ "TestMirroredEaseInOutQuartFactor", &APlayerShip::execTestMirroredEaseInOutQuartFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics
	{
		struct PlayerShip_eventLocalMovePlayerShip_Parms
		{
			float speed;
			float direction;
			float deltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventLocalMovePlayerShip_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventLocalMovePlayerShip_Parms, direction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventLocalMovePlayerShip_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "LocalMovePlayerShip", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::PlayerShip_eventLocalMovePlayerShip_Parms), Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics
	{
		struct PlayerShip_eventMovePlayerShip_Parms
		{
			float speed;
			float direction;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMovePlayerShip_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMovePlayerShip_Parms, direction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "MovePlayerShip", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::PlayerShip_eventMovePlayerShip_Parms), Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_MovePlayerShip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_MovePlayerShip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics
	{
		struct PlayerShip_eventSetPlayerHealth_Parms
		{
			int32 newHealth;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::NewProp_newHealth = { "newHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventSetPlayerHealth_Parms, newHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::NewProp_newHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "SetPlayerHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::PlayerShip_eventSetPlayerHealth_Parms), Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_SetPlayerHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_SetPlayerHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_Shoot_Statics
	{
		struct PlayerShip_eventShoot_Parms
		{
			float fireRate;
			FTransform shipRelativeSpawnPos;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fireRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_shipRelativeSpawnPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_Shoot_Statics::NewProp_fireRate = { "fireRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventShoot_Parms, fireRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerShip_Shoot_Statics::NewProp_shipRelativeSpawnPos = { "shipRelativeSpawnPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventShoot_Parms, shipRelativeSpawnPos), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_Shoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_Shoot_Statics::NewProp_fireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_Shoot_Statics::NewProp_shipRelativeSpawnPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_Shoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "Shoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_Shoot_Statics::PlayerShip_eventShoot_Parms), Z_Construct_UFunction_APlayerShip_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_Shoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_TakeDamage_Statics
	{
		struct PlayerShip_eventTakeDamage_Parms
		{
			int32 damageTaken;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_damageTaken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::NewProp_damageTaken = { "damageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventTakeDamage_Parms, damageTaken), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::NewProp_damageTaken,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::PlayerShip_eventTakeDamage_Parms), Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics
	{
		struct PlayerShip_eventTestMirroredEaseInOutQuartFactor_Parms
		{
			float t;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventTestMirroredEaseInOutQuartFactor_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventTestMirroredEaseInOutQuartFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "TestMirroredEaseInOutQuartFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::PlayerShip_eventTestMirroredEaseInOutQuartFactor_Parms), Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerShip);
	UClass* Z_Construct_UClass_APlayerShip_NoRegister()
	{
		return APlayerShip::StaticClass();
	}
	struct Z_Construct_UClass_APlayerShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerShipMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerShipMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerShipCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerShipCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerShipHitbox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerShipHitbox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bulletActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSidewaysPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSidewaysPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSidewaysPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSidewaysPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_iFrameDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_iFrameDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__health_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_firingCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_firingCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__movingPlayerShip_MetaData[];
#endif
		static void NewProp__movingPlayerShip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__movingPlayerShip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__direction_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasIFrames_MetaData[];
#endif
		static void NewProp_hasIFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasIFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvadersV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerShip_LocalMovePlayerShip, "LocalMovePlayerShip" }, // 1461470308
		{ &Z_Construct_UFunction_APlayerShip_MovePlayerShip, "MovePlayerShip" }, // 3155880751
		{ &Z_Construct_UFunction_APlayerShip_SetPlayerHealth, "SetPlayerHealth" }, // 2597990241
		{ &Z_Construct_UFunction_APlayerShip_Shoot, "Shoot" }, // 2146524
		{ &Z_Construct_UFunction_APlayerShip_TakeDamage, "TakeDamage" }, // 1304620677
		{ &Z_Construct_UFunction_APlayerShip_TestMirroredEaseInOutQuartFactor, "TestMirroredEaseInOutQuartFactor" }, // 4291545984
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerShip.h" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipMesh = { "playerShipMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, playerShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipCamera = { "playerShipCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, playerShipCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipHitbox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipHitbox = { "playerShipHitbox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, playerShipHitbox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipHitbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipHitbox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_bulletActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_bulletActor = { "bulletActor", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, bulletActor), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_bulletActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_bulletActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_MinSidewaysPosition_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_MinSidewaysPosition = { "MinSidewaysPosition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, MinSidewaysPosition), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_MinSidewaysPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_MinSidewaysPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_MaxSidewaysPosition_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_MaxSidewaysPosition = { "MaxSidewaysPosition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, MaxSidewaysPosition), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_MaxSidewaysPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_MaxSidewaysPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_iFrameDuration_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_iFrameDuration = { "iFrameDuration", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, iFrameDuration), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_iFrameDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_iFrameDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp__health_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp__health = { "_health", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, _health), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp__health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp__health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_firingCooldown_MetaData[] = {
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_firingCooldown = { "firingCooldown", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, firingCooldown), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_firingCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_firingCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp__movingPlayerShip_MetaData[] = {
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	void Z_Construct_UClass_APlayerShip_Statics::NewProp__movingPlayerShip_SetBit(void* Obj)
	{
		((APlayerShip*)Obj)->_movingPlayerShip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp__movingPlayerShip = { "_movingPlayerShip", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerShip), &Z_Construct_UClass_APlayerShip_Statics::NewProp__movingPlayerShip_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp__movingPlayerShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp__movingPlayerShip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp__speed_MetaData[] = {
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, _speed), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp__speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp__speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp__direction_MetaData[] = {
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, _direction), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp__direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp__direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_hasIFrames_MetaData[] = {
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	void Z_Construct_UClass_APlayerShip_Statics::NewProp_hasIFrames_SetBit(void* Obj)
	{
		((APlayerShip*)Obj)->hasIFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_hasIFrames = { "hasIFrames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerShip), &Z_Construct_UClass_APlayerShip_Statics::NewProp_hasIFrames_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_hasIFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_hasIFrames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_playerShipHitbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_bulletActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_MinSidewaysPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_MaxSidewaysPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_iFrameDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp__health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_firingCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp__movingPlayerShip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp__speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp__direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_hasIFrames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerShip_Statics::ClassParams = {
		&APlayerShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerShip()
	{
		if (!Z_Registration_Info_UClass_APlayerShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerShip.OuterSingleton, Z_Construct_UClass_APlayerShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerShip.OuterSingleton;
	}
	template<> SPACEINVADERSV2_API UClass* StaticClass<APlayerShip>()
	{
		return APlayerShip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShip);
	APlayerShip::~APlayerShip() {}
	struct Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_PlayerShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_PlayerShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerShip, APlayerShip::StaticClass, TEXT("APlayerShip"), &Z_Registration_Info_UClass_APlayerShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerShip), 1046454282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_PlayerShip_h_4117641848(TEXT("/Script/SpaceInvadersV2"),
		Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_PlayerShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_PlayerShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
