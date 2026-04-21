// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "SpaceInvader.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnInvaderKilled, float scoreToAdd);
UCLASS()
class SPACEINVADERSV2_API ASpaceInvader : public AActor
{
	GENERATED_BODY()
	

public:
	// Sets default values for this pawn's properties
	ASpaceInvader();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* invaderMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* hitboxCollider;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABullet> enemyBulletActor;

	static FOnInvaderKilled OnInvaderKilled;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Space Invader", meta = (Keywords = "Is Object Invader"))
	bool IsObjectInvader(AActor* objectToCheck);

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	void ShootRandomChance(float percentageChance, FTransform shipRelativeSpawnPos);

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	void InvokeOnInvaderKilled(int scoreGainedUponKill);
	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// // Called to bind functionality to input
	// virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

