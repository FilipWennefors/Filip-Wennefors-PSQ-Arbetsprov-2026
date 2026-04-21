// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WeaponWheel.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UWeaponWheel : public UUserWidget
{
	GENERATED_BODY()

#pragma region Functions
public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnNewWeaponSelected(int weaponIndex);
	
	virtual void NativeOnInitialized() override;
#pragma endregion
};
