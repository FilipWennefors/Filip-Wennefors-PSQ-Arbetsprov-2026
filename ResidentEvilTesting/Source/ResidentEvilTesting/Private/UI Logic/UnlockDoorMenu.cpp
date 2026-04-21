// Fill out your copyright notice in the Description page of Project Settings.


#include "UI Logic/UnlockDoorMenu.h"

#include "Components/PanelWidget.h"

bool UUnlockDoorMenu::GetHoveredImage(UPanelWidget* panelWidget, UImage*& image, int& keyItemIndex)
{
	TArray<UWidget*> panelChildren = panelWidget->GetAllChildren();
	int imageIndex = -1;
	for (UWidget* widget : panelChildren)
	{
		if(widget->IsA(UImage::StaticClass()))
		{
			imageIndex = imageIndex + 1;
			if (widget->IsHovered())
			{	
				UImage* hoveredImage = Cast<UImage>(widget);
				image = hoveredImage;
				keyItemIndex = imageIndex;
				return true;
			}
		}
	}
	return false;
}

void UUnlockDoorMenu::ClearImageTints(UPanelWidget* panelWidget)
{
	TArray<UWidget*> panelChildren = panelWidget->GetAllChildren();
	for (UWidget* widget : panelChildren)
	{
		UImage* image = Cast<UImage>(widget);
		if (image != nullptr)
		{
			image->SetBrushTintColor(FLinearColor(1.0f, 1.0f, 1.0f));
		}
	}
}
