// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Player Logic/PlayerCharacter.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AKnifeBaseClass_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_APlayerCharacter();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AWeaponsBaseClass_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCustomMotionWarpComponent_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UNewInventoryItem_NoRegister();
	RESIDENTEVILTESTING_API UEnum* Z_Construct_UEnum_ResidentEvilTesting_ETakedownType();
	RESIDENTEVILTESTING_API UEnum* Z_Construct_UEnum_ResidentEvilTesting_EWeaponState();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature();
	RESIDENTEVILTESTING_API UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnWeaponWheelInfoUpdate_Parms
		{
			TArray<AWeaponsBaseClass*> weaponsInWeaponWheel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponsInWeaponWheel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weaponsInWeaponWheel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_weaponsInWeaponWheel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::NewProp_weaponsInWeaponWheel_Inner = { "weaponsInWeaponWheel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::NewProp_weaponsInWeaponWheel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::NewProp_weaponsInWeaponWheel = { "weaponsInWeaponWheel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnWeaponWheelInfoUpdate_Parms, weaponsInWeaponWheel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::NewProp_weaponsInWeaponWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::NewProp_weaponsInWeaponWheel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::NewProp_weaponsInWeaponWheel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::NewProp_weaponsInWeaponWheel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnWeaponWheelInfoUpdate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnWeaponWheelInfoUpdate_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics
	{
		struct _Script_ResidentEvilTesting_eventOnStabClosestEnemy_Parms
		{
			ETakedownType takedownTypePerformed;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_takedownTypePerformed_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_takedownTypePerformed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::NewProp_takedownTypePerformed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::NewProp_takedownTypePerformed = { "takedownTypePerformed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ResidentEvilTesting_eventOnStabClosestEnemy_Parms, takedownTypePerformed), Z_Construct_UEnum_ResidentEvilTesting_ETakedownType, METADATA_PARAMS(nullptr, 0) }; // 451650815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::NewProp_takedownTypePerformed_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::NewProp_takedownTypePerformed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Refuses to compile unless we do const and two pointers: https://forums.unrealengine.com/t/bind-event-not-compiling-in-blueprints/348173/5\n" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "Refuses to compile unless we do const and two pointers: https:forums.unrealengine.com/t/bind-event-not-compiling-in-blueprints/348173/5" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ResidentEvilTesting, nullptr, "OnStabClosestEnemy__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::_Script_ResidentEvilTesting_eventOnStabClosestEnemy_Parms), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(APlayerCharacter::execOnItemInfoUpdated)
	{
		P_GET_OBJECT(UNewInventoryItem,Z_Param_itemInfoUpdated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemInfoUpdated(Z_Param_itemInfoUpdated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execOnItemAdded)
	{
		P_GET_OBJECT(UNewInventoryItem,Z_Param_itemAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemAdded(Z_Param_itemAdded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execOnMontageWithCallbacksStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageWithCallbacksStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execOnMontageWithCallbacksEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageWithCallbacksEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execGetLookTowardsCrosshairRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamToCursor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_interpSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetLookTowardsCrosshairRotation(Z_Param_distFromCamToCursor,Z_Param_deltaTime,Z_Param_interpSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execTryStartSwitchingWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryStartSwitchingWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execPlayTakeDamageAnimations)
	{
		P_GET_OBJECT(AActor,Z_Param_damageCauser);
		P_GET_TARRAY(UAnimMontage*,Z_Param_animations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTakeDamageAnimations(Z_Param_damageCauser,Z_Param_animations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execGetIsPlayingMontageOnPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPlayingMontageOnPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execPlayAnimationMontageOnPlayer)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_animationToPlay);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_montagePlayLength);
		P_GET_UBOOL(Z_Param_blockDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnimationMontageOnPlayer(Z_Param_animationToPlay,Z_Param_Out_montagePlayLength,Z_Param_blockDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execEquipWeaponOtherClass)
	{
		P_GET_OBJECT(AWeaponsBaseClass,Z_Param_currentWeapon);
		P_GET_OBJECT(AWeaponsBaseClass,Z_Param_newWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipWeaponOtherClass(Z_Param_currentWeapon,Z_Param_newWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSwitchWeapon)
	{
		P_GET_OBJECT(AWeaponsBaseClass,Z_Param_currentWeapon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newSelectedWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWeapon(Z_Param_currentWeapon,Z_Param_newSelectedWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCanPerformKnifeTakedown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPerformKnifeTakedown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCanAimWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAimWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execReloadWeapon)
	{
		P_GET_OBJECT(AWeaponsBaseClass,Z_Param_equippedWeapon);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_playerSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadWeapon(Z_Param_equippedWeapon,Z_Param_playerSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execTryFireWeapon)
	{
		P_GET_OBJECT(AWeaponsBaseClass,Z_Param_equippedWeapon);
		P_GET_UBOOL_REF(Z_Param_Out_isSuccessful);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_playerSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryFireWeapon(Z_Param_equippedWeapon,Z_Param_Out_isSuccessful,Z_Param_playerSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCallOnSelectingWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_weaponIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnSelectingWeapon(Z_Param_weaponIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCallOnKnifeInfoUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnKnifeInfoUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCallOnWeaponInfoUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnWeaponInfoUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCallOnHealthUpdated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxhealth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_absoluteMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnHealthUpdated(Z_Param_health,Z_Param_maxhealth,Z_Param_absoluteMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execMeleeKickGetHitActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actorsHitByKick);
		P_GET_STRUCT(FVector,Z_Param_MeleeKickStartOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_meleeKickRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_meleeKickDegrees);
		P_GET_PROPERTY(FIntProperty,Z_Param_raycastsCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_kickDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeleeKickGetHitActors(Z_Param_Out_actorsHitByKick,Z_Param_MeleeKickStartOffset,Z_Param_meleeKickRange,Z_Param_meleeKickDegrees,Z_Param_raycastsCount,Z_Param_kickDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCanPerformMeleeKick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPerformMeleeKick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execRecalculateCameraTransform)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RayCastSphereRadius);
		P_GET_TARRAY(AWeaponsBaseClass*,Z_Param_weaponsEquipped);
		P_GET_TARRAY(AWeaponsBaseClass*,Z_Param_knivesEquipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecalculateCameraTransform(Z_Param_RayCastSphereRadius,Z_Param_weaponsEquipped,Z_Param_knivesEquipped);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execAddCameraRotation)
	{
		P_GET_STRUCT(FVector2D,Z_Param_mouseDeltaMovement);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mouseSensitivity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCameraRotation(Z_Param_mouseDeltaMovement,Z_Param_mouseSensitivity,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCanDamagePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDamagePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCalculateWeaponRaycastOriginPos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateWeaponRaycastOriginPos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execGetCameraRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponsBaseClass**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execGetIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAiming();
		P_NATIVE_END;
	}
	struct PlayerCharacter_eventHealPlayer_Parms
	{
		float healthAdded;
	};
	static FName NAME_APlayerCharacter_HealPlayer = FName(TEXT("HealPlayer"));
	void APlayerCharacter::HealPlayer(float healthAdded)
	{
		PlayerCharacter_eventHealPlayer_Parms Parms;
		Parms.healthAdded=healthAdded;
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_HealPlayer),&Parms);
	}
	static FName NAME_APlayerCharacter_WeaponIdleAndAimingStateBP = FName(TEXT("WeaponIdleAndAimingStateBP"));
	void APlayerCharacter::WeaponIdleAndAimingStateBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_WeaponIdleAndAimingStateBP),NULL);
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCameraRotation", &APlayerCharacter::execAddCameraRotation },
			{ "CalculateWeaponRaycastOriginPos", &APlayerCharacter::execCalculateWeaponRaycastOriginPos },
			{ "CallOnHealthUpdated", &APlayerCharacter::execCallOnHealthUpdated },
			{ "CallOnKnifeInfoUpdated", &APlayerCharacter::execCallOnKnifeInfoUpdated },
			{ "CallOnSelectingWeapon", &APlayerCharacter::execCallOnSelectingWeapon },
			{ "CallOnWeaponInfoUpdated", &APlayerCharacter::execCallOnWeaponInfoUpdated },
			{ "CanAimWeapon", &APlayerCharacter::execCanAimWeapon },
			{ "CanDamagePlayer", &APlayerCharacter::execCanDamagePlayer },
			{ "CanPerformKnifeTakedown", &APlayerCharacter::execCanPerformKnifeTakedown },
			{ "CanPerformMeleeKick", &APlayerCharacter::execCanPerformMeleeKick },
			{ "EquipWeaponOtherClass", &APlayerCharacter::execEquipWeaponOtherClass },
			{ "GetCameraRotation", &APlayerCharacter::execGetCameraRotation },
			{ "GetCurrentWeapon", &APlayerCharacter::execGetCurrentWeapon },
			{ "GetIsAiming", &APlayerCharacter::execGetIsAiming },
			{ "GetIsPlayingMontageOnPlayer", &APlayerCharacter::execGetIsPlayingMontageOnPlayer },
			{ "GetLookTowardsCrosshairRotation", &APlayerCharacter::execGetLookTowardsCrosshairRotation },
			{ "MeleeKickGetHitActors", &APlayerCharacter::execMeleeKickGetHitActors },
			{ "OnItemAdded", &APlayerCharacter::execOnItemAdded },
			{ "OnItemInfoUpdated", &APlayerCharacter::execOnItemInfoUpdated },
			{ "OnMontageWithCallbacksEnded", &APlayerCharacter::execOnMontageWithCallbacksEnded },
			{ "OnMontageWithCallbacksStarted", &APlayerCharacter::execOnMontageWithCallbacksStarted },
			{ "PlayAnimationMontageOnPlayer", &APlayerCharacter::execPlayAnimationMontageOnPlayer },
			{ "PlayTakeDamageAnimations", &APlayerCharacter::execPlayTakeDamageAnimations },
			{ "RecalculateCameraTransform", &APlayerCharacter::execRecalculateCameraTransform },
			{ "ReloadWeapon", &APlayerCharacter::execReloadWeapon },
			{ "SwitchWeapon", &APlayerCharacter::execSwitchWeapon },
			{ "TryFireWeapon", &APlayerCharacter::execTryFireWeapon },
			{ "TryStartSwitchingWeapon", &APlayerCharacter::execTryStartSwitchingWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics
	{
		struct PlayerCharacter_eventAddCameraRotation_Parms
		{
			FVector2D mouseDeltaMovement;
			float mouseSensitivity;
			float deltaTime;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mouseDeltaMovement;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseSensitivity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::NewProp_mouseDeltaMovement = { "mouseDeltaMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventAddCameraRotation_Parms, mouseDeltaMovement), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::NewProp_mouseSensitivity = { "mouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventAddCameraRotation_Parms, mouseSensitivity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventAddCameraRotation_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::NewProp_mouseDeltaMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::NewProp_mouseSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterCamera" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "AddCameraRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::PlayerCharacter_eventAddCameraRotation_Parms), Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_AddCameraRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_AddCameraRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics
	{
		struct PlayerCharacter_eventCalculateWeaponRaycastOriginPos_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventCalculateWeaponRaycastOriginPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CalculateWeaponRaycastOriginPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::PlayerCharacter_eventCalculateWeaponRaycastOriginPos_Parms), Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics
	{
		struct PlayerCharacter_eventCallOnHealthUpdated_Parms
		{
			float health;
			float maxhealth;
			float absoluteMaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxhealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_absoluteMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventCallOnHealthUpdated_Parms, health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::NewProp_maxhealth = { "maxhealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventCallOnHealthUpdated_Parms, maxhealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::NewProp_absoluteMaxHealth = { "absoluteMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventCallOnHealthUpdated_Parms, absoluteMaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::NewProp_maxhealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::NewProp_absoluteMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Events" },
		{ "Comment", "//A function to call the delegate OnHealthUpdated because unreal doesn't allow static delegates to be directly used in blueprints\n" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "A function to call the delegate OnHealthUpdated because unreal doesn't allow static delegates to be directly used in blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CallOnHealthUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::PlayerCharacter_eventCallOnHealthUpdated_Parms), Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CallOnKnifeInfoUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CallOnKnifeInfoUpdated_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Events" },
		{ "Comment", "//A function to call the delegate OnKnifeInfoUpdated because unreal doesn't allow static delegates to be directly used in blueprints\n" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "A function to call the delegate OnKnifeInfoUpdated because unreal doesn't allow static delegates to be directly used in blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CallOnKnifeInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CallOnKnifeInfoUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CallOnKnifeInfoUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CallOnKnifeInfoUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CallOnKnifeInfoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CallOnKnifeInfoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics
	{
		struct PlayerCharacter_eventCallOnSelectingWeapon_Parms
		{
			int32 weaponIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_weaponIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::NewProp_weaponIndex = { "weaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventCallOnSelectingWeapon_Parms, weaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::NewProp_weaponIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Events" },
		{ "Comment", "//A function to call the delegate OnSelectingWeapon because unreal doesn't allow static delegates to be directly used in blueprints\n" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "A function to call the delegate OnSelectingWeapon because unreal doesn't allow static delegates to be directly used in blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CallOnSelectingWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::PlayerCharacter_eventCallOnSelectingWeapon_Parms), Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CallOnWeaponInfoUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CallOnWeaponInfoUpdated_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Events" },
		{ "Comment", "//A function to call the delegate OnWeaponInfoUpdated because unreal doesn't allow static delegates to be directly used in blueprints\n" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "A function to call the delegate OnWeaponInfoUpdated because unreal doesn't allow static delegates to be directly used in blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CallOnWeaponInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CallOnWeaponInfoUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CallOnWeaponInfoUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CallOnWeaponInfoUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CallOnWeaponInfoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CallOnWeaponInfoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics
	{
		struct PlayerCharacter_eventCanAimWeapon_Parms
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
	void Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacter_eventCanAimWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventCanAimWeapon_Parms), &Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CanAimWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::PlayerCharacter_eventCanAimWeapon_Parms), Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CanAimWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CanAimWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics
	{
		struct PlayerCharacter_eventCanDamagePlayer_Parms
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
	void Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacter_eventCanDamagePlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventCanDamagePlayer_Parms), &Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CanDamagePlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::PlayerCharacter_eventCanDamagePlayer_Parms), Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics
	{
		struct PlayerCharacter_eventCanPerformKnifeTakedown_Parms
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
	void Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacter_eventCanPerformKnifeTakedown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventCanPerformKnifeTakedown_Parms), &Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CanPerformKnifeTakedown", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::PlayerCharacter_eventCanPerformKnifeTakedown_Parms), Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics
	{
		struct PlayerCharacter_eventCanPerformMeleeKick_Parms
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
	void Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacter_eventCanPerformMeleeKick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventCanPerformMeleeKick_Parms), &Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CanPerformMeleeKick", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::PlayerCharacter_eventCanPerformMeleeKick_Parms), Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics
	{
		struct PlayerCharacter_eventEquipWeaponOtherClass_Parms
		{
			AWeaponsBaseClass* currentWeapon;
			AWeaponsBaseClass* newWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::NewProp_currentWeapon = { "currentWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventEquipWeaponOtherClass_Parms, currentWeapon), Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::NewProp_newWeapon = { "newWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventEquipWeaponOtherClass_Parms, newWeapon), Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::NewProp_currentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::NewProp_newWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EquipWeaponOtherClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::PlayerCharacter_eventEquipWeaponOtherClass_Parms), Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics
	{
		struct PlayerCharacter_eventGetCameraRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterParams" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetCameraRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::PlayerCharacter_eventGetCameraRotation_Parms), Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetCameraRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetCameraRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics
	{
		struct PlayerCharacter_eventGetCurrentWeapon_Parms
		{
			AWeaponsBaseClass* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterParams" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::PlayerCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics
	{
		struct PlayerCharacter_eventGetIsAiming_Parms
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
	void Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacter_eventGetIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventGetIsAiming_Parms), &Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterParams" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetIsAiming", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::PlayerCharacter_eventGetIsAiming_Parms), Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetIsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetIsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics
	{
		struct PlayerCharacter_eventGetIsPlayingMontageOnPlayer_Parms
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
	void Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacter_eventGetIsPlayingMontageOnPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventGetIsPlayingMontageOnPlayer_Parms), &Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetIsPlayingMontageOnPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::PlayerCharacter_eventGetIsPlayingMontageOnPlayer_Parms), Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics
	{
		struct PlayerCharacter_eventGetLookTowardsCrosshairRotation_Parms
		{
			float distFromCamToCursor;
			float deltaTime;
			float interpSpeed;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamToCursor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_interpSpeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::NewProp_distFromCamToCursor = { "distFromCamToCursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetLookTowardsCrosshairRotation_Parms, distFromCamToCursor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetLookTowardsCrosshairRotation_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::NewProp_interpSpeed = { "interpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetLookTowardsCrosshairRotation_Parms, interpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetLookTowardsCrosshairRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::NewProp_distFromCamToCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::NewProp_deltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::NewProp_interpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterInteracting" },
		{ "Comment", "//This function calculates a rotation used to make it look like the player is looking at whatever the crosshair is aiming at\n" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "This function calculates a rotation used to make it look like the player is looking at whatever the crosshair is aiming at" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetLookTowardsCrosshairRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::PlayerCharacter_eventGetLookTowardsCrosshairRotation_Parms), Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_healthAdded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::NewProp_healthAdded = { "healthAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventHealPlayer_Parms, healthAdded), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::NewProp_healthAdded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "HealPlayer", nullptr, nullptr, sizeof(PlayerCharacter_eventHealPlayer_Parms), Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_HealPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_HealPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics
	{
		struct PlayerCharacter_eventMeleeKickGetHitActors_Parms
		{
			TArray<AActor*> actorsHitByKick;
			FVector MeleeKickStartOffset;
			float meleeKickRange;
			float meleeKickDegrees;
			int32 raycastsCount;
			float kickDamage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actorsHitByKick_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_actorsHitByKick;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeKickStartOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_meleeKickRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_meleeKickDegrees;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_raycastsCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_kickDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_actorsHitByKick_Inner = { "actorsHitByKick", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_actorsHitByKick = { "actorsHitByKick", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMeleeKickGetHitActors_Parms, actorsHitByKick), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_MeleeKickStartOffset = { "MeleeKickStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMeleeKickGetHitActors_Parms, MeleeKickStartOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_meleeKickRange = { "meleeKickRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMeleeKickGetHitActors_Parms, meleeKickRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_meleeKickDegrees = { "meleeKickDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMeleeKickGetHitActors_Parms, meleeKickDegrees), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_raycastsCount = { "raycastsCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMeleeKickGetHitActors_Parms, raycastsCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_kickDamage = { "kickDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMeleeKickGetHitActors_Parms, kickDamage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_actorsHitByKick_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_actorsHitByKick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_MeleeKickStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_meleeKickRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_meleeKickDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_raycastsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::NewProp_kickDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "MeleeKickGetHitActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::PlayerCharacter_eventMeleeKickGetHitActors_Parms), Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics
	{
		struct PlayerCharacter_eventOnItemAdded_Parms
		{
			UNewInventoryItem* itemAdded;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemAdded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::NewProp_itemAdded = { "itemAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventOnItemAdded_Parms, itemAdded), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::NewProp_itemAdded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnItemAdded", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::PlayerCharacter_eventOnItemAdded_Parms), Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_OnItemAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnItemAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics
	{
		struct PlayerCharacter_eventOnItemInfoUpdated_Parms
		{
			UNewInventoryItem* itemInfoUpdated;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemInfoUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::NewProp_itemInfoUpdated = { "itemInfoUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventOnItemInfoUpdated_Parms, itemInfoUpdated), Z_Construct_UClass_UNewInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::NewProp_itemInfoUpdated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnItemInfoUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::PlayerCharacter_eventOnItemInfoUpdated_Parms), Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnMontageWithCallbacksEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnMontageWithCallbacksStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics
	{
		struct PlayerCharacter_eventPlayAnimationMontageOnPlayer_Parms
		{
			UAnimMontage* animationToPlay;
			float montagePlayLength;
			bool blockDamage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_animationToPlay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_montagePlayLength;
		static void NewProp_blockDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_blockDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::NewProp_animationToPlay = { "animationToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventPlayAnimationMontageOnPlayer_Parms, animationToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::NewProp_montagePlayLength = { "montagePlayLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventPlayAnimationMontageOnPlayer_Parms, montagePlayLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::NewProp_blockDamage_SetBit(void* Obj)
	{
		((PlayerCharacter_eventPlayAnimationMontageOnPlayer_Parms*)Obj)->blockDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::NewProp_blockDamage = { "blockDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventPlayAnimationMontageOnPlayer_Parms), &Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::NewProp_blockDamage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::NewProp_animationToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::NewProp_montagePlayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::NewProp_blockDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "Comment", "//Used to play animations on the player that temporarily blocks input\n" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "Used to play animations on the player that temporarily blocks input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "PlayAnimationMontageOnPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::PlayerCharacter_eventPlayAnimationMontageOnPlayer_Parms), Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics
	{
		struct PlayerCharacter_eventPlayTakeDamageAnimations_Parms
		{
			AActor* damageCauser;
			TArray<UAnimMontage*> animations;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_animations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_animations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventPlayTakeDamageAnimations_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::NewProp_animations_Inner = { "animations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::NewProp_animations = { "animations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventPlayTakeDamageAnimations_Parms, animations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::NewProp_damageCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::NewProp_animations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::NewProp_animations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "PlayTakeDamageAnimations", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::PlayerCharacter_eventPlayTakeDamageAnimations_Parms), Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics
	{
		struct PlayerCharacter_eventRecalculateCameraTransform_Parms
		{
			float RayCastSphereRadius;
			TArray<AWeaponsBaseClass*> weaponsEquipped;
			TArray<AWeaponsBaseClass*> knivesEquipped;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayCastSphereRadius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponsEquipped_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_weaponsEquipped;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_knivesEquipped_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_knivesEquipped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_RayCastSphereRadius = { "RayCastSphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventRecalculateCameraTransform_Parms, RayCastSphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_weaponsEquipped_Inner = { "weaponsEquipped", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_weaponsEquipped = { "weaponsEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventRecalculateCameraTransform_Parms, weaponsEquipped), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_knivesEquipped_Inner = { "knivesEquipped", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_knivesEquipped = { "knivesEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventRecalculateCameraTransform_Parms, knivesEquipped), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_RayCastSphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_weaponsEquipped_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_weaponsEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_knivesEquipped_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::NewProp_knivesEquipped,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "RecalculateCameraTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::PlayerCharacter_eventRecalculateCameraTransform_Parms), Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics
	{
		struct PlayerCharacter_eventReloadWeapon_Parms
		{
			AWeaponsBaseClass* equippedWeapon;
			USkeletalMeshComponent* playerSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_equippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::NewProp_equippedWeapon = { "equippedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventReloadWeapon_Parms, equippedWeapon), Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::NewProp_playerSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::NewProp_playerSkeletalMesh = { "playerSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventReloadWeapon_Parms, playerSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::NewProp_playerSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::NewProp_playerSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::NewProp_equippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::NewProp_playerSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ReloadWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::PlayerCharacter_eventReloadWeapon_Parms), Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_ReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics
	{
		struct PlayerCharacter_eventSwitchWeapon_Parms
		{
			AWeaponsBaseClass* currentWeapon;
			float newSelectedWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentWeapon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newSelectedWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::NewProp_currentWeapon = { "currentWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventSwitchWeapon_Parms, currentWeapon), Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::NewProp_newSelectedWeapon = { "newSelectedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventSwitchWeapon_Parms, newSelectedWeapon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::NewProp_currentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::NewProp_newSelectedWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "Comment", "/*\n\x09* Immediately sets the player weapon to a weapon specified in the list of weapons equipped by the player\n\x09* @param\x09\x09""currentWeapon\x09\x09\x09The weapon currently carried by the player\n\x09* @param\x09\x09newSelectedWeapon\x09\x09The index of whatever weapon you want to equip as featured in the array currentlyEquippedWeapons \n\x09* @return\x09\x09true if actor is in front of the second actor in the params list  */" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "* Immediately sets the player weapon to a weapon specified in the list of weapons equipped by the player\n* @param                currentWeapon                   The weapon currently carried by the player\n* @param                newSelectedWeapon               The index of whatever weapon you want to equip as featured in the array currentlyEquippedWeapons\n* @return               true if actor is in front of the second actor in the params list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SwitchWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::PlayerCharacter_eventSwitchWeapon_Parms), Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_SwitchWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SwitchWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics
	{
		struct PlayerCharacter_eventTryFireWeapon_Parms
		{
			AWeaponsBaseClass* equippedWeapon;
			bool isSuccessful;
			USkeletalMeshComponent* playerSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_equippedWeapon;
		static void NewProp_isSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSuccessful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_equippedWeapon = { "equippedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventTryFireWeapon_Parms, equippedWeapon), Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_isSuccessful_SetBit(void* Obj)
	{
		((PlayerCharacter_eventTryFireWeapon_Parms*)Obj)->isSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_isSuccessful = { "isSuccessful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventTryFireWeapon_Parms), &Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_isSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_playerSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_playerSkeletalMesh = { "playerSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacter_eventTryFireWeapon_Parms, playerSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_playerSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_playerSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_equippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_isSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::NewProp_playerSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "TryFireWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::PlayerCharacter_eventTryFireWeapon_Parms), Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_TryFireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_TryFireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_TryStartSwitchingWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_TryStartSwitchingWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterInteracting" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_TryStartSwitchingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "TryStartSwitchingWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_TryStartSwitchingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_TryStartSwitchingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_TryStartSwitchingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_TryStartSwitchingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_WeaponIdleAndAimingStateBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_WeaponIdleAndAimingStateBP_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterInteracting" },
		{ "Comment", "//This event is called every frame when a weapon is deplayed, that is the player is not switching between weapons\n" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
		{ "ToolTip", "This event is called every frame when a weapon is deplayed, that is the player is not switching between weapons" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_WeaponIdleAndAimingStateBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "WeaponIdleAndAimingStateBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_WeaponIdleAndAimingStateBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_WeaponIdleAndAimingStateBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_WeaponIdleAndAimingStateBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_WeaponIdleAndAimingStateBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomMotionWarper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomMotionWarper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponWheelUIInfoUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponWheelUIInfoUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStabClosestEnemy_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStabClosestEnemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentlyEquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentlyEquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentlyEquippedKnife_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentlyEquippedKnife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraDistanceBehindPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraDistanceBehindPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraOffsetToSide_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraOffsetToSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraUpwardsOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraUpwardsOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerLookAtPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerLookAtPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAiming_MetaData[];
#endif
		static void NewProp_isAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactablesSweepRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_interactablesSweepRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_takedownableEnemiesSweepRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_takedownableEnemiesSweepRange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selectedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_selectedWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_equippedWeapons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_equippedWeapons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_equippedWeapons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_equippedKnives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_equippedKnives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_equippedKnives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reloadTimeElapsed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadTimeElapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_closestInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestTakedownableEnemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_closestTakedownableEnemy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_closestEnemyTakedownType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_closestEnemyTakedownType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_closestEnemyTakedownType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deployTimeElapsed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deployTimeElapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_holsterTimeElapsed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_holsterTimeElapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reloadTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_reloadTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animationMontageTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_animationMontageTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_AddCameraRotation, "AddCameraRotation" }, // 3800757464
		{ &Z_Construct_UFunction_APlayerCharacter_CalculateWeaponRaycastOriginPos, "CalculateWeaponRaycastOriginPos" }, // 4035932533
		{ &Z_Construct_UFunction_APlayerCharacter_CallOnHealthUpdated, "CallOnHealthUpdated" }, // 2474059587
		{ &Z_Construct_UFunction_APlayerCharacter_CallOnKnifeInfoUpdated, "CallOnKnifeInfoUpdated" }, // 704279793
		{ &Z_Construct_UFunction_APlayerCharacter_CallOnSelectingWeapon, "CallOnSelectingWeapon" }, // 1100630979
		{ &Z_Construct_UFunction_APlayerCharacter_CallOnWeaponInfoUpdated, "CallOnWeaponInfoUpdated" }, // 328513282
		{ &Z_Construct_UFunction_APlayerCharacter_CanAimWeapon, "CanAimWeapon" }, // 3093461591
		{ &Z_Construct_UFunction_APlayerCharacter_CanDamagePlayer, "CanDamagePlayer" }, // 3809349766
		{ &Z_Construct_UFunction_APlayerCharacter_CanPerformKnifeTakedown, "CanPerformKnifeTakedown" }, // 451539476
		{ &Z_Construct_UFunction_APlayerCharacter_CanPerformMeleeKick, "CanPerformMeleeKick" }, // 3751022538
		{ &Z_Construct_UFunction_APlayerCharacter_EquipWeaponOtherClass, "EquipWeaponOtherClass" }, // 2470254206
		{ &Z_Construct_UFunction_APlayerCharacter_GetCameraRotation, "GetCameraRotation" }, // 2947179723
		{ &Z_Construct_UFunction_APlayerCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 2555932947
		{ &Z_Construct_UFunction_APlayerCharacter_GetIsAiming, "GetIsAiming" }, // 3961659724
		{ &Z_Construct_UFunction_APlayerCharacter_GetIsPlayingMontageOnPlayer, "GetIsPlayingMontageOnPlayer" }, // 1797017122
		{ &Z_Construct_UFunction_APlayerCharacter_GetLookTowardsCrosshairRotation, "GetLookTowardsCrosshairRotation" }, // 9420267
		{ &Z_Construct_UFunction_APlayerCharacter_HealPlayer, "HealPlayer" }, // 3663385108
		{ &Z_Construct_UFunction_APlayerCharacter_MeleeKickGetHitActors, "MeleeKickGetHitActors" }, // 4204068126
		{ &Z_Construct_UFunction_APlayerCharacter_OnItemAdded, "OnItemAdded" }, // 232780285
		{ &Z_Construct_UFunction_APlayerCharacter_OnItemInfoUpdated, "OnItemInfoUpdated" }, // 2439653838
		{ &Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksEnded, "OnMontageWithCallbacksEnded" }, // 246414965
		{ &Z_Construct_UFunction_APlayerCharacter_OnMontageWithCallbacksStarted, "OnMontageWithCallbacksStarted" }, // 1899145214
		{ &Z_Construct_UFunction_APlayerCharacter_PlayAnimationMontageOnPlayer, "PlayAnimationMontageOnPlayer" }, // 2526003819
		{ &Z_Construct_UFunction_APlayerCharacter_PlayTakeDamageAnimations, "PlayTakeDamageAnimations" }, // 628934435
		{ &Z_Construct_UFunction_APlayerCharacter_RecalculateCameraTransform, "RecalculateCameraTransform" }, // 4066342729
		{ &Z_Construct_UFunction_APlayerCharacter_ReloadWeapon, "ReloadWeapon" }, // 2820043313
		{ &Z_Construct_UFunction_APlayerCharacter_SwitchWeapon, "SwitchWeapon" }, // 4140493537
		{ &Z_Construct_UFunction_APlayerCharacter_TryFireWeapon, "TryFireWeapon" }, // 1145799085
		{ &Z_Construct_UFunction_APlayerCharacter_TryStartSwitchingWeapon, "TryStartSwitchingWeapon" }, // 3845705218
		{ &Z_Construct_UFunction_APlayerCharacter_WeaponIdleAndAimingStateBP, "WeaponIdleAndAimingStateBP" }, // 1054680029
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player Logic/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MotionWarper_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MotionWarper = { "MotionWarper", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, MotionWarper), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MotionWarper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MotionWarper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CustomMotionWarper_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CustomMotionWarper = { "CustomMotionWarper", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, CustomMotionWarper), Z_Construct_UClass_UCustomMotionWarpComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CustomMotionWarper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CustomMotionWarper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnWeaponWheelUIInfoUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnWeaponWheelUIInfoUpdate = { "OnWeaponWheelUIInfoUpdate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, OnWeaponWheelUIInfoUpdate), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnWeaponWheelInfoUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnWeaponWheelUIInfoUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnWeaponWheelUIInfoUpdate_MetaData)) }; // 546395112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnStabClosestEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnStabClosestEnemy = { "OnStabClosestEnemy", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, OnStabClosestEnemy), Z_Construct_UDelegateFunction_ResidentEvilTesting_OnStabClosestEnemy__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnStabClosestEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnStabClosestEnemy_MetaData)) }; // 2537167706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedWeapon = { "currentlyEquippedWeapon", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, currentlyEquippedWeapon), Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedKnife_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacterWeaponLogic" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedKnife = { "currentlyEquippedKnife", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, currentlyEquippedKnife), Z_Construct_UClass_AKnifeBaseClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedKnife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedKnife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraDistanceBehindPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraDistanceBehindPlayer = { "cameraDistanceBehindPlayer", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, cameraDistanceBehindPlayer), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraDistanceBehindPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraDistanceBehindPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraOffsetToSide_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraOffsetToSide = { "cameraOffsetToSide", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, cameraOffsetToSide), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraOffsetToSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraOffsetToSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraUpwardsOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraUpwardsOffset = { "cameraUpwardsOffset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, cameraUpwardsOffset), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraUpwardsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraUpwardsOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerLookAtPos_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerLookAtPos = { "playerLookAtPos", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, playerLookAtPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerLookAtPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerLookAtPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isAiming_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->isAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isAiming = { "isAiming", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_interactablesSweepRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_interactablesSweepRange = { "interactablesSweepRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, interactablesSweepRange), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_interactablesSweepRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_interactablesSweepRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_takedownableEnemiesSweepRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_takedownableEnemiesSweepRange = { "takedownableEnemiesSweepRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, takedownableEnemiesSweepRange), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_takedownableEnemiesSweepRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_takedownableEnemiesSweepRange_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponState = { "WeaponState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, WeaponState), Z_Construct_UEnum_ResidentEvilTesting_EWeaponState, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponState_MetaData)) }; // 1983975811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedWeapon = { "selectedWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, selectedWeapon), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedWeapon_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedWeapons_Inner = { "equippedWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedWeapons_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedWeapons = { "equippedWeapons", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, equippedWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedWeapons_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedKnives_Inner = { "equippedKnives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedKnives_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedKnives = { "equippedKnives", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, equippedKnives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedKnives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedKnives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimeElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimeElapsed = { "reloadTimeElapsed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, reloadTimeElapsed), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimeElapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestInteractable = { "closestInteractable", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, closestInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestTakedownableEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestTakedownableEnemy = { "closestTakedownableEnemy", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, closestTakedownableEnemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestTakedownableEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestTakedownableEnemy_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestEnemyTakedownType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestEnemyTakedownType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestEnemyTakedownType = { "closestEnemyTakedownType", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, closestEnemyTakedownType), Z_Construct_UEnum_ResidentEvilTesting_ETakedownType, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestEnemyTakedownType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestEnemyTakedownType_MetaData)) }; // 451650815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraRotation = { "cameraRotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, cameraRotation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_deployTimeElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_deployTimeElapsed = { "deployTimeElapsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, deployTimeElapsed), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_deployTimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_deployTimeElapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holsterTimeElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holsterTimeElapsed = { "holsterTimeElapsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, holsterTimeElapsed), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holsterTimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holsterTimeElapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimerHandle = { "reloadTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, reloadTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_animationMontageTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player Logic/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_animationMontageTimerHandle = { "animationMontageTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, animationMontageTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_animationMontageTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_animationMontageTimerHandle_MetaData)) }; // 4017759265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MotionWarper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CustomMotionWarper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnWeaponWheelUIInfoUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnStabClosestEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentlyEquippedKnife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraDistanceBehindPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraOffsetToSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraUpwardsOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerLookAtPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_interactablesSweepRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_takedownableEnemiesSweepRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedWeapons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedWeapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedKnives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_equippedKnives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimeElapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestTakedownableEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestEnemyTakedownType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_closestEnemyTakedownType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_deployTimeElapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holsterTimeElapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_reloadTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_animationMontageTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<APlayerCharacter>()
	{
		return APlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
	APlayerCharacter::~APlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 1300192551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_3756657992(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
