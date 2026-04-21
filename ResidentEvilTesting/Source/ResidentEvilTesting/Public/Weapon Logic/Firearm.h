// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "APrimaryWeaponsBaseClass.h"
#include "Pickup And Item Logic/AmmoItem.h"
#include "Firearm.generated.h"


/**
 * 
 */

UCLASS()
class RESIDENTEVILTESTING_API AFirearm : public APrimaryWeaponsBaseClass
{
	GENERATED_BODY()
#pragma region Variables
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	int maxClipSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	float reloadSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	int ammoPerReload;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	TSubclassOf<UAmmoItem> requiredAmmoType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
	TObjectPtr<USoundBase> shootWeaponSFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
	TObjectPtr<USoundBase> emptyClipSFX;




private:
	UPROPERTY()
	float firingCooldown = 0;

	UPROPERTY()
	int clipSize;

	FTimerHandle reloadTimerHandle;
#pragma endregion

#pragma region Functions
public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual bool TryFireWeapon() override;

	UFUNCTION(BlueprintCallable, Category = "Firearm", meta = (AllowPrivateAccess = "true"))
	void StartReloadingWeapon();

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Firearm", meta = (AllowPrivateAccess = "true"))
	int GetClipSize() { return clipSize; }

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Firearm", meta = (AllowPrivateAccess = "true"))
	int GetMaxClipSize() { return maxClipSize; }

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Firearm", meta = (AllowPrivateAccess = "true"))
	float GetReloadSpeed() { return reloadSpeed; }

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Firearm", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UAmmoItem> GetRequiredAmmoType() { return requiredAmmoType; }
	
	UFUNCTION(BlueprintCallable, Category = "Firearm", meta = (AllowPrivateAccess = "true"))
	void ReloadWeapon();


protected:
	virtual void FireWeapon();

	virtual void OnWeaponSwitchFrom() override;
#pragma endregion Functions
	
};
