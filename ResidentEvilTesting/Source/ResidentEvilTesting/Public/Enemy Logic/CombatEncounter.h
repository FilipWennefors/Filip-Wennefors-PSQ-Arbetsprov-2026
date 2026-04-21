// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "EnemySpawner.h"
#include "GameFramework/Actor.h"
#include "CombatEncounter.generated.h"

UCLASS()
class RESIDENTEVILTESTING_API ACombatEncounter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACombatEncounter();
	
#pragma region Variables
public:
	UPROPERTY(BlueprintReadOnly)
	TArray<ABaseEnemy*> encounterEnemies;
	
	UPROPERTY(BlueprintReadWrite)
	int enemiesCount;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	TArray<AEnemySpawner*> enemySpawners;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FVector boxOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FVector boxSize;
#pragma endregion
	
	
	
#pragma region Functions
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnEnemyKilled(ABaseEnemy* enemyKilled, bool bIsReallyDead);
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void OnNewEnemySpawned(ABaseEnemy* enemySpawned);
	
	UFUNCTION()
	void InitialSetup();
	
	UFUNCTION()
	void OnEnemyKilledInternal(ABaseEnemy* enemyKilled, bool bIsReallyDead);
#pragma endregion

};
