// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Pickup And Item Logic/InteractableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AInteractableObject();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(AInteractableObject::execInternalNotifyClosestInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InternalNotifyClosestInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractableObject::execStopInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopInteraction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractableObject::execStartInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInteraction_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AInteractableObject_StartInteraction = FName(TEXT("StartInteraction"));
	void AInteractableObject::StartInteraction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractableObject_StartInteraction),NULL);
	}
	static FName NAME_AInteractableObject_StopInteraction = FName(TEXT("StopInteraction"));
	void AInteractableObject::StopInteraction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractableObject_StopInteraction),NULL);
	}
	void AInteractableObject::StaticRegisterNativesAInteractableObject()
	{
		UClass* Class = AInteractableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InternalNotifyClosestInteractable", &AInteractableObject::execInternalNotifyClosestInteractable },
			{ "StartInteraction", &AInteractableObject::execStartInteraction },
			{ "StopInteraction", &AInteractableObject::execStopInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractableObject_InternalNotifyClosestInteractable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractableObject_InternalNotifyClosestInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "IInteractable" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/InteractableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableObject_InternalNotifyClosestInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableObject, nullptr, "InternalNotifyClosestInteractable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractableObject_InternalNotifyClosestInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_InternalNotifyClosestInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractableObject_InternalNotifyClosestInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableObject_InternalNotifyClosestInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractableObject_StartInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractableObject_StartInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/InteractableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableObject_StartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableObject, nullptr, "StartInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractableObject_StartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_StartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractableObject_StartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableObject_StartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractableObject_StopInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractableObject_StopInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/InteractableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableObject_StopInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableObject, nullptr, "StopInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractableObject_StopInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_StopInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractableObject_StopInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableObject_StopInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableObject);
	UClass* Z_Construct_UClass_AInteractableObject_NoRegister()
	{
		return AInteractableObject::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputIndicatorWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inputIndicatorWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_indicatorDeactivationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_indicatorDeactivationTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableObject_InternalNotifyClosestInteractable, "InternalNotifyClosestInteractable" }, // 4029459226
		{ &Z_Construct_UFunction_AInteractableObject_StartInteraction, "StartInteraction" }, // 603535684
		{ &Z_Construct_UFunction_AInteractableObject_StopInteraction, "StopInteraction" }, // 1045841877
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup And Item Logic/InteractableObject.h" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/InteractableObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableObject_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/InteractableObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableObject, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableObject_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableObject_Statics::NewProp_inputIndicatorWidget_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/InteractableObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_inputIndicatorWidget = { "inputIndicatorWidget", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableObject, inputIndicatorWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableObject_Statics::NewProp_inputIndicatorWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::NewProp_inputIndicatorWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableObject_Statics::NewProp_indicatorDeactivationTime_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/InteractableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_indicatorDeactivationTime = { "indicatorDeactivationTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableObject, indicatorDeactivationTime), METADATA_PARAMS(Z_Construct_UClass_AInteractableObject_Statics::NewProp_indicatorDeactivationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::NewProp_indicatorDeactivationTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_inputIndicatorWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_indicatorDeactivationTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableObject_Statics::ClassParams = {
		&AInteractableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractableObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableObject()
	{
		if (!Z_Registration_Info_UClass_AInteractableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableObject.OuterSingleton, Z_Construct_UClass_AInteractableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractableObject.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<AInteractableObject>()
	{
		return AInteractableObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableObject);
	AInteractableObject::~AInteractableObject() {}
	struct Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_InteractableObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_InteractableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableObject, AInteractableObject::StaticClass, TEXT("AInteractableObject"), &Z_Registration_Info_UClass_AInteractableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableObject), 459218211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_InteractableObject_h_1678137818(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_InteractableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_InteractableObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
