// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameUI.h"

#include "PlayerShip.h"
#include "SpaceInvader.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/WidgetSwitcher.h"

void UMainGameUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	ASpaceInvader::OnInvaderKilled.AddUObject(this, &UMainGameUI::TestFunction);
	APlayerShip::OnPlayerHealthUpdated.AddUObject(this, &UMainGameUI::InternalPlayerHealthUpdated);
}
void UMainGameUI::RefreshPlayerHealthIcons(int newPlayerHealth, float distBetweenIcons, UHorizontalBox* parentWidget, TSubclassOf<UUserWidget> healthIcon, TArray<UUserWidget*> playerHealthWidgets, TArray<UUserWidget*>& newListOfHealthWidgets)
{
	if (newPlayerHealth >= playerHealthWidgets.Num())
	{
		int widgetsToAdd = newPlayerHealth - playerHealthWidgets.Num();
		for (int i = 0; i < widgetsToAdd; i++)
		{
			UUserWidget* elementToAdd = CreateWidget(GetWorld()->GetFirstPlayerController(), healthIcon);
			parentWidget->AddChild(elementToAdd);
			elementToAdd->SetPadding(FMargin(0, 0, distBetweenIcons, 0));
			playerHealthWidgets.Add(elementToAdd);
		}
	}
	else
	{
		newPlayerHealth = FMath::Clamp(newPlayerHealth, 0, playerHealthWidgets.Num() - 1);
		for (int i = newPlayerHealth; i < playerHealthWidgets.Num(); i++)
		{
			playerHealthWidgets[i]->RemoveFromParent();
			playerHealthWidgets.RemoveAt(i);
		}	
	}
	newListOfHealthWidgets = playerHealthWidgets;
}

void UMainGameUI::ToggleGamePaused(UWidgetSwitcher* WidgetSwitcher, UUserWidget* userInterface, UUserWidget* pauseMenu)
{
	UWidget* currentWidget = WidgetSwitcher->GetActiveWidget();
	 if (currentWidget == userInterface)
	{
	 	APlayerController* playerController = GetWorld()->GetFirstPlayerController();
	 	playerController->SetShowMouseCursor(true);
		playerController->SetPause(true);
	 	WidgetSwitcher->SetActiveWidget(pauseMenu);
	}
	else if (currentWidget == pauseMenu)
	{
		APlayerController* playerController = GetWorld()->GetFirstPlayerController();
		playerController->SetShowMouseCursor(false);
		playerController->SetPause(false);
		WidgetSwitcher->SetActiveWidget(userInterface);
	}
}
void UMainGameUI::TestFunction(float scoreToAdd)
{
	UE_LOG(LogTemp, Display, TEXT("Test Function"));
	AddScore(scoreToAdd);
}

void UMainGameUI::InternalPlayerHealthUpdated(int newHealth)
{
	PlayerHealthUpdated(newHealth);
}
void UMainGameUI::AddHealthIcons(int newPlayerHealth, TArray<UUserWidget>& playerHealthIcons, TSubclassOf<UUserWidget> healthIconWidget, UHorizontalBox HorizontalBox)
{
	// int iconsToAdd = newPlayerHealth - playerHealthIcons.Num();
	// for (int i = 1; i <= iconsToAdd; i++)
	// {
	// 	class WidgetT* widget;
	// 	widget = CreateWidget(GetWorld(), healthIconWidget);
	// 	//
	// 	// WidgetT
	// }
}

