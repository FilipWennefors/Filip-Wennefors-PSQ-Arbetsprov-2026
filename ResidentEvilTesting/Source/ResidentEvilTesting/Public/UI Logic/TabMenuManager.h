// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TabMenuManager.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UTabMenuManager : public UUserWidget
{
	GENERATED_BODY()
	
#pragma region Functions
protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "InputEvents")
	void OnSwitchMenuBackwardsInput();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "InputEvents")
	void OnSwitchMenuForwardsInput();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "TabMenuManager")
	void OnOpened();
	
	UFUNCTION(BlueprintCallable, Category = "TabManager")
	void GetWidgetIndexForwardsPress(int widgetChildrenCount, int CurrentWidgetIndex, int& newWidgetIndex);

	UFUNCTION(BlueprintCallable, Category = "TabManager")
	void GetWidgetIndexBackwardsPress(int widgetChildrenCount, int CurrentWidgetIndex, int& newWidgetIndex);
#pragma endregion
};
