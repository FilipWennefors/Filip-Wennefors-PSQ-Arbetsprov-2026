// Fill out your copyright notice in the Description page of Project Settings.


#include "UI Logic/WidgetUtilities.h"

#include "Components/HorizontalBox.h"
#include "Components/Image.h"

bool UWidgetUtilities::TryTintHoveredImage(UPanelWidget* panelWidget, FLinearColor tintColor)
{
	TArray<UWidget*> panelChildren = panelWidget->GetAllChildren();

	for (UWidget* panelChild : panelChildren)
	{
		UImage* image = Cast<UImage>(panelChild);
		if (IsValid(image))
		{
			if (image->IsHovered())
			{
				image->SetBrushTintColor(tintColor);
				return true;
			}
			else
				image->SetBrushTintColor(FLinearColor(1.0f, 1.0f, 1.0f));
		}
	}
	return false;
}

TArray<UImage*> UWidgetUtilities::GetAllImagesInPanel(UPanelWidget* panelWidget)
{
	TArray<UImage*> imagesInPanel;
	for (UWidget* widget : panelWidget->GetAllChildren())
	{
		UImage* image = Cast<UImage>(widget);
		if (image != nullptr)
			imagesInPanel.Add(image);
	}
	return imagesInPanel;
}
