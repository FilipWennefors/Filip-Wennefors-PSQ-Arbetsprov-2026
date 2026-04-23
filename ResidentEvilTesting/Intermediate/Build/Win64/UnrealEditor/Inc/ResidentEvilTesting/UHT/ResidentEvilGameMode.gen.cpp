// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/ResidentEvilGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResidentEvilGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AResidentEvilGameMode();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AResidentEvilGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(AResidentEvilGameMode::execREGameMode_ChoosePlayerStart)
	{
		P_GET_OBJECT(AController,Z_Param_playerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->REGameMode_ChoosePlayerStart(Z_Param_playerController);
		P_NATIVE_END;
	}
	struct ResidentEvilGameMode_eventSetLatestCheckpoint_Parms
	{
		ACheckpoint* latestCheckpoint;
	};
	static FName NAME_AResidentEvilGameMode_RestartFromCheckpoint = FName(TEXT("RestartFromCheckpoint"));
	void AResidentEvilGameMode::RestartFromCheckpoint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AResidentEvilGameMode_RestartFromCheckpoint),NULL);
	}
	static FName NAME_AResidentEvilGameMode_SetLatestCheckpoint = FName(TEXT("SetLatestCheckpoint"));
	void AResidentEvilGameMode::SetLatestCheckpoint(ACheckpoint* latestCheckpoint)
	{
		ResidentEvilGameMode_eventSetLatestCheckpoint_Parms Parms;
		Parms.latestCheckpoint=latestCheckpoint;
		ProcessEvent(FindFunctionChecked(NAME_AResidentEvilGameMode_SetLatestCheckpoint),&Parms);
	}
	void AResidentEvilGameMode::StaticRegisterNativesAResidentEvilGameMode()
	{
		UClass* Class = AResidentEvilGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "REGameMode_ChoosePlayerStart", &AResidentEvilGameMode::execREGameMode_ChoosePlayerStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics
	{
		struct ResidentEvilGameMode_eventREGameMode_ChoosePlayerStart_Parms
		{
			AController* playerController;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::NewProp_playerController = { "playerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResidentEvilGameMode_eventREGameMode_ChoosePlayerStart_Parms, playerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResidentEvilGameMode_eventREGameMode_ChoosePlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::NewProp_playerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Checkpoints" },
		{ "Comment", "//Because ChoosePlayerStart is not blueprintcallable it has to be exposed like this\n" },
		{ "ModuleRelativePath", "Public/ResidentEvilGameMode.h" },
		{ "ToolTip", "Because ChoosePlayerStart is not blueprintcallable it has to be exposed like this" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResidentEvilGameMode, nullptr, "REGameMode_ChoosePlayerStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::ResidentEvilGameMode_eventREGameMode_ChoosePlayerStart_Parms), Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResidentEvilGameMode_RestartFromCheckpoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResidentEvilGameMode_RestartFromCheckpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/ResidentEvilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResidentEvilGameMode_RestartFromCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResidentEvilGameMode, nullptr, "RestartFromCheckpoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AResidentEvilGameMode_RestartFromCheckpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AResidentEvilGameMode_RestartFromCheckpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AResidentEvilGameMode_RestartFromCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResidentEvilGameMode_RestartFromCheckpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_latestCheckpoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::NewProp_latestCheckpoint = { "latestCheckpoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResidentEvilGameMode_eventSetLatestCheckpoint_Parms, latestCheckpoint), Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::NewProp_latestCheckpoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Checkpoints" },
		{ "ModuleRelativePath", "Public/ResidentEvilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResidentEvilGameMode, nullptr, "SetLatestCheckpoint", nullptr, nullptr, sizeof(ResidentEvilGameMode_eventSetLatestCheckpoint_Parms), Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResidentEvilGameMode);
	UClass* Z_Construct_UClass_AResidentEvilGameMode_NoRegister()
	{
		return AResidentEvilGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AResidentEvilGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResidentEvilGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AResidentEvilGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AResidentEvilGameMode_REGameMode_ChoosePlayerStart, "REGameMode_ChoosePlayerStart" }, // 112765313
		{ &Z_Construct_UFunction_AResidentEvilGameMode_RestartFromCheckpoint, "RestartFromCheckpoint" }, // 3878642322
		{ &Z_Construct_UFunction_AResidentEvilGameMode_SetLatestCheckpoint, "SetLatestCheckpoint" }, // 2235750307
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResidentEvilGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ResidentEvilGameMode.h" },
		{ "ModuleRelativePath", "Public/ResidentEvilGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResidentEvilGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResidentEvilGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResidentEvilGameMode_Statics::ClassParams = {
		&AResidentEvilGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AResidentEvilGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AResidentEvilGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AResidentEvilGameMode()
	{
		if (!Z_Registration_Info_UClass_AResidentEvilGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResidentEvilGameMode.OuterSingleton, Z_Construct_UClass_AResidentEvilGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResidentEvilGameMode.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AResidentEvilGameMode>()
	{
		return AResidentEvilGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResidentEvilGameMode);
	AResidentEvilGameMode::~AResidentEvilGameMode() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_ResidentEvilGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_ResidentEvilGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResidentEvilGameMode, AResidentEvilGameMode::StaticClass, TEXT("AResidentEvilGameMode"), &Z_Registration_Info_UClass_AResidentEvilGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResidentEvilGameMode), 1082981797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_ResidentEvilGameMode_h_284750433(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_ResidentEvilGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_ResidentEvilGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
