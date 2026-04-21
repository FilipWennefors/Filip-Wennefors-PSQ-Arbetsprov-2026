// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvadersV2/SpaceInvadersCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceInvadersCameraManager() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ASpaceInvadersCameraManager();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_ASpaceInvadersCameraManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceInvadersV2();
// End Cross Module References
	DEFINE_FUNCTION(ASpaceInvadersCameraManager::execGetRightCornerPosInWorldSpace)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ASpaceInvadersCameraManager::GetRightCornerPosInWorldSpace(Z_Param_distFromCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpaceInvadersCameraManager::execGetLeftCornerPosInWorldSpace)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distFromCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ASpaceInvadersCameraManager::GetLeftCornerPosInWorldSpace(Z_Param_distFromCamera);
		P_NATIVE_END;
	}
	void ASpaceInvadersCameraManager::StaticRegisterNativesASpaceInvadersCameraManager()
	{
		UClass* Class = ASpaceInvadersCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeftCornerPosInWorldSpace", &ASpaceInvadersCameraManager::execGetLeftCornerPosInWorldSpace },
			{ "GetRightCornerPosInWorldSpace", &ASpaceInvadersCameraManager::execGetRightCornerPosInWorldSpace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics
	{
		struct SpaceInvadersCameraManager_eventGetLeftCornerPosInWorldSpace_Parms
		{
			float distFromCamera;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::NewProp_distFromCamera = { "distFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersCameraManager_eventGetLeftCornerPosInWorldSpace_Parms, distFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersCameraManager_eventGetLeftCornerPosInWorldSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::NewProp_distFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpaceInvadersCameraManager" },
		{ "ModuleRelativePath", "SpaceInvadersCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersCameraManager, nullptr, "GetLeftCornerPosInWorldSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::SpaceInvadersCameraManager_eventGetLeftCornerPosInWorldSpace_Parms), Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics
	{
		struct SpaceInvadersCameraManager_eventGetRightCornerPosInWorldSpace_Parms
		{
			float distFromCamera;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distFromCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::NewProp_distFromCamera = { "distFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersCameraManager_eventGetRightCornerPosInWorldSpace_Parms, distFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpaceInvadersCameraManager_eventGetRightCornerPosInWorldSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::NewProp_distFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpaceInvadersCameraManager" },
		{ "ModuleRelativePath", "SpaceInvadersCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceInvadersCameraManager, nullptr, "GetRightCornerPosInWorldSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::SpaceInvadersCameraManager_eventGetRightCornerPosInWorldSpace_Parms), Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceInvadersCameraManager);
	UClass* Z_Construct_UClass_ASpaceInvadersCameraManager_NoRegister()
	{
		return ASpaceInvadersCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceInvadersCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceInvadersCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvadersV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpaceInvadersCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpaceInvadersCameraManager_GetLeftCornerPosInWorldSpace, "GetLeftCornerPosInWorldSpace" }, // 1049442510
		{ &Z_Construct_UFunction_ASpaceInvadersCameraManager_GetRightCornerPosInWorldSpace, "GetRightCornerPosInWorldSpace" }, // 639626011
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceInvadersCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpaceInvadersCameraManager.h" },
		{ "ModuleRelativePath", "SpaceInvadersCameraManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceInvadersCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceInvadersCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceInvadersCameraManager_Statics::ClassParams = {
		&ASpaceInvadersCameraManager::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceInvadersCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceInvadersCameraManager()
	{
		if (!Z_Registration_Info_UClass_ASpaceInvadersCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceInvadersCameraManager.OuterSingleton, Z_Construct_UClass_ASpaceInvadersCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpaceInvadersCameraManager.OuterSingleton;
	}
	template<> SPACEINVADERSV2_API UClass* StaticClass<ASpaceInvadersCameraManager>()
	{
		return ASpaceInvadersCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceInvadersCameraManager);
	ASpaceInvadersCameraManager::~ASpaceInvadersCameraManager() {}
	struct Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceInvadersCameraManager, ASpaceInvadersCameraManager::StaticClass, TEXT("ASpaceInvadersCameraManager"), &Z_Registration_Info_UClass_ASpaceInvadersCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceInvadersCameraManager), 1510866389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersCameraManager_h_1720863890(TEXT("/Script/SpaceInvadersV2"),
		Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_SpaceInvadersCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
