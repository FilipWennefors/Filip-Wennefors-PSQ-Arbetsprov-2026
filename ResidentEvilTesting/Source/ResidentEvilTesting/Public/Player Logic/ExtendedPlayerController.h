// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ExtendedPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API AExtendedPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "ExtendedPlayerController")
	class UPlayerInventorySubsystem* GetPlayerInventorySubsystem();
};
