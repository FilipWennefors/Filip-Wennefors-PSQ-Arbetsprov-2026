// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "GameFramework/Actor.h"
#include "Spline.generated.h"

UCLASS()
class RESIDENTEVILTESTING_API ASpline : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpline();
#pragma region Variables
public:
	

	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Components")
	USplineComponent* spline;
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
