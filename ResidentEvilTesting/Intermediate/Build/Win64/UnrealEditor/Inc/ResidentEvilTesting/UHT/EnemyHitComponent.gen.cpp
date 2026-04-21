// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CustomCollisions/EnemyHitComponent.h"
#include "ResidentEvilTesting/Public/Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHitComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UEnemyHitComponent();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UEnemyHitComponent_NoRegister();
	RESIDENTEVILTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyCollisionCompParams();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(IEnemyHitComponent::execGetCollisionCompParams)
	{
		P_GET_STRUCT_REF(FEnemyCollisionCompParams,Z_Param_Out_CollisionCompParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCollisionCompParams(Z_Param_Out_CollisionCompParams);
		P_NATIVE_END;
	}
	void UEnemyHitComponent::StaticRegisterNativesUEnemyHitComponent()
	{
		UClass* Class = UEnemyHitComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollisionCompParams", &IEnemyHitComponent::execGetCollisionCompParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics
	{
		struct EnemyHitComponent_eventGetCollisionCompParams_Parms
		{
			FEnemyCollisionCompParams CollisionCompParams;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionCompParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::NewProp_CollisionCompParams = { "CollisionCompParams", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnemyHitComponent_eventGetCollisionCompParams_Parms, CollisionCompParams), Z_Construct_UScriptStruct_FEnemyCollisionCompParams, METADATA_PARAMS(nullptr, 0) }; // 1807156687
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::NewProp_CollisionCompParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "Comment", "//This function is used to get the custom params from an enemy hitbox component.\n" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/EnemyHitComponent.h" },
		{ "ToolTip", "This function is used to get the custom params from an enemy hitbox component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyHitComponent, nullptr, "GetCollisionCompParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::EnemyHitComponent_eventGetCollisionCompParams_Parms), Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyHitComponent);
	UClass* Z_Construct_UClass_UEnemyHitComponent_NoRegister()
	{
		return UEnemyHitComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyHitComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyHitComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyHitComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyHitComponent_GetCollisionCompParams, "GetCollisionCompParams" }, // 3333477825
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyHitComponent_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Enemy Logic/CustomCollisions/EnemyHitComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyHitComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyHitComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyHitComponent_Statics::ClassParams = {
		&UEnemyHitComponent::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyHitComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHitComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyHitComponent()
	{
		if (!Z_Registration_Info_UClass_UEnemyHitComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyHitComponent.OuterSingleton, Z_Construct_UClass_UEnemyHitComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyHitComponent.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UEnemyHitComponent>()
	{
		return UEnemyHitComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyHitComponent);
	UEnemyHitComponent::~UEnemyHitComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyHitComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyHitComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyHitComponent, UEnemyHitComponent::StaticClass, TEXT("UEnemyHitComponent"), &Z_Registration_Info_UClass_UEnemyHitComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyHitComponent), 2297991691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyHitComponent_h_1852258645(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyHitComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CustomCollisions_EnemyHitComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
