// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvadersV2/Barracks.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarracks() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ABarracks();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ABarracks_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceInvadersV2();
// End Cross Module References
	DEFINE_FUNCTION(ABarracks::execTakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_damageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_damageAmount);
		P_NATIVE_END;
	}
	struct Barracks_eventUpdateHealthBar_Parms
	{
		int32 newHealth;
	};
	static FName NAME_ABarracks_UpdateHealthBar = FName(TEXT("UpdateHealthBar"));
	void ABarracks::UpdateHealthBar(int32 newHealth)
	{
		Barracks_eventUpdateHealthBar_Parms Parms;
		Parms.newHealth=newHealth;
		ProcessEvent(FindFunctionChecked(NAME_ABarracks_UpdateHealthBar),&Parms);
	}
	void ABarracks::StaticRegisterNativesABarracks()
	{
		UClass* Class = ABarracks::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &ABarracks::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABarracks_TakeDamage_Statics
	{
		struct Barracks_eventTakeDamage_Parms
		{
			int32 damageAmount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_damageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABarracks_TakeDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Barracks_eventTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABarracks_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarracks_TakeDamage_Statics::NewProp_damageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarracks_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Barracks" },
		{ "ModuleRelativePath", "Barracks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarracks_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarracks, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABarracks_TakeDamage_Statics::Barracks_eventTakeDamage_Parms), Z_Construct_UFunction_ABarracks_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarracks_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarracks_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarracks_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarracks_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarracks_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::NewProp_newHealth = { "newHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Barracks_eventUpdateHealthBar_Parms, newHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::NewProp_newHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Barracks" },
		{ "ModuleRelativePath", "Barracks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarracks, nullptr, "UpdateHealthBar", nullptr, nullptr, sizeof(Barracks_eventUpdateHealthBar_Parms), Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarracks_UpdateHealthBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarracks_UpdateHealthBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABarracks);
	UClass* Z_Construct_UClass_ABarracks_NoRegister()
	{
		return ABarracks::StaticClass();
	}
	struct Z_Construct_UClass_ABarracks_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_barracksPlaceholderMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_barracksPlaceholderMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_barracksGeometryCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_barracksGeometryCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarracks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvadersV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABarracks_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABarracks_TakeDamage, "TakeDamage" }, // 2988572918
		{ &Z_Construct_UFunction_ABarracks_UpdateHealthBar, "UpdateHealthBar" }, // 1826638685
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarracks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barracks.h" },
		{ "ModuleRelativePath", "Barracks.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarracks_Statics::NewProp_barracksPlaceholderMesh_MetaData[] = {
		{ "Category", "Barracks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Barracks.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarracks_Statics::NewProp_barracksPlaceholderMesh = { "barracksPlaceholderMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarracks, barracksPlaceholderMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarracks_Statics::NewProp_barracksPlaceholderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarracks_Statics::NewProp_barracksPlaceholderMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarracks_Statics::NewProp_barracksGeometryCollection_MetaData[] = {
		{ "Category", "Barracks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Barracks.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarracks_Statics::NewProp_barracksGeometryCollection = { "barracksGeometryCollection", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarracks, barracksGeometryCollection), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarracks_Statics::NewProp_barracksGeometryCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarracks_Statics::NewProp_barracksGeometryCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarracks_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Barracks.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABarracks_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarracks, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ABarracks_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarracks_Statics::NewProp_MaxHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarracks_Statics::NewProp_barracksPlaceholderMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarracks_Statics::NewProp_barracksGeometryCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarracks_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarracks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarracks>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABarracks_Statics::ClassParams = {
		&ABarracks::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABarracks_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarracks_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarracks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarracks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarracks()
	{
		if (!Z_Registration_Info_UClass_ABarracks.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABarracks.OuterSingleton, Z_Construct_UClass_ABarracks_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABarracks.OuterSingleton;
	}
	template<> SPACEINVADERSV2_API UClass* StaticClass<ABarracks>()
	{
		return ABarracks::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarracks);
	ABarracks::~ABarracks() {}
	struct Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_Barracks_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_Barracks_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABarracks, ABarracks::StaticClass, TEXT("ABarracks"), &Z_Registration_Info_UClass_ABarracks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABarracks), 407214567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_Barracks_h_3342363594(TEXT("/Script/SpaceInvadersV2"),
		Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_Barracks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_Barracks_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
