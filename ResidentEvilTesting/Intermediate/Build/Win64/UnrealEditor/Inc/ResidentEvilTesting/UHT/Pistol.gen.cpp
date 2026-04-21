// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Weapon Logic/Pistol.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistol() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AFirearm();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_APistol();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_APistol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(APistol::execInitialRaycast)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_damage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_GET_OBJECT(UCameraComponent,Z_Param_PlayerCamera);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitialRaycast(Z_Param_damage,Z_Param_range,Z_Param_PlayerCamera,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void APistol::StaticRegisterNativesAPistol()
	{
		UClass* Class = APistol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitialRaycast", &APistol::execInitialRaycast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APistol_InitialRaycast_Statics
	{
		struct Pistol_eventInitialRaycast_Parms
		{
			int32 damage;
			float range;
			UCameraComponent* PlayerCamera;
			FHitResult Hit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pistol_eventInitialRaycast_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pistol_eventInitialRaycast_Parms, range), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pistol_eventInitialRaycast_Parms, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_PlayerCamera_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pistol_eventInitialRaycast_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pistol_eventInitialRaycast_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pistol_eventInitialRaycast_Parms), &Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APistol_InitialRaycast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APistol_InitialRaycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APistol_InitialRaycast_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Pistol.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APistol_InitialRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APistol, nullptr, "InitialRaycast", nullptr, nullptr, sizeof(Z_Construct_UFunction_APistol_InitialRaycast_Statics::Pistol_eventInitialRaycast_Parms), Z_Construct_UFunction_APistol_InitialRaycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APistol_InitialRaycast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APistol_InitialRaycast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APistol_InitialRaycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APistol_InitialRaycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APistol_InitialRaycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APistol);
	UClass* Z_Construct_UClass_APistol_NoRegister()
	{
		return APistol::StaticClass();
	}
	struct Z_Construct_UClass_APistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFirearm,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APistol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APistol_InitialRaycast, "InitialRaycast" }, // 1415573434
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon Logic/Pistol.h" },
		{ "ModuleRelativePath", "Public/Weapon Logic/Pistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APistol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APistol_Statics::ClassParams = {
		&APistol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APistol()
	{
		if (!Z_Registration_Info_UClass_APistol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APistol.OuterSingleton, Z_Construct_UClass_APistol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APistol.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<APistol>()
	{
		return APistol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APistol);
	APistol::~APistol() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APistol, APistol::StaticClass, TEXT("APistol"), &Z_Registration_Info_UClass_APistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APistol), 3806321525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_559008859(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
