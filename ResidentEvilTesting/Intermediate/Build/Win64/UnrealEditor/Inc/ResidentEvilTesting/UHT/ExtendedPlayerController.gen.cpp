// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Player Logic/ExtendedPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtendedPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AExtendedPlayerController();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AExtendedPlayerController_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UPlayerInventorySubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(AExtendedPlayerController::execGetPlayerInventorySubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayerInventorySubsystem**)Z_Param__Result=P_THIS->GetPlayerInventorySubsystem();
		P_NATIVE_END;
	}
	void AExtendedPlayerController::StaticRegisterNativesAExtendedPlayerController()
	{
		UClass* Class = AExtendedPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerInventorySubsystem", &AExtendedPlayerController::execGetPlayerInventorySubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics
	{
		struct ExtendedPlayerController_eventGetPlayerInventorySubsystem_Parms
		{
			UPlayerInventorySubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExtendedPlayerController_eventGetPlayerInventorySubsystem_Parms, ReturnValue), Z_Construct_UClass_UPlayerInventorySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedPlayerController" },
		{ "ModuleRelativePath", "Public/Player Logic/ExtendedPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExtendedPlayerController, nullptr, "GetPlayerInventorySubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::ExtendedPlayerController_eventGetPlayerInventorySubsystem_Parms), Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExtendedPlayerController);
	UClass* Z_Construct_UClass_AExtendedPlayerController_NoRegister()
	{
		return AExtendedPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AExtendedPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExtendedPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExtendedPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExtendedPlayerController_GetPlayerInventorySubsystem, "GetPlayerInventorySubsystem" }, // 3045456398
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtendedPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player Logic/ExtendedPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player Logic/ExtendedPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExtendedPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExtendedPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExtendedPlayerController_Statics::ClassParams = {
		&AExtendedPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExtendedPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExtendedPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExtendedPlayerController()
	{
		if (!Z_Registration_Info_UClass_AExtendedPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExtendedPlayerController.OuterSingleton, Z_Construct_UClass_AExtendedPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExtendedPlayerController.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AExtendedPlayerController>()
	{
		return AExtendedPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExtendedPlayerController);
	AExtendedPlayerController::~AExtendedPlayerController() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ExtendedPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ExtendedPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExtendedPlayerController, AExtendedPlayerController::StaticClass, TEXT("AExtendedPlayerController"), &Z_Registration_Info_UClass_AExtendedPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExtendedPlayerController), 2460106934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ExtendedPlayerController_h_25280270(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ExtendedPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ExtendedPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
