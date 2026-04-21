// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Firearm.h"
#include "WeaponsBaseClass.h"
#include "Player Logic/PlayerCharacter.h"
#include "Shotgun.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API AShotgun : public AFirearm
{
	GENERATED_BODY()
#pragma region Variables
protected:
	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float baseDamage;
	
	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float fireRange;
	
	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	int horizontalPelletsCount;

	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	int verticalPelletsCount;

	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float horizontalSpreadRotation;

	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float verticalSpreadRotation;
	
#pragma endregion
	
#pragma region Functions
protected:
	virtual void FireWeapon() override;

#pragma endregion
};
