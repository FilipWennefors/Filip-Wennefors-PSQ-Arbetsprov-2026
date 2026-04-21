// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableObject.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "ItemCrate.generated.h"

UCLASS()
class RESIDENTEVILTESTING_API AItemCrate : public AInteractableObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemCrate();
#pragma region Variables
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* CrateHitbox;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> ItemPickup;
	
#pragma endregion

#pragma region Functions
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
#pragma endregion
};
