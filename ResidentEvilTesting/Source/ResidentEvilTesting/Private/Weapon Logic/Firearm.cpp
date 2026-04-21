// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon Logic/Firearm.h"

#include "Components/AudioComponent.h"
#include "Player Logic/Inventory Logic/PlayerInventorySubsystem.h"

void AFirearm::BeginPlay()
{
	Super::BeginPlay();
	clipSize = maxClipSize;
}

void AFirearm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (firingCooldown > 0)
		firingCooldown -= DeltaTime;
}


bool AFirearm::TryFireWeapon()
{
	if (firingCooldown <= 0 )
	{
		if (clipSize > 0)
		{
			firingCooldown = fireRate;
			weaponAudioSource->Sound = shootWeaponSFX;
			weaponAudioSource->Play();
			clipSize--;
			FireWeapon();
			return true;
		}
		else
		{
			weaponAudioSource->Sound = emptyClipSFX;
			weaponAudioSource->Play();
			return false;
		}
	}
	else return false;
}
void AFirearm::StartReloadingWeapon()
{
	FTimerManager& timerManager = GetWorld()->GetTimerManager();

	timerManager.SetTimer(reloadTimerHandle, this, &AFirearm::ReloadWeapon, reloadSpeed, false);
	
}
void AFirearm::FireWeapon()
{
}

void AFirearm::ReloadWeapon()
{
	UPlayerInventorySubsystem* inventory =GetWorld()->GetGameInstance()->GetSubsystem<UPlayerInventorySubsystem>();
	TSubclassOf<UNewInventoryItem> itemClass = GetRequiredAmmoType().Get();
	
	int amountOfAmmoAvailable = inventory->GetAmountOfItemType(itemClass);
	int desiredAmmoToReload = FMath::Clamp(ammoPerReload, 0, maxClipSize - clipSize);

	if (desiredAmmoToReload > amountOfAmmoAvailable)
	{
		clipSize = amountOfAmmoAvailable;
		inventory->TryRemoveItemsFromInventory(itemClass, amountOfAmmoAvailable);
	}
	else
	{
		clipSize = clipSize + desiredAmmoToReload;
		inventory->TryRemoveItemsFromInventory(itemClass, desiredAmmoToReload);
	}
}

void AFirearm::OnWeaponSwitchFrom()
{
	Super::OnWeaponSwitchFrom();

	FTimerManager& timerManager = GetWorld()->GetTimerManager();
	timerManager.ClearTimer(reloadTimerHandle);
}
