// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/CustomMotionWarpComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMotionWarpComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCustomMotionWarpComponent();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UCustomMotionWarpComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UCustomMotionWarpComponent::execSetMotionWarpTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_targetName);
		P_GET_STRUCT(FTransform,Z_Param_targetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotionWarpTarget(Z_Param_targetName,Z_Param_targetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMotionWarpComponent::execGetMotionWarpTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_targetName);
		P_GET_UBOOL_REF(Z_Param_Out_bHasSucceeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetMotionWarpTarget(Z_Param_targetName,Z_Param_Out_bHasSucceeded);
		P_NATIVE_END;
	}
	void UCustomMotionWarpComponent::StaticRegisterNativesUCustomMotionWarpComponent()
	{
		UClass* Class = UCustomMotionWarpComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMotionWarpTarget", &UCustomMotionWarpComponent::execGetMotionWarpTarget },
			{ "SetMotionWarpTarget", &UCustomMotionWarpComponent::execSetMotionWarpTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics
	{
		struct CustomMotionWarpComponent_eventGetMotionWarpTarget_Parms
		{
			FName targetName;
			bool bHasSucceeded;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_targetName;
		static void NewProp_bHasSucceeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSucceeded;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::NewProp_targetName = { "targetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomMotionWarpComponent_eventGetMotionWarpTarget_Parms, targetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::NewProp_bHasSucceeded_SetBit(void* Obj)
	{
		((CustomMotionWarpComponent_eventGetMotionWarpTarget_Parms*)Obj)->bHasSucceeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::NewProp_bHasSucceeded = { "bHasSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomMotionWarpComponent_eventGetMotionWarpTarget_Parms), &Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::NewProp_bHasSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomMotionWarpComponent_eventGetMotionWarpTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::NewProp_targetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::NewProp_bHasSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomMotionWarp" },
		{ "ModuleRelativePath", "Public/CustomMotionWarpComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMotionWarpComponent, nullptr, "GetMotionWarpTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::CustomMotionWarpComponent_eventGetMotionWarpTarget_Parms), Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics
	{
		struct CustomMotionWarpComponent_eventSetMotionWarpTarget_Parms
		{
			FName targetName;
			FTransform targetTransform;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_targetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::NewProp_targetName = { "targetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomMotionWarpComponent_eventSetMotionWarpTarget_Parms, targetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::NewProp_targetTransform = { "targetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomMotionWarpComponent_eventSetMotionWarpTarget_Parms, targetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::NewProp_targetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::NewProp_targetTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomMotionWarp" },
		{ "ModuleRelativePath", "Public/CustomMotionWarpComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMotionWarpComponent, nullptr, "SetMotionWarpTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::CustomMotionWarpComponent_eventSetMotionWarpTarget_Parms), Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomMotionWarpComponent);
	UClass* Z_Construct_UClass_UCustomMotionWarpComponent_NoRegister()
	{
		return UCustomMotionWarpComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomMotionWarpComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTargets_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WarpTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomMotionWarpComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomMotionWarpComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomMotionWarpComponent_GetMotionWarpTarget, "GetMotionWarpTarget" }, // 2158811796
		{ &Z_Construct_UFunction_UCustomMotionWarpComponent_SetMotionWarpTarget, "SetMotionWarpTarget" }, // 2001010045
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMotionWarpComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\x09This is a custom class to implement motion warping for animation montages. Since Motion warping is experimental/in beta for Unreal and not for shipping builds, and since\n *\x09the built-in motion warper lacks the ability to disable collisions/warp through colliders, this is the solution used\n */" },
		{ "IncludePath", "CustomMotionWarpComponent.h" },
		{ "ModuleRelativePath", "Public/CustomMotionWarpComponent.h" },
		{ "ToolTip", "This is a custom class to implement motion warping for animation montages. Since Motion warping is experimental/in beta for Unreal and not for shipping builds, and since\n*     the built-in motion warper lacks the ability to disable collisions/warp through colliders, this is the solution used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets_ValueProp = { "WarpTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets_Key_KeyProp = { "WarpTargets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomMotionWarpComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets = { "WarpTargets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomMotionWarpComponent, WarpTargets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomMotionWarpComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMotionWarpComponent_Statics::NewProp_WarpTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomMotionWarpComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMotionWarpComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomMotionWarpComponent_Statics::ClassParams = {
		&UCustomMotionWarpComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomMotionWarpComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMotionWarpComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomMotionWarpComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMotionWarpComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomMotionWarpComponent()
	{
		if (!Z_Registration_Info_UClass_UCustomMotionWarpComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomMotionWarpComponent.OuterSingleton, Z_Construct_UClass_UCustomMotionWarpComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomMotionWarpComponent.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UCustomMotionWarpComponent>()
	{
		return UCustomMotionWarpComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMotionWarpComponent);
	UCustomMotionWarpComponent::~UCustomMotionWarpComponent() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomMotionWarpComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomMotionWarpComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomMotionWarpComponent, UCustomMotionWarpComponent::StaticClass, TEXT("UCustomMotionWarpComponent"), &Z_Registration_Info_UClass_UCustomMotionWarpComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomMotionWarpComponent), 4143950146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomMotionWarpComponent_h_2473817013(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomMotionWarpComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_CustomMotionWarpComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
