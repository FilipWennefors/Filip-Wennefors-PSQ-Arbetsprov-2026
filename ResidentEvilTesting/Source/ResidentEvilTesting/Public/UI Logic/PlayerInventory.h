// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Image.h"
#include "Components/WrapBox.h"
#include "Pickup And Item Logic/NewInventoryItem.h"
#include "PlayerInventory.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UPlayerInventory : public UUserWidget
{
	GENERATED_BODY()
#pragma region Variables
//	UInventoryState navigationState;
	
//protected:
//	TArray2D<FInventoryGridSlot> InventorySlots = TArray2D<FInventoryGridSlot>(15, 8);

#pragma endregion	

#pragma region Functions

protected:
#pragma region InputEvents
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UserInterfaceInput")
	void OnBackKeyInput();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UserInterfaceInput")
	void OnPreviewItemInput();
	
	//Call in order to implement temp functionality called when Q pressed(Q is the input key used to test things as it is not used in game for anything)
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UserInterfaceInput")
	void OnDebugKeyPressed();
#pragma endregion

protected:
	// UFUNCTION(BlueprintCallable, Category = "Experiments")
	// FInventoryGridSlot GetSlot(int x, int y);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (Keywords = "Inventory"))
	void ClampSelectedIndex(UNewInventoryItem* itemToMove, int x, int y, int& xClamped, int& yClamped);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void NavigatingItemState();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void MovingItemState();
	
	virtual void NativeOnInitialized() override;
private:
	
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (Keywords = "Inventory"))
    FVector2f GetSelectedIndex(float iconSize, UImage* cornerIndicator, FVector2D& indicatorPos);

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	FVector2D GetFirstIndexViewportPosition(UWrapBox* attacheCase);

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	FIntVector CalculateSelectedIndex(UWrapBox* attacheCase, float iconSize, FIntVector attacheCaseSize);
#pragma endregion
};
