// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CentralEnemyCommanderSubsystem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RESIDENTEVILTESTING_API UCentralEnemyCommanderSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

#pragma region Functions
public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnInitializedBP();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void NotifyDesireEngagePlayer(APawn* EnemyPawn);

	UFUNCTION(BlueprintImplementableEvent)
	void OnEnemyKilled(ABaseEnemy* EnemyKilled, bool bIsReallyDead);
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
#pragma endregion
};
