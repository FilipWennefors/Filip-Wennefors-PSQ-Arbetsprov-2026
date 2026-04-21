// Fill out your copyright notice in the Description page of Project Settings.


#include "Barracks.h"

// Sets default values
ABarracks::ABarracks()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	barracksPlaceholderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaceholderMesh"));
	barracksPlaceholderMesh->SetupAttachment(RootComponent);

	barracksGeometryCollection = CreateDefaultSubobject<UGeometryCollectionComponent>(TEXT("BarracksFracturedMesh"));
	barracksGeometryCollection->SetupAttachment(RootComponent);
}

void ABarracks::TakeDamage(int damageAmount)
{
	currentHealth -= damageAmount;
	UpdateHealthBar(currentHealth);
	if (currentHealth <= 0)
		Destroy();
}
// Called when the game starts or when spawned
void ABarracks::BeginPlay()
{
	Super::BeginPlay();
	currentHealth = MaxHealth;
	UpdateHealthBar(currentHealth);
}

// Called every frame
void ABarracks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

