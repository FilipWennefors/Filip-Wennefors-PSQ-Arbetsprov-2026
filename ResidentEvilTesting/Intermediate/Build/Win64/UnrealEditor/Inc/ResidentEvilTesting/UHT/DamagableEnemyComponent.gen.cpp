// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResidentEvilTesting/Public/Enemy Logic/DamagableEnemyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamagableEnemyComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UDamagableEnemyComponent();
	RESIDENTEVILTESTING_API UClass* Z_Construct_UClass_UDamagableEnemyComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResidentEvilTesting();
// End Cross Module References
	DEFINE_FUNCTION(UDamagableEnemyComponent::execCalculateStaggerChance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateStaggerChance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamagableEnemyComponent::execCheckIfHitComponentIsWeakPoint)
	{
		P_GET_OBJECT(UShapeComponent,Z_Param_HitComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIfHitComponentIsWeakPoint(Z_Param_HitComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamagableEnemyComponent::execOnOwnerTakePointDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_FHitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerTakePointDamage_Implementation(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_FHitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	struct DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		AController* InstigatedBy;
		FVector HitLocation;
		UPrimitiveComponent* FHitComponent;
		FName BoneName;
		FVector ShotFromDirection;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
	static FName NAME_UDamagableEnemyComponent_OnOwnerTakePointDamage = FName(TEXT("OnOwnerTakePointDamage"));
	void UDamagableEnemyComponent::OnOwnerTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser)
	{
		DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms Parms;
		Parms.DamagedActor=DamagedActor;
		Parms.Damage=Damage;
		Parms.InstigatedBy=InstigatedBy;
		Parms.HitLocation=HitLocation;
		Parms.FHitComponent=FHitComponent;
		Parms.BoneName=BoneName;
		Parms.ShotFromDirection=ShotFromDirection;
		Parms.DamageType=DamageType;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_UDamagableEnemyComponent_OnOwnerTakePointDamage),&Parms);
	}
	void UDamagableEnemyComponent::StaticRegisterNativesUDamagableEnemyComponent()
	{
		UClass* Class = UDamagableEnemyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateStaggerChance", &UDamagableEnemyComponent::execCalculateStaggerChance },
			{ "CheckIfHitComponentIsWeakPoint", &UDamagableEnemyComponent::execCheckIfHitComponentIsWeakPoint },
			{ "OnOwnerTakePointDamage", &UDamagableEnemyComponent::execOnOwnerTakePointDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics
	{
		struct DamagableEnemyComponent_eventCalculateStaggerChance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventCalculateStaggerChance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamagableEnemyComponent, nullptr, "CalculateStaggerChance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::DamagableEnemyComponent_eventCalculateStaggerChance_Parms), Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics
	{
		struct DamagableEnemyComponent_eventCheckIfHitComponentIsWeakPoint_Parms
		{
			UShapeComponent* HitComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventCheckIfHitComponentIsWeakPoint_Parms, HitComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_HitComponent_MetaData)) };
	void Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DamagableEnemyComponent_eventCheckIfHitComponentIsWeakPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DamagableEnemyComponent_eventCheckIfHitComponentIsWeakPoint_Parms), &Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamagableEnemyComponent, nullptr, "CheckIfHitComponentIsWeakPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::DamagableEnemyComponent_eventCheckIfHitComponentIsWeakPoint_Parms), Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FHitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FHitComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_FHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_FHitComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_FHitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_ShotFromDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamagableEnemyComponent, nullptr, "OnOwnerTakePointDamage", nullptr, nullptr, sizeof(DamagableEnemyComponent_eventOnOwnerTakePointDamage_Parms), Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamagableEnemyComponent);
	UClass* Z_Construct_UClass_UDamagableEnemyComponent_NoRegister()
	{
		return UDamagableEnemyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDamagableEnemyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_weakPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weakPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_weakPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staggerAnimations_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_staggerAnimations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staggerAnimations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_staggerAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staggerRecoverTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staggerRecoverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minDamageToStagger_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minDamageToStagger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minStaggerChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minStaggerChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weakSpotDamageGuaranteedStaggerThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weakSpotDamageGuaranteedStaggerThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageRecoverTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageRecoverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staggerRecoverTimeElapsed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staggerRecoverTimeElapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageRecoverTimeElapsed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageRecoverTimeElapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageDealt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageDealt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageDealtForStaggerPurposes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageDealtForStaggerPurposes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isStaggered_MetaData[];
#endif
		static void NewProp_isStaggered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isStaggered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamagableEnemyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvilTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamagableEnemyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamagableEnemyComponent_CalculateStaggerChance, "CalculateStaggerChance" }, // 3339568169
		{ &Z_Construct_UFunction_UDamagableEnemyComponent_CheckIfHitComponentIsWeakPoint, "CheckIfHitComponentIsWeakPoint" }, // 278710597
		{ &Z_Construct_UFunction_UDamagableEnemyComponent_OnOwnerTakePointDamage, "OnOwnerTakePointDamage" }, // 4063864454
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Enemy Logic/DamagableEnemyComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakPoints_Inner = { "weakPoints", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakPoints_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Weak Points" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakPoints = { "weakPoints", nullptr, (EPropertyFlags)0x002008800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, weakPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakPoints_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations_ValueProp = { "staggerAnimations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations_Key_KeyProp = { "staggerAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Stagger Animations" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations = { "staggerAnimations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, staggerAnimations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Stagger Recover Time" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTime = { "staggerRecoverTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, staggerRecoverTime), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minDamageToStagger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Min Damage To Stagger" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minDamageToStagger = { "minDamageToStagger", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, minDamageToStagger), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minDamageToStagger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minDamageToStagger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minStaggerChance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Min Stagger Chance" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minStaggerChance = { "minStaggerChance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, minStaggerChance), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minStaggerChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minStaggerChance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakSpotDamageGuaranteedStaggerThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Weak Spot Damage Guaranteed Stagger Threshold" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakSpotDamageGuaranteedStaggerThreshold = { "weakSpotDamageGuaranteedStaggerThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, weakSpotDamageGuaranteedStaggerThreshold), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakSpotDamageGuaranteedStaggerThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakSpotDamageGuaranteedStaggerThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Damage Recover Time" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTime = { "damageRecoverTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, damageRecoverTime), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTimeElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Stagger Recover Time Elapsed" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTimeElapsed = { "staggerRecoverTimeElapsed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, staggerRecoverTimeElapsed), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTimeElapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTimeElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Damage Recover Time Elapsed" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTimeElapsed = { "damageRecoverTimeElapsed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, damageRecoverTimeElapsed), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTimeElapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealt_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Damage Dealt" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealt = { "damageDealt", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, damageDealt), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealtForStaggerPurposes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealtForStaggerPurposes = { "damageDealtForStaggerPurposes", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamagableEnemyComponent, damageDealtForStaggerPurposes), METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealtForStaggerPurposes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealtForStaggerPurposes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_isStaggered_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "DisplayName", "Is staggered" },
		{ "ModuleRelativePath", "Public/Enemy Logic/DamagableEnemyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_isStaggered_SetBit(void* Obj)
	{
		((UDamagableEnemyComponent*)Obj)->isStaggered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_isStaggered = { "isStaggered", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDamagableEnemyComponent), &Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_isStaggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_isStaggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_isStaggered_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamagableEnemyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minDamageToStagger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_minStaggerChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_weakSpotDamageGuaranteedStaggerThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_staggerRecoverTimeElapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageRecoverTimeElapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_damageDealtForStaggerPurposes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamagableEnemyComponent_Statics::NewProp_isStaggered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamagableEnemyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamagableEnemyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamagableEnemyComponent_Statics::ClassParams = {
		&UDamagableEnemyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDamagableEnemyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDamagableEnemyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamagableEnemyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamagableEnemyComponent()
	{
		if (!Z_Registration_Info_UClass_UDamagableEnemyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamagableEnemyComponent.OuterSingleton, Z_Construct_UClass_UDamagableEnemyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamagableEnemyComponent.OuterSingleton;
	}
	template<> RESIDENTEVILTESTING_API UClass* StaticClass<UDamagableEnemyComponent>()
	{
		return UDamagableEnemyComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamagableEnemyComponent);
	UDamagableEnemyComponent::~UDamagableEnemyComponent() {}
	struct Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamagableEnemyComponent, UDamagableEnemyComponent::StaticClass, TEXT("UDamagableEnemyComponent"), &Z_Registration_Info_UClass_UDamagableEnemyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamagableEnemyComponent), 954850272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_3169236025(TEXT("/Script/ResidentEvilTesting"),
		Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_DamagableEnemyComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
