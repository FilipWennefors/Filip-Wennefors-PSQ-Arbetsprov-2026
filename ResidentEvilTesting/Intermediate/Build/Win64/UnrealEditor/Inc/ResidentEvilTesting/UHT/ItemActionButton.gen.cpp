// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/UI Logic/ItemActionButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemActionButton() {}
// Cross Module References
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItemActionButton();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UItemActionButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UItemActionButton::execCallOnUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemActionButton::execCallOnHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemActionButton::execCallOnReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemActionButton::execCallOnPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemActionButton::execCallOnClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnClicked();
		P_NATIVE_END;
	}
	void UItemActionButton::StaticRegisterNativesUItemActionButton()
	{
		UClass* Class = UItemActionButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallOnClicked", &UItemActionButton::execCallOnClicked },
			{ "CallOnHovered", &UItemActionButton::execCallOnHovered },
			{ "CallOnPressed", &UItemActionButton::execCallOnPressed },
			{ "CallOnReleased", &UItemActionButton::execCallOnReleased },
			{ "CallOnUnhovered", &UItemActionButton::execCallOnUnhovered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemActionButton_CallOnClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemActionButton_CallOnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemActionButton_CallOnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemActionButton, nullptr, "CallOnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemActionButton_CallOnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionButton_CallOnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemActionButton_CallOnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemActionButton_CallOnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemActionButton_CallOnHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemActionButton_CallOnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemActionButton_CallOnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemActionButton, nullptr, "CallOnHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemActionButton_CallOnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionButton_CallOnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemActionButton_CallOnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemActionButton_CallOnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemActionButton_CallOnPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemActionButton_CallOnPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemActionButton_CallOnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemActionButton, nullptr, "CallOnPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemActionButton_CallOnPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionButton_CallOnPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemActionButton_CallOnPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemActionButton_CallOnPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemActionButton_CallOnReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemActionButton_CallOnReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemActionButton_CallOnReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemActionButton, nullptr, "CallOnReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemActionButton_CallOnReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionButton_CallOnReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemActionButton_CallOnReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemActionButton_CallOnReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemActionButton_CallOnUnhovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemActionButton_CallOnUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemActionButton_CallOnUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemActionButton, nullptr, "CallOnUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemActionButton_CallOnUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemActionButton_CallOnUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemActionButton_CallOnUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemActionButton_CallOnUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemActionButton);
	UClass* Z_Construct_UClass_UItemActionButton_NoRegister()
	{
		return UItemActionButton::StaticClass();
	}
	struct Z_Construct_UClass_UItemActionButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHovered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnhovered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemActionButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemActionButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemActionButton_CallOnClicked, "CallOnClicked" }, // 1757678123
		{ &Z_Construct_UFunction_UItemActionButton_CallOnHovered, "CallOnHovered" }, // 2203385600
		{ &Z_Construct_UFunction_UItemActionButton_CallOnPressed, "CallOnPressed" }, // 1838628695
		{ &Z_Construct_UFunction_UItemActionButton_CallOnReleased, "CallOnReleased" }, // 709876020
		{ &Z_Construct_UFunction_UItemActionButton_CallOnUnhovered, "CallOnUnhovered" }, // 941474587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI Logic/ItemActionButton.h" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnClicked_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemActionButton, OnClicked), Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnClicked_MetaData)) }; // 2358670591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnPressed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnPressed = { "OnPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemActionButton, OnPressed), Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnPressed_MetaData)) }; // 454992865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnReleased_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnReleased = { "OnReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemActionButton, OnReleased), Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnReleased_MetaData)) }; // 2577069928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnHovered_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnHovered = { "OnHovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemActionButton, OnHovered), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnHovered_MetaData)) }; // 2150841518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnUnhovered_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnUnhovered = { "OnUnhovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemActionButton, OnUnhovered), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnUnhovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnUnhovered_MetaData)) }; // 2150841518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActionButton_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemActionButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI Logic/ItemActionButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemActionButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemActionButton, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemActionButton_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionButton_Statics::NewProp_Button_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemActionButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemActionButton_Statics::NewProp_OnUnhovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemActionButton_Statics::NewProp_Button,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemActionButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemActionButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemActionButton_Statics::ClassParams = {
		&UItemActionButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemActionButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemActionButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemActionButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemActionButton()
	{
		if (!Z_Registration_Info_UClass_UItemActionButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemActionButton.OuterSingleton, Z_Construct_UClass_UItemActionButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemActionButton.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UItemActionButton>()
	{
		return UItemActionButton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemActionButton);
	UItemActionButton::~UItemActionButton() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemActionButton, UItemActionButton::StaticClass, TEXT("UItemActionButton"), &Z_Registration_Info_UClass_UItemActionButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemActionButton), 3303969040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionButton_h_3827041214(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_UI_Logic_ItemActionButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
