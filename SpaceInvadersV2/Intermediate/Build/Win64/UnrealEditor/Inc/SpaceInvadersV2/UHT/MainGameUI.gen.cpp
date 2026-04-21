// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvadersV2/MainGameUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_UMainGameUI();
	SPACEINVADERSV2_API UClass* Z_Construct_UClass_UMainGameUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceInvadersV2();
// End Cross Module References
	DEFINE_FUNCTION(UMainGameUI::execToggleGamePaused)
	{
		P_GET_OBJECT(UWidgetSwitcher,Z_Param_WidgetSwitcher);
		P_GET_OBJECT(UUserWidget,Z_Param_userInterface);
		P_GET_OBJECT(UUserWidget,Z_Param_pauseMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleGamePaused(Z_Param_WidgetSwitcher,Z_Param_userInterface,Z_Param_pauseMenu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainGameUI::execRefreshPlayerHealthIcons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newPlayerHealth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distBetweenIcons);
		P_GET_OBJECT(UHorizontalBox,Z_Param_parentWidget);
		P_GET_OBJECT(UClass,Z_Param_healthIcon);
		P_GET_TARRAY(UUserWidget*,Z_Param_playerHealthWidgets);
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_newListOfHealthWidgets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshPlayerHealthIcons(Z_Param_newPlayerHealth,Z_Param_distBetweenIcons,Z_Param_parentWidget,Z_Param_healthIcon,Z_Param_playerHealthWidgets,Z_Param_Out_newListOfHealthWidgets);
		P_NATIVE_END;
	}
	struct MainGameUI_eventAddScore_Parms
	{
		float scoreToAdd;
	};
	struct MainGameUI_eventPlayerHealthUpdated_Parms
	{
		int32 newHealth;
	};
	static FName NAME_UMainGameUI_AddScore = FName(TEXT("AddScore"));
	void UMainGameUI::AddScore(float const& scoreToAdd)
	{
		MainGameUI_eventAddScore_Parms Parms;
		Parms.scoreToAdd=scoreToAdd;
		ProcessEvent(FindFunctionChecked(NAME_UMainGameUI_AddScore),&Parms);
	}
	static FName NAME_UMainGameUI_PlayerHealthUpdated = FName(TEXT("PlayerHealthUpdated"));
	void UMainGameUI::PlayerHealthUpdated(int32 const& newHealth)
	{
		MainGameUI_eventPlayerHealthUpdated_Parms Parms;
		Parms.newHealth=newHealth;
		ProcessEvent(FindFunctionChecked(NAME_UMainGameUI_PlayerHealthUpdated),&Parms);
	}
	void UMainGameUI::StaticRegisterNativesUMainGameUI()
	{
		UClass* Class = UMainGameUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshPlayerHealthIcons", &UMainGameUI::execRefreshPlayerHealthIcons },
			{ "ToggleGamePaused", &UMainGameUI::execToggleGamePaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainGameUI_AddScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scoreToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_AddScore_Statics::NewProp_scoreToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainGameUI_AddScore_Statics::NewProp_scoreToAdd = { "scoreToAdd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventAddScore_Parms, scoreToAdd), METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_AddScore_Statics::NewProp_scoreToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_AddScore_Statics::NewProp_scoreToAdd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainGameUI_AddScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_AddScore_Statics::NewProp_scoreToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MainGameUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainGameUI_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainGameUI, nullptr, "AddScore", nullptr, nullptr, sizeof(MainGameUI_eventAddScore_Parms), Z_Construct_UFunction_UMainGameUI_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_AddScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_AddScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainGameUI_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainGameUI_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newHealth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::NewProp_newHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::NewProp_newHealth = { "newHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventPlayerHealthUpdated_Parms, newHealth), METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::NewProp_newHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::NewProp_newHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::NewProp_newHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MainGameUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainGameUI, nullptr, "PlayerHealthUpdated", nullptr, nullptr, sizeof(MainGameUI_eventPlayerHealthUpdated_Parms), Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics
	{
		struct MainGameUI_eventRefreshPlayerHealthIcons_Parms
		{
			int32 newPlayerHealth;
			float distBetweenIcons;
			UHorizontalBox* parentWidget;
			TSubclassOf<UUserWidget>  healthIcon;
			TArray<UUserWidget*> playerHealthWidgets;
			TArray<UUserWidget*> newListOfHealthWidgets;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newPlayerHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distBetweenIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_parentWidget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_healthIcon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerHealthWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerHealthWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_playerHealthWidgets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newListOfHealthWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newListOfHealthWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newListOfHealthWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newPlayerHealth = { "newPlayerHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventRefreshPlayerHealthIcons_Parms, newPlayerHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_distBetweenIcons = { "distBetweenIcons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventRefreshPlayerHealthIcons_Parms, distBetweenIcons), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_parentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_parentWidget = { "parentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventRefreshPlayerHealthIcons_Parms, parentWidget), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_parentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_parentWidget_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_healthIcon = { "healthIcon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventRefreshPlayerHealthIcons_Parms, healthIcon), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_playerHealthWidgets_Inner = { "playerHealthWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_playerHealthWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_playerHealthWidgets = { "playerHealthWidgets", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventRefreshPlayerHealthIcons_Parms, playerHealthWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_playerHealthWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_playerHealthWidgets_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newListOfHealthWidgets_Inner = { "newListOfHealthWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newListOfHealthWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newListOfHealthWidgets = { "newListOfHealthWidgets", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventRefreshPlayerHealthIcons_Parms, newListOfHealthWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newListOfHealthWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newListOfHealthWidgets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newPlayerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_distBetweenIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_parentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_healthIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_playerHealthWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_playerHealthWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newListOfHealthWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::NewProp_newListOfHealthWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MainGameUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainGameUI, nullptr, "RefreshPlayerHealthIcons", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::MainGameUI_eventRefreshPlayerHealthIcons_Parms), Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics
	{
		struct MainGameUI_eventToggleGamePaused_Parms
		{
			UWidgetSwitcher* WidgetSwitcher;
			UUserWidget* userInterface;
			UUserWidget* pauseMenu;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSwitcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetSwitcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_userInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pauseMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pauseMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_WidgetSwitcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_WidgetSwitcher = { "WidgetSwitcher", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventToggleGamePaused_Parms, WidgetSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_WidgetSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_WidgetSwitcher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_userInterface_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_userInterface = { "userInterface", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventToggleGamePaused_Parms, userInterface), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_userInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_userInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_pauseMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_pauseMenu = { "pauseMenu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainGameUI_eventToggleGamePaused_Parms, pauseMenu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_pauseMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_pauseMenu_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_WidgetSwitcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_userInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::NewProp_pauseMenu,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MainGameUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainGameUI, nullptr, "ToggleGamePaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::MainGameUI_eventToggleGamePaused_Parms), Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainGameUI_ToggleGamePaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainGameUI_ToggleGamePaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainGameUI);
	UClass* Z_Construct_UClass_UMainGameUI_NoRegister()
	{
		return UMainGameUI::StaticClass();
	}
	struct Z_Construct_UClass_UMainGameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainGameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvadersV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainGameUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainGameUI_AddScore, "AddScore" }, // 1288295410
		{ &Z_Construct_UFunction_UMainGameUI_PlayerHealthUpdated, "PlayerHealthUpdated" }, // 3985918059
		{ &Z_Construct_UFunction_UMainGameUI_RefreshPlayerHealthIcons, "RefreshPlayerHealthIcons" }, // 704299010
		{ &Z_Construct_UFunction_UMainGameUI_ToggleGamePaused, "ToggleGamePaused" }, // 830342388
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainGameUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainGameUI.h" },
		{ "ModuleRelativePath", "MainGameUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainGameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainGameUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainGameUI_Statics::ClassParams = {
		&UMainGameUI::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainGameUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainGameUI()
	{
		if (!Z_Registration_Info_UClass_UMainGameUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainGameUI.OuterSingleton, Z_Construct_UClass_UMainGameUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainGameUI.OuterSingleton;
	}
	template<> SPACEINVADERSV2_API UClass* StaticClass<UMainGameUI>()
	{
		return UMainGameUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainGameUI);
	UMainGameUI::~UMainGameUI() {}
	struct Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainGameUI, UMainGameUI::StaticClass, TEXT("UMainGameUI"), &Z_Registration_Info_UClass_UMainGameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainGameUI), 2721172992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_314905888(TEXT("/Script/SpaceInvadersV2"),
		Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceInvadersV2_Source_SpaceInvadersV2_MainGameUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
