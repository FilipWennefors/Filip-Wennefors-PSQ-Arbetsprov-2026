// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy Logic/CentralEnemyCommanderSubsystem.h"

#include "Enemy Logic/BaseEnemy.h"

void UCentralEnemyCommanderSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	ABaseEnemy::OnAnyEnemyKilled.AddUObject(this, &UCentralEnemyCommanderSubsystem::OnEnemyKilled);
	
	OnInitializedBP();
	UE_LOG(LogTemp, Warning, TEXT("CentralEnemyCommanderSubsystem::Initialize"));
}

bool UCentralEnemyCommanderSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (this->GetClass()->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer))
		return true;
	else return false;
}