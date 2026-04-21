// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "UnlockDoorMenu.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UUnlockDoorMenu : public UUserWidget
{
	GENERATED_BODY()
#pragma region Variables
private:
	UPROPERTY()
	int selectedKeyItem = 0;
#pragma endregion
	
#pragma region Functions
protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UnlockDoorMenu")
	void OnSpacePressed();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UnlockDoorMenu")
	void OnBackKeyPressed();
	
	UFUNCTION(BlueprintCallable, Category = "UnlockDoorMenu")
	bool GetHoveredImage(UPanelWidget* panelWidget, UImage*& image, int& keyItemIndex);
	
	UFUNCTION(BlueprintCallable, Category = "UnlockDoorMenu")
	void ClearImageTints(UPanelWidget* panelWidget);
	
	TArray<UImage*> GetAllImagesInPanel(UPanelWidget* panelWidget);
#pragma endregion
};
