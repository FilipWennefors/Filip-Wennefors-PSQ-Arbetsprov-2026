// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceInvader.h"

#include "Bullet.h"
#include "Components/BoxComponent.h"

// Sets default values
ASpaceInvader::ASpaceInvader()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	invaderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("invaderMesh"));
	invaderMesh->SetupAttachment(RootComponent);

	hitboxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("hitboxCollider"));
	hitboxCollider->SetupAttachment(invaderMesh);



}
TMulticastDelegate<void(float)> ASpaceInvader::OnInvaderKilled;
// Called when the game starts or when spawned
void ASpaceInvader::BeginPlay()
{
	Super::BeginPlay();
	
}
bool ASpaceInvader::IsObjectInvader(AActor* objectToCheck)
{
	if (TSubclassOf<ASpaceInvader>(objectToCheck->GetClass()))
	{
		return true;
	}
	else return false;
}
void ASpaceInvader::ShootRandomChance(float percentageChance, FTransform shipRelativeSpawnPos)
{
	UE_LOG(LogTemp, Warning, TEXT("Calling function"));
	if (FMath::RandRange(0.f, 100.f) <= percentageChance)
	{
		FVector startPosition = GetActorLocation();
		FVector endPosition = FVector(startPosition.X, startPosition.Y, startPosition.Z - 400);
		FHitResult hitResult;
		FCollisionQueryParams collisionParams;
		collisionParams.AddIgnoredActor(this);
		
		if (GetWorld()->LineTraceSingleByChannel(hitResult, startPosition, endPosition, ECollisionChannel::ECC_Visibility, collisionParams))
		{
			if (!TSubclassOf<ASpaceInvader>(hitResult.GetActor()->GetClass()))
			{
				GetWorld()->SpawnActor<ABullet>(enemyBulletActor, GetActorTransform() + shipRelativeSpawnPos);
				//ADD BACK LATER
				//GetWorld()->SpawnActor<ABullet>(enemyBulletActor, GetActorTransform() + shipRelativeSpawnPos);
				UE_LOG(LogTemp, Warning, TEXT("Should fire bullet"));
			}
			else UE_LOG(LogTemp, Warning, TEXT("Object hit is ASpaceInvader Subclass"));
		}
		else
			GetWorld()->SpawnActor<ABullet>(enemyBulletActor, GetActorTransform() + shipRelativeSpawnPos);
		//ADD BACK LATER
		// else
		// 	GetWorld()->SpawnActor<ABullet>(enemyBulletActor, GetActorTransform() + shipRelativeSpawnPos);
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Should not fire bullet"));
}
//bool& hitboxCollider, startPosition, endPosition, ECollisionChannel::ECC_Visibility, true
void ASpaceInvader::InvokeOnInvaderKilled(int scoreGainedUponKill)
{
	OnInvaderKilled.Broadcast(scoreGainedUponKill);
}
// Called every frame
void ASpaceInvader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//ADD BACK LATER
// Called to bind functionality to input
// void ASpaceInvader::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
// {
// 	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
// }

