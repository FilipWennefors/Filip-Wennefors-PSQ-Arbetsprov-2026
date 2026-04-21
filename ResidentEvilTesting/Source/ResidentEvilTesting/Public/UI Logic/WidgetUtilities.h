// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WidgetUtilities.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UWidgetUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "WidgetUtilities")
	static bool TryTintHoveredImage(UPanelWidget* panelWidget, FLinearColor tintColor);
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "WidgetUtilities")
	static TArray<UImage*> GetAllImagesInPanel(UPanelWidget* panelWidget);
	
};
