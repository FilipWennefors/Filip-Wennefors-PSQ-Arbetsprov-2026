// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Pickup And Item Logic/Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UInteractable();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	struct Interactable_eventCanInteractWithObject_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Interactable_eventCanInteractWithObject_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IInteractable::CanInteractWithObject()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInteractWithObject instead.");
		Interactable_eventCanInteractWithObject_Parms Parms;
		return Parms.ReturnValue;
	}
	void IInteractable::Interact()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void IInteractable::OnConfirmedClosestInteractable()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnConfirmedClosestInteractable instead.");
	}
	void IInteractable::StartInteraction()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartInteraction instead.");
	}
	void IInteractable::StopInteraction()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopInteraction instead.");
	}
	void UInteractable::StaticRegisterNativesUInteractable()
	{
	}
	struct Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactable_eventCanInteractWithObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Interactable_eventCanInteractWithObject_Parms), &Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "IInteractable" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "CanInteractWithObject", nullptr, nullptr, sizeof(Interactable_eventCanInteractWithObject_Parms), Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_CanInteractWithObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_CanInteractWithObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractable_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_Interact_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "IInteractable" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractable_OnConfirmedClosestInteractable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_OnConfirmedClosestInteractable_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "IInteractable" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_OnConfirmedClosestInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "OnConfirmedClosestInteractable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_OnConfirmedClosestInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_OnConfirmedClosestInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_OnConfirmedClosestInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_OnConfirmedClosestInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractable_StartInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_StartInteraction_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "IInteractable" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_StartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "StartInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_StartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_StartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_StartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_StartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractable_StopInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_StopInteraction_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "IInteractable" },
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_StopInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "StopInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_StopInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_StopInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_StopInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_StopInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractable);
	UClass* Z_Construct_UClass_UInteractable_NoRegister()
	{
		return UInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_CanInteractWithObject, "CanInteractWithObject" }, // 4170674414
		{ &Z_Construct_UFunction_UInteractable_Interact, "Interact" }, // 2320062740
		{ &Z_Construct_UFunction_UInteractable_OnConfirmedClosestInteractable, "OnConfirmedClosestInteractable" }, // 513802568
		{ &Z_Construct_UFunction_UInteractable_StartInteraction, "StartInteraction" }, // 2889445121
		{ &Z_Construct_UFunction_UInteractable_StopInteraction, "StopInteraction" }, // 2756674943
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pickup And Item Logic/Interactable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
		&UInteractable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractable()
	{
		if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UInteractable>()
	{
		return UInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
	UInteractable::~UInteractable() {}
	static FName NAME_UInteractable_CanInteractWithObject = FName(TEXT("CanInteractWithObject"));
	bool IInteractable::Execute_CanInteractWithObject(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		Interactable_eventCanInteractWithObject_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractable_CanInteractWithObject);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UInteractable_Interact = FName(TEXT("Interact"));
	void IInteractable::Execute_Interact(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractable_Interact);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UInteractable_OnConfirmedClosestInteractable = FName(TEXT("OnConfirmedClosestInteractable"));
	void IInteractable::Execute_OnConfirmedClosestInteractable(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractable_OnConfirmedClosestInteractable);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UInteractable_StartInteraction = FName(TEXT("StartInteraction"));
	void IInteractable::Execute_StartInteraction(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractable_StartInteraction);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UInteractable_StopInteraction = FName(TEXT("StopInteraction"));
	void IInteractable::Execute_StopInteraction(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractable_StopInteraction);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_Interactable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_Interactable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 3974832281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_Interactable_h_1663127034(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Pickup_And_Item_Logic_Interactable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
