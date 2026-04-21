// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Pickup And Item Logic/NewInventoryItem.h"
#include "ItemActionsMenu.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMenuClosedEvent);
UCLASS()
class RESIDENTEVILTESTING_API UItemActionsMenu : public UUserWidget
{
	GENERATED_BODY()
	
#pragma region Variables
public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Events")
	FOnMenuClosedEvent OnMenuClosed;
#pragma endregion
	
	
#pragma region Functions
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnMenuEnabled(UNewInventoryItem* itemInspected);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void CloseMenu();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnBackButtonPressed();
	
#pragma endregion
};
