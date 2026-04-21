// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy Logic/EnemySpawner.h"

#include "GeneralUtilities.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
AEnemySpawner::AEnemySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

bool AEnemySpawner::IsEnemySpawnerOnScreen()
{
	//Okay how this function works is simple. It checks every point in a box form around the capsule collider of the spawner. 
	//if any of the points are on screen, it means the enemy spawner is presumably also on screen
	float radius;
	float halfHeight;
	FVector capsuleOrigin = GetCapsuleComponent()->GetComponentLocation();
	GetCapsuleComponent()->GetScaledCapsuleSize(radius, halfHeight);
	APlayerController* playerController = GetWorld()->GetFirstPlayerController();
	
	//Check all the points after getting the required variables
	FVector	leftTopForward = FVector(radius, radius, halfHeight) + capsuleOrigin;
	if (UGeneralUtilities::CheckIfPointOnScreen(playerController, leftTopForward))
		return true;
	
	FVector	leftTopBackward = FVector(-radius, radius, halfHeight) + capsuleOrigin;
	if (UGeneralUtilities::CheckIfPointOnScreen(playerController, leftTopBackward))
		return true;
	
	FVector	leftBottomForward =	FVector(radius, radius, -halfHeight) + capsuleOrigin;
	if (UGeneralUtilities::CheckIfPointOnScreen(playerController, leftBottomForward))
		return true;
	FVector	leftBottomBackward = FVector(-radius, radius, -halfHeight) + capsuleOrigin;
	if (UGeneralUtilities::CheckIfPointOnScreen(playerController, leftBottomBackward))
		return true;
	
	FVector	rightTopForward = FVector(radius, -radius, halfHeight) + capsuleOrigin;
	if (UGeneralUtilities::CheckIfPointOnScreen(playerController, rightTopForward))
		return true;
	
	FVector	rightTopBackward = FVector(-radius, -radius, halfHeight) + capsuleOrigin;
	if (UGeneralUtilities::CheckIfPointOnScreen(playerController, rightTopBackward))
		return true;
	
	FVector	rightBottomForward = FVector(radius, -radius, -halfHeight) + capsuleOrigin;
	if (UGeneralUtilities::CheckIfPointOnScreen(playerController, rightBottomForward))
		return true;
	
	FVector	rightBottomBackward	= FVector(-radius, -radius, -halfHeight) + capsuleOrigin;
	if (UGeneralUtilities::CheckIfPointOnScreen(playerController, rightBottomBackward))
		return true;

	return false;
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GetCapsuleComponent()->SetHiddenInGame(false);
}

