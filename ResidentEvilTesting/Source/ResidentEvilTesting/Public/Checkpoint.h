// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "Checkpoint.generated.h"

UCLASS()
class RESIDENTEVILTESTING_API ACheckpoint : public APlayerStart
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
