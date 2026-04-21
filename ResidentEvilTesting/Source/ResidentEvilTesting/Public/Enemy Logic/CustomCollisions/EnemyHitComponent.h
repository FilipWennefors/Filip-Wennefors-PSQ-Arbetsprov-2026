// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FEnemyCollisionCompParams.h"
#include "UObject/Interface.h"
#include "EnemyHitComponent.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, NotBlueprintable)
class UEnemyHitComponent : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */

class RESIDENTEVILTESTING_API IEnemyHitComponent
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//This function is used to get the custom params from an enemy hitbox component.
	 UFUNCTION(BlueprintCallable, Category = "Getters")
	 virtual void GetCollisionCompParams(FEnemyCollisionCompParams& CollisionCompParams);
};
