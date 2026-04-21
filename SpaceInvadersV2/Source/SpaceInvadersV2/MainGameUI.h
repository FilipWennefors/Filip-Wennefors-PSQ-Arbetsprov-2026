// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/HorizontalBox.h"
#include "Components/WidgetSwitcher.h"
#include "MainGameUI.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERSV2_API UMainGameUI : public UUserWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, Category = "UI")
	void RefreshPlayerHealthIcons(int newPlayerHealth, float distBetweenIcons, UHorizontalBox* parentWidget, TSubclassOf<UUserWidget> healthIcon, TArray<UUserWidget*> playerHealthWidgets, TArray<UUserWidget*>& newListOfHealthWidgets);
		
	UFUNCTION(BlueprintCallable, Category = "UI")
	void ToggleGamePaused(UWidgetSwitcher* WidgetSwitcher, UUserWidget* userInterface, UUserWidget* pauseMenu);
		
	UFUNCTION(BlueprintImplementableEvent, Category="UI")
	void AddScore(const float& scoreToAdd);

	UFUNCTION(BlueprintImplementableEvent, Category="UI")
	void PlayerHealthUpdated(const int& newHealth);

	void TestFunction(float scoreToAdd);

	void InternalPlayerHealthUpdated(int newHealth);

	void AddHealthIcons(int newPlayerHealth, TArray<UUserWidget>& playerHealthIcons, TSubclassOf<UUserWidget> healthIconWidget, UHorizontalBox HorizontalBox);

	virtual void NativeOnInitialized() override;
};
