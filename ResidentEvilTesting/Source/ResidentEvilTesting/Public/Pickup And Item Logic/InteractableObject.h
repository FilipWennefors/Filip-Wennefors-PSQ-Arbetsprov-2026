// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Actor.h"
#include "InteractableObject.generated.h"

UCLASS()
class RESIDENTEVILTESTING_API AInteractableObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableObject();
#pragma region Variables
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UWidgetComponent* inputIndicatorWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	float indicatorDeactivationTime = 0.1f;

private:
	float indicatorDeactivationTimeElapsed;
#pragma endregion

#pragma region Functions
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual bool IsInteractable();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interactable")
	void StartInteraction();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interactable")
	void StopInteraction();
	
	void NotifyIsClosest();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "IInteractable")
	void InternalNotifyClosestInteractable();



#pragma endregion
};
