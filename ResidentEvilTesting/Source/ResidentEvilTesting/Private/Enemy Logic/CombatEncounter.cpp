// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy Logic/CombatEncounter.h"

#include "Enemy Logic/EnemySpawner.h"

// Sets default values
ACombatEncounter::ACombatEncounter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
void ACombatEncounter::InitialSetup()
{
	//First perform a box trace to get all possible enemies
	FVector boxLocation = GetActorLocation() + boxOffset;
	FCollisionQueryParams params;
	TArray<FHitResult> hitActors;
	GetWorld()->SweepMultiByChannel(hitActors, boxLocation, boxLocation, FQuat(), ECC_Visibility, FCollisionShape::MakeBox(boxSize), params);
	
	//Loop through and add them to the enemies array + add to enemies count.
	for (FHitResult hitResult : hitActors)
	{
		ABaseEnemy* enemy = Cast<ABaseEnemy>(hitResult.GetActor());
		if (IsValid(enemy))
		{	
			if(!encounterEnemies.Contains(enemy))
			{
				enemiesCount++;
				encounterEnemies.Add(enemy);
			}	
		}
	}
	//Next subscribe all enemies to the on killed event
	for (ABaseEnemy* enemy : encounterEnemies)
	{
		enemy->OnThisEnemyKilled.AddUObject(this, &ACombatEncounter::OnEnemyKilledInternal);
	}

	for (AEnemySpawner* enemySpawner : enemySpawners)
	{
		enemySpawner->OnEnemySpawned.AddDynamic(this, &ACombatEncounter::OnNewEnemySpawned);
	}
}
// Called when the game starts or when spawned
void ACombatEncounter::BeginPlay()
{
	Super::BeginPlay();
	
	//Start this on a slight delay so loading doesn't fuck shit up
	FTimerHandle encounterTimerHandle;
	FTimerManager& timerManager = GetWorld()->GetTimerManager();
	timerManager.SetTimer(encounterTimerHandle, this, &ACombatEncounter::InitialSetup, 0.25f, false, 1.0f);
	
}

void ACombatEncounter::OnNewEnemySpawned(ABaseEnemy* enemySpawned)
{
	enemiesCount = enemiesCount + 1;
	encounterEnemies.Add(enemySpawned);
}

void ACombatEncounter::OnEnemyKilledInternal(ABaseEnemy* enemyKilled, bool bIsReallyDead)
{
	encounterEnemies.Remove(enemyKilled);
	enemiesCount--;
	OnEnemyKilled(enemyKilled, bIsReallyDead);
}
// Called every frame
void ACombatEncounter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

