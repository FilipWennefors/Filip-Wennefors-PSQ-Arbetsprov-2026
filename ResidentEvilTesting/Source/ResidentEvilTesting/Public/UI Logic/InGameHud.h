// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Weapon Logic/AKnifeBaseClass.h"
#include "Weapon Logic/WeaponsBaseClass.h"
#include "InGameHud.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UInGameHud : public UUserWidget
{
	GENERATED_BODY()
#pragma region Functions
protected:
	virtual void NativeOnInitialized() override;
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnPlayerHealthUpdated(float health, float maxhealth, float absoluteMaxHealth);
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnWeaponInfoUpdated(AWeaponsBaseClass* equippedWeapon, UTexture2D* iconTexture);
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnKnifeInfoUpdated(AKnifeBaseClass* equippedKnife, UTexture2D* iconTexture);
#pragma endregion
};
