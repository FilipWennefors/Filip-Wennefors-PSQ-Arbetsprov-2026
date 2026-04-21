// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Pawn.h"
#include "PlayerShip.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FPlayerHealthUpdated, int newPlayerHealth)
UCLASS()
class SPACEINVADERSV2_API APlayerShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerShip();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* playerShipMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* playerShipCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* playerShipHitbox;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABullet> bulletActor;
	
	static FPlayerHealthUpdated OnPlayerHealthUpdated;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "PlayerShip")
	void Shoot(float fireRate, FTransform shipRelativeSpawnPos);

	UFUNCTION(BlueprintCallable, Category = "PlayerShip")
	void MovePlayerShip(float speed, float direction);

	UFUNCTION(BlueprintCallable, Category = "PlayerShip")
	float TestMirroredEaseInOutQuartFactor(float t);

	UFUNCTION(BlueprintCallable, Category = "PlayerShip")
	void TakeDamage(int damageTaken);
	void DisableIFrames();

	UFUNCTION(BlueprintCallable, Category = "PlayerShip")
	void SetPlayerHealth(int newHealth);
	
	UFUNCTION()
	void LocalMovePlayerShip(float speed, float direction, float deltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinSidewaysPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MaxSidewaysPosition;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	float iFrameDuration;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
	int _health;
	
	UPROPERTY() float firingCooldown;
	UPROPERTY() bool _movingPlayerShip;
	UPROPERTY() int _speed;
	UPROPERTY() int _direction;
	UPROPERTY() bool hasIFrames;
	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
