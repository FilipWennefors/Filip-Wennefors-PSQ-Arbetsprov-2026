// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup And Item Logic/ItemCrate.h"

// Sets default values
AItemCrate::AItemCrate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CrateHitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("Hitbox"));
	CrateHitbox->SetupAttachment(mesh);

}

// Called when the game starts or when spawned
void AItemCrate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemCrate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

