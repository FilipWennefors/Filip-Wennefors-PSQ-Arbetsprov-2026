// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include "ItemIcon.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UItemIcon : public UUserWidget
{
	GENERATED_BODY()

#pragma region Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UCanvasPanel* Canvas;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* ItemIconImage;
#pragma endregion
	
#pragma region Functions
public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateItemsCountText(int newItemsCountTextNumber);
#pragma endregion
};
