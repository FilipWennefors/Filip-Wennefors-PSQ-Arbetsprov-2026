// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class RESIDENTEVILTESTING_API IInteractable
{
	GENERATED_BODY()
#pragma region Functions
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "IInteractable", meta = (AllowPrivateAccess = "true"))
	void StartInteraction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "IInteractable", meta = (AllowPrivateAccess = "true"))
	void StopInteraction();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "IInteractable", meta = (AllowPrivateAccess = "true"))
	void Interact();

	UFUNCTION(BlueprintImplementableEvent, Category = "IInteractable", meta = (AllowPrivateAccess = "true"))
	void OnConfirmedClosestInteractable();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "IInteractable", meta = (AllowPrivateAccess = "true"))
	bool CanInteractWithObject();

#pragma endregion
};
