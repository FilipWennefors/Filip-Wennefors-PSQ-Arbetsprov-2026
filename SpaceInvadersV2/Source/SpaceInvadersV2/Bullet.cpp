// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

#include "Components/AudioComponent.h"

// Sets default values
ABullet::ABullet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
	bulletMesh->SetupAttachment(RootComponent);

	audioSource = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioSource"));
	audioSource->SetupAttachment(bulletMesh);
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	FVector actorPos = GetActorTransform().GetLocation();
	Super::Tick(DeltaTime);
	SetActorLocation(FVector(actorPos.X, actorPos.Y, actorPos.Z + (moveSpeed * DeltaTime)));
}

