// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Engine/NavigationObjectBase.h"
#include "GameFramework/PlayerStart.h"
#include "EnemySpawner.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemySpawned, ABaseEnemy*, enemySpawned);
UCLASS(Blueprintable, BlueprintType)
class RESIDENTEVILTESTING_API AEnemySpawner : public APlayerStart
{
	GENERATED_BODY()
	
	
public:
	// Sets default values for this actor's properties
	AEnemySpawner(const FObjectInitializer& ObjectInitializer);
#pragma region Variables
public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Events")
	FOnEnemySpawned OnEnemySpawned;
	
#pragma endregion
	
#pragma region Functions
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable)
	bool IsEnemySpawnerOnScreen();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
#pragma endregion
};
