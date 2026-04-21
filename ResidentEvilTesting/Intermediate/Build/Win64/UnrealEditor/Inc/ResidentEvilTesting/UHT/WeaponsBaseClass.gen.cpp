// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Weapon Logic/WeaponsBaseClass.h"
#include "ResidentEvilTesting/Public/Weapon Logic/FWeaponAnimations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponsBaseClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AWeaponsBaseClass();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AWeaponsBaseClass_NoRegister();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnimations();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponsBaseClass::execOnWeaponSwitchFrom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponSwitchFrom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponsBaseClass::execGetItemIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetItemIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponsBaseClass::execGetWeaponAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWeaponAnimations*)Z_Param__Result=P_THIS->GetWeaponAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponsBaseClass::execGetReloadAnimMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetReloadAnimMontage();
		P_NATIVE_END;
	}
	static FName NAME_AWeaponsBaseClass_OnFireWeapon = FName(TEXT("OnFireWeapon"));
	void AWeaponsBaseClass::OnFireWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponsBaseClass_OnFireWeapon),NULL);
	}
	void AWeaponsBaseClass::StaticRegisterNativesAWeaponsBaseClass()
	{
		UClass* Class = AWeaponsBaseClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemIcon", &AWeaponsBaseClass::execGetItemIcon },
			{ "GetReloadAnimMontage", &AWeaponsBaseClass::execGetReloadAnimMontage },
			{ "GetWeaponAnimations", &AWeaponsBaseClass::execGetWeaponAnimations },
			{ "OnWeaponSwitchFrom", &AWeaponsBaseClass::execOnWeaponSwitchFrom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics
	{
		struct WeaponsBaseClass_eventGetItemIcon_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponsBaseClass_eventGetItemIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponsBaseClass, nullptr, "GetItemIcon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::WeaponsBaseClass_eventGetItemIcon_Parms), Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics
	{
		struct WeaponsBaseClass_eventGetReloadAnimMontage_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponsBaseClass_eventGetReloadAnimMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponsBaseClass, nullptr, "GetReloadAnimMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::WeaponsBaseClass_eventGetReloadAnimMontage_Parms), Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics
	{
		struct WeaponsBaseClass_eventGetWeaponAnimations_Parms
		{
			FWeaponAnimations ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponsBaseClass_eventGetWeaponAnimations_Parms, ReturnValue), Z_Construct_UScriptStruct_FWeaponAnimations, METADATA_PARAMS(nullptr, 0) }; // 3180885542
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponsBaseClass, nullptr, "GetWeaponAnimations", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::WeaponsBaseClass_eventGetWeaponAnimations_Parms), Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponsBaseClass_OnFireWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponsBaseClass_OnFireWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponsBaseClass_OnFireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponsBaseClass, nullptr, "OnFireWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponsBaseClass_OnFireWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponsBaseClass_OnFireWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponsBaseClass_OnFireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponsBaseClass_OnFireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponsBaseClass_OnWeaponSwitchFrom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponsBaseClass_OnWeaponSwitchFrom_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponsBaseClass_OnWeaponSwitchFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponsBaseClass, nullptr, "OnWeaponSwitchFrom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponsBaseClass_OnWeaponSwitchFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponsBaseClass_OnWeaponSwitchFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponsBaseClass_OnWeaponSwitchFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponsBaseClass_OnWeaponSwitchFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponsBaseClass);
	UClass* Z_Construct_UClass_AWeaponsBaseClass_NoRegister()
	{
		return AWeaponsBaseClass::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponsBaseClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weaponAudioSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponAudioSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deploySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deploySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_holsterSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_holsterSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Animations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeployingAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeployingAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadingAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadingAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimingAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HolsteringAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HolsteringAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponsBaseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponsBaseClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponsBaseClass_GetItemIcon, "GetItemIcon" }, // 110557298
		{ &Z_Construct_UFunction_AWeaponsBaseClass_GetReloadAnimMontage, "GetReloadAnimMontage" }, // 1824481529
		{ &Z_Construct_UFunction_AWeaponsBaseClass_GetWeaponAnimations, "GetWeaponAnimations" }, // 2175701981
		{ &Z_Construct_UFunction_AWeaponsBaseClass_OnFireWeapon, "OnFireWeapon" }, // 1582635231
		{ &Z_Construct_UFunction_AWeaponsBaseClass_OnWeaponSwitchFrom, "OnWeaponSwitchFrom" }, // 4284463008
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon Logic/WeaponsBaseClass.h" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponMesh = { "weaponMesh", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, weaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponAudioSource_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponAudioSource = { "weaponAudioSource", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, weaponAudioSource), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponAudioSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponAudioSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, SocketName), METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_deploySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_deploySpeed = { "deploySpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, deploySpeed), METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_deploySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_deploySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_holsterSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_holsterSpeed = { "holsterSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, holsterSpeed), METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_holsterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_holsterSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_fireRate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_fireRate = { "fireRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, fireRate), METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_fireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_fireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_Animations_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, Animations), Z_Construct_UScriptStruct_FWeaponAnimations, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_Animations_MetaData)) }; // 3180885542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_itemIcon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_itemIcon = { "itemIcon", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, itemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_itemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_itemIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_DeployingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_DeployingAnimation = { "DeployingAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, DeployingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_DeployingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_DeployingAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, IdleAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_FiringAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_FiringAnimation = { "FiringAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, FiringAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_FiringAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_FiringAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_ReloadingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_ReloadingAnimation = { "ReloadingAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, ReloadingAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_ReloadingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_ReloadingAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_AimingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_AimingAnimation = { "AimingAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, AimingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_AimingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_AimingAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_HolsteringAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/WeaponsBaseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_HolsteringAnimation = { "HolsteringAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponsBaseClass, HolsteringAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_HolsteringAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_HolsteringAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponsBaseClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_weaponAudioSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_deploySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_holsterSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_fireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_Animations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_itemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_DeployingAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_IdleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_FiringAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_ReloadingAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_AimingAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponsBaseClass_Statics::NewProp_HolsteringAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponsBaseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponsBaseClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponsBaseClass_Statics::ClassParams = {
		&AWeaponsBaseClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponsBaseClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponsBaseClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponsBaseClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponsBaseClass()
	{
		if (!Z_Registration_Info_UClass_AWeaponsBaseClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponsBaseClass.OuterSingleton, Z_Construct_UClass_AWeaponsBaseClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponsBaseClass.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AWeaponsBaseClass>()
	{
		return AWeaponsBaseClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponsBaseClass);
	AWeaponsBaseClass::~AWeaponsBaseClass() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_WeaponsBaseClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_WeaponsBaseClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponsBaseClass, AWeaponsBaseClass::StaticClass, TEXT("AWeaponsBaseClass"), &Z_Registration_Info_UClass_AWeaponsBaseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponsBaseClass), 71095062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_WeaponsBaseClass_h_124405746(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_WeaponsBaseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_WeaponsBaseClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
