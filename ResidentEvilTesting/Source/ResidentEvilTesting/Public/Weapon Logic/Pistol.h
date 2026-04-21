// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Firearm.h"
#include "WeaponsBaseClass.h"
#include "Camera/CameraComponent.h"
#include "Pistol.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API APistol : public AFirearm
{
	GENERATED_BODY()



protected:
	virtual void FireWeapon() override;

	UFUNCTION(BlueprintCallable, Category="Weapons", meta=(AllowPrivateAccess = "true"))
	bool InitialRaycast(int damage, float range, UCameraComponent* PlayerCamera, FHitResult& Hit);
	

};
