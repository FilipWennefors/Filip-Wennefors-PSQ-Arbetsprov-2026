// Fill out your copyright notice in the Description page of Project Settings.


#include "UI Logic/InGameHud.h"

#include "Player Logic/PlayerCharacter.h"

void UInGameHud::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	APlayerCharacter::OnHealthUpdated.AddUObject(this, &UInGameHud::OnPlayerHealthUpdated);
	APlayerCharacter::OnWeaponInfoUpdate.AddUObject(this, &UInGameHud::OnWeaponInfoUpdated);
	APlayerCharacter::OnKnifeInfoUpdate.AddUObject(this, &UInGameHud::OnKnifeInfoUpdated);
}
