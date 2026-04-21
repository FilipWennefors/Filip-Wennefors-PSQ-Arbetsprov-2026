// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy Logic/EnemyBaseWeapon.h"

// Sets default values
AEnemyBaseWeapon::AEnemyBaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	weaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("weapon Mesh"));
	weaponMesh->SetupAttachment(RootComponent);
}

FEnemyWeaponAnimations AEnemyBaseWeapon::GetAnimations()
{
	return animations;
}

// Called when the game starts or when spawned
void AEnemyBaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyBaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

