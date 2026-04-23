// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/InGameHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameHud() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AKnifeBaseClass_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AWeaponsBaseClass_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UInGameHud();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UInGameHud_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct InGameHud_eventOnKnifeInfoUpdated_Parms
	{
		AKnifeBaseClass* equippedKnife;
		UTexture2D* iconTexture;
	};
	struct InGameHud_eventOnPlayerHealthUpdated_Parms
	{
		float health;
		float maxhealth;
		float absoluteMaxHealth;
	};
	struct InGameHud_eventOnWeaponInfoUpdated_Parms
	{
		AWeaponsBaseClass* equippedWeapon;
		UTexture2D* iconTexture;
	};
	static FName NAME_UInGameHud_OnKnifeInfoUpdated = FName(TEXT("OnKnifeInfoUpdated"));
	void UInGameHud::OnKnifeInfoUpdated(AKnifeBaseClass* equippedKnife, UTexture2D* iconTexture)
	{
		InGameHud_eventOnKnifeInfoUpdated_Parms Parms;
		Parms.equippedKnife=equippedKnife;
		Parms.iconTexture=iconTexture;
		ProcessEvent(FindFunctionChecked(NAME_UInGameHud_OnKnifeInfoUpdated),&Parms);
	}
	static FName NAME_UInGameHud_OnPlayerHealthUpdated = FName(TEXT("OnPlayerHealthUpdated"));
	void UInGameHud::OnPlayerHealthUpdated(float health, float maxhealth, float absoluteMaxHealth)
	{
		InGameHud_eventOnPlayerHealthUpdated_Parms Parms;
		Parms.health=health;
		Parms.maxhealth=maxhealth;
		Parms.absoluteMaxHealth=absoluteMaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_UInGameHud_OnPlayerHealthUpdated),&Parms);
	}
	static FName NAME_UInGameHud_OnWeaponInfoUpdated = FName(TEXT("OnWeaponInfoUpdated"));
	void UInGameHud::OnWeaponInfoUpdated(AWeaponsBaseClass* equippedWeapon, UTexture2D* iconTexture)
	{
		InGameHud_eventOnWeaponInfoUpdated_Parms Parms;
		Parms.equippedWeapon=equippedWeapon;
		Parms.iconTexture=iconTexture;
		ProcessEvent(FindFunctionChecked(NAME_UInGameHud_OnWeaponInfoUpdated),&Parms);
	}
	void UInGameHud::StaticRegisterNativesUInGameHud()
	{
	}
	struct Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_equippedKnife;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_iconTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::NewProp_equippedKnife = { "equippedKnife", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InGameHud_eventOnKnifeInfoUpdated_Parms, equippedKnife), Z_Construct_UClass_AKnifeBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::NewProp_iconTexture = { "iconTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InGameHud_eventOnKnifeInfoUpdated_Parms, iconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::NewProp_equippedKnife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::NewProp_iconTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/InGameHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHud, nullptr, "OnKnifeInfoUpdated", nullptr, nullptr, sizeof(InGameHud_eventOnKnifeInfoUpdated_Parms), Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxhealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_absoluteMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InGameHud_eventOnPlayerHealthUpdated_Parms, health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::NewProp_maxhealth = { "maxhealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InGameHud_eventOnPlayerHealthUpdated_Parms, maxhealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::NewProp_absoluteMaxHealth = { "absoluteMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InGameHud_eventOnPlayerHealthUpdated_Parms, absoluteMaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::NewProp_maxhealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::NewProp_absoluteMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/InGameHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHud, nullptr, "OnPlayerHealthUpdated", nullptr, nullptr, sizeof(InGameHud_eventOnPlayerHealthUpdated_Parms), Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_equippedWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_iconTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::NewProp_equippedWeapon = { "equippedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InGameHud_eventOnWeaponInfoUpdated_Parms, equippedWeapon), Z_Construct_UClass_AWeaponsBaseClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::NewProp_iconTexture = { "iconTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InGameHud_eventOnWeaponInfoUpdated_Parms, iconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::NewProp_equippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::NewProp_iconTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/InGameHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHud, nullptr, "OnWeaponInfoUpdated", nullptr, nullptr, sizeof(InGameHud_eventOnWeaponInfoUpdated_Parms), Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInGameHud);
	UClass* Z_Construct_UClass_UInGameHud_NoRegister()
	{
		return UInGameHud::StaticClass();
	}
	struct Z_Construct_UClass_UInGameHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameHud_OnKnifeInfoUpdated, "OnKnifeInfoUpdated" }, // 1243692894
		{ &Z_Construct_UFunction_UInGameHud_OnPlayerHealthUpdated, "OnPlayerHealthUpdated" }, // 2170956654
		{ &Z_Construct_UFunction_UInGameHud_OnWeaponInfoUpdated, "OnWeaponInfoUpdated" }, // 3642906774
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameHud_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/InGameHud.h" },
		{ "ModuleRelativePath", "Public/UI Logic/InGameHud.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInGameHud_Statics::ClassParams = {
		&UInGameHud::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameHud()
	{
		if (!Z_Registration_Info_UClass_UInGameHud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInGameHud.OuterSingleton, Z_Construct_UClass_UInGameHud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInGameHud.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UInGameHud>()
	{
		return UInGameHud::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameHud);
	UInGameHud::~UInGameHud() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_InGameHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_InGameHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInGameHud, UInGameHud::StaticClass, TEXT("UInGameHud"), &Z_Registration_Info_UClass_UInGameHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInGameHud), 282489193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_InGameHud_h_3214085731(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_InGameHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_InGameHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
