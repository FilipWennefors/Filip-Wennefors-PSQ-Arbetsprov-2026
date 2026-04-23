// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Weapon Logic/Firearm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirearm() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AFirearm();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AFirearm_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_APrimaryWeaponsBaseClass();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UAmmoItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(AFirearm::execReloadWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirearm::execGetRequiredAmmoType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UAmmoItem> *)Z_Param__Result=P_THIS->GetRequiredAmmoType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirearm::execGetReloadSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReloadSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirearm::execGetMaxClipSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxClipSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirearm::execGetClipSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetClipSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirearm::execStartReloadingWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartReloadingWeapon();
		P_NATIVE_END;
	}
	void AFirearm::StaticRegisterNativesAFirearm()
	{
		UClass* Class = AFirearm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClipSize", &AFirearm::execGetClipSize },
			{ "GetMaxClipSize", &AFirearm::execGetMaxClipSize },
			{ "GetReloadSpeed", &AFirearm::execGetReloadSpeed },
			{ "GetRequiredAmmoType", &AFirearm::execGetRequiredAmmoType },
			{ "ReloadWeapon", &AFirearm::execReloadWeapon },
			{ "StartReloadingWeapon", &AFirearm::execStartReloadingWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirearm_GetClipSize_Statics
	{
		struct Firearm_eventGetClipSize_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFirearm_GetClipSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Firearm_eventGetClipSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirearm_GetClipSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirearm_GetClipSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirearm_GetClipSize_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirearm_GetClipSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirearm, nullptr, "GetClipSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirearm_GetClipSize_Statics::Firearm_eventGetClipSize_Parms), Z_Construct_UFunction_AFirearm_GetClipSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_GetClipSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirearm_GetClipSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_GetClipSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirearm_GetClipSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirearm_GetClipSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics
	{
		struct Firearm_eventGetMaxClipSize_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Firearm_eventGetMaxClipSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirearm, nullptr, "GetMaxClipSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::Firearm_eventGetMaxClipSize_Parms), Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirearm_GetMaxClipSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirearm_GetMaxClipSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics
	{
		struct Firearm_eventGetReloadSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Firearm_eventGetReloadSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirearm, nullptr, "GetReloadSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::Firearm_eventGetReloadSpeed_Parms), Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirearm_GetReloadSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirearm_GetReloadSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics
	{
		struct Firearm_eventGetRequiredAmmoType_Parms
		{
			TSubclassOf<UAmmoItem>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Firearm_eventGetRequiredAmmoType_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UAmmoItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirearm, nullptr, "GetRequiredAmmoType", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::Firearm_eventGetRequiredAmmoType_Parms), Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirearm_GetRequiredAmmoType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirearm_GetRequiredAmmoType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirearm_ReloadWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirearm_ReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirearm_ReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirearm, nullptr, "ReloadWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirearm_ReloadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_ReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirearm_ReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirearm_ReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirearm_StartReloadingWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirearm_StartReloadingWeapon_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Firearm" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirearm_StartReloadingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirearm, nullptr, "StartReloadingWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirearm_StartReloadingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearm_StartReloadingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirearm_StartReloadingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirearm_StartReloadingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirearm);
	UClass* Z_Construct_UClass_AFirearm_NoRegister()
	{
		return AFirearm::StaticClass();
	}
	struct Z_Construct_UClass_AFirearm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxClipSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxClipSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reloadSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ammoPerReload_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ammoPerReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requiredAmmoType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_requiredAmmoType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shootWeaponSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_shootWeaponSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_emptyClipSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_emptyClipSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_firingCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_firingCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clipSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_clipSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirearm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APrimaryWeaponsBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirearm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirearm_GetClipSize, "GetClipSize" }, // 3701510963
		{ &Z_Construct_UFunction_AFirearm_GetMaxClipSize, "GetMaxClipSize" }, // 299272879
		{ &Z_Construct_UFunction_AFirearm_GetReloadSpeed, "GetReloadSpeed" }, // 2704498408
		{ &Z_Construct_UFunction_AFirearm_GetRequiredAmmoType, "GetRequiredAmmoType" }, // 296190
		{ &Z_Construct_UFunction_AFirearm_ReloadWeapon, "ReloadWeapon" }, // 3514791008
		{ &Z_Construct_UFunction_AFirearm_StartReloadingWeapon, "StartReloadingWeapon" }, // 1254755861
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon Logic/Firearm.h" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::NewProp_maxClipSize_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFirearm_Statics::NewProp_maxClipSize = { "maxClipSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirearm, maxClipSize), METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::NewProp_maxClipSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::NewProp_maxClipSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::NewProp_reloadSpeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirearm_Statics::NewProp_reloadSpeed = { "reloadSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirearm, reloadSpeed), METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::NewProp_reloadSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::NewProp_reloadSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::NewProp_ammoPerReload_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFirearm_Statics::NewProp_ammoPerReload = { "ammoPerReload", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirearm, ammoPerReload), METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::NewProp_ammoPerReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::NewProp_ammoPerReload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::NewProp_requiredAmmoType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFirearm_Statics::NewProp_requiredAmmoType = { "requiredAmmoType", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirearm, requiredAmmoType), Z_Construct_UClass_UClass, Z_Construct_UClass_UAmmoItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::NewProp_requiredAmmoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::NewProp_requiredAmmoType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::NewProp_shootWeaponSFX_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFirearm_Statics::NewProp_shootWeaponSFX = { "shootWeaponSFX", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirearm, shootWeaponSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::NewProp_shootWeaponSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::NewProp_shootWeaponSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::NewProp_emptyClipSFX_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFirearm_Statics::NewProp_emptyClipSFX = { "emptyClipSFX", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirearm, emptyClipSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::NewProp_emptyClipSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::NewProp_emptyClipSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::NewProp_firingCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirearm_Statics::NewProp_firingCooldown = { "firingCooldown", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirearm, firingCooldown), METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::NewProp_firingCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::NewProp_firingCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearm_Statics::NewProp_clipSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon Logic/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFirearm_Statics::NewProp_clipSize = { "clipSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirearm, clipSize), METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::NewProp_clipSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::NewProp_clipSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirearm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearm_Statics::NewProp_maxClipSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearm_Statics::NewProp_reloadSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearm_Statics::NewProp_ammoPerReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearm_Statics::NewProp_requiredAmmoType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearm_Statics::NewProp_shootWeaponSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearm_Statics::NewProp_emptyClipSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearm_Statics::NewProp_firingCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearm_Statics::NewProp_clipSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirearm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirearm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirearm_Statics::ClassParams = {
		&AFirearm::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirearm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirearm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirearm()
	{
		if (!Z_Registration_Info_UClass_AFirearm.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirearm.OuterSingleton, Z_Construct_UClass_AFirearm_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirearm.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AFirearm>()
	{
		return AFirearm::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirearm);
	AFirearm::~AFirearm() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirearm, AFirearm::StaticClass, TEXT("AFirearm"), &Z_Registration_Info_UClass_AFirearm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirearm), 2958136194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_2464557080(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
