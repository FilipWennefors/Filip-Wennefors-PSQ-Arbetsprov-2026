// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "Barracks.generated.h"

UCLASS()
class SPACEINVADERSV2_API ABarracks : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarracks();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Barracks")
	UStaticMeshComponent* barracksPlaceholderMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Barracks")
	UGeometryCollectionComponent* barracksGeometryCollection;

	UFUNCTION(BlueprintCallable, Category = "Barracks", meta = (AllowPrivateAccess = "true"))
	void TakeDamage(int damageAmount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Barracks", meta = (AllowPrivateAccess = "true"))
	void UpdateHealthBar(int newHealth);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	int MaxHealth;

private:
	int currentHealth;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
