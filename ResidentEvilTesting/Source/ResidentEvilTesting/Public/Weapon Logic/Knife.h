// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AKnifeBaseClass.h"
#include "WeaponsBaseClass.h"
#include "Knife.generated.h"

/**
 * 
 */

UCLASS()
class AKnife : public AKnifeBaseClass
{
	GENERATED_BODY()

	
public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual bool TryFireWeapon() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
	TObjectPtr<USoundBase> shootWeaponSFX;

private:
	UPROPERTY()
	float AttackingCooldown = 0;
};
