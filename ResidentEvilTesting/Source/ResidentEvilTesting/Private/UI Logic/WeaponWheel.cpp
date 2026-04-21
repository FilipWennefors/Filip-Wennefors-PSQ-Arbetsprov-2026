// Fill out your copyright notice in the Description page of Project Settings.


#include "UI Logic/WeaponWheel.h"

#include "Player Logic/PlayerCharacter.h"

void UWeaponWheel::NativeOnInitialized()
{
	APlayerCharacter::OnSelectingWeapon.AddUObject(this, &UWeaponWheel::OnNewWeaponSelected);
	Super::NativeOnInitialized();
}
