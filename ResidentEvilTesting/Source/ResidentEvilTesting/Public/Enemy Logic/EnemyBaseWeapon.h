// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FEnemyWeaponAnimations.h"
#include "GameFramework/Actor.h"
#include "EnemyBaseWeapon.generated.h"

UCLASS()
class RESIDENTEVILTESTING_API AEnemyBaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyBaseWeapon();
#pragma region Variables
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* weaponMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FEnemyWeaponAnimations animations;

#pragma endregion

#pragma region Functions
public:
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Getters")
	FEnemyWeaponAnimations GetAnimations();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma endregion

};
