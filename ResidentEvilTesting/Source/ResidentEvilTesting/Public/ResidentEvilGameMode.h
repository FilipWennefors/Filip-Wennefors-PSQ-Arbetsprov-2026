// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Checkpoint.h"
#include "GameFramework/GameModeBase.h"
#include "ResidentEvilGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API AResidentEvilGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SaveGame")
	void RestartFromCheckpoint();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Checkpoints")
    void SetLatestCheckpoint(ACheckpoint* latestCheckpoint);
	
	//Because ChoosePlayerStart is not blueprintcallable it has to be exposed like this
	UFUNCTION(BlueprintCallable, Category = "Checkpoints")
	AActor* REGameMode_ChoosePlayerStart(AController* playerController);
};
