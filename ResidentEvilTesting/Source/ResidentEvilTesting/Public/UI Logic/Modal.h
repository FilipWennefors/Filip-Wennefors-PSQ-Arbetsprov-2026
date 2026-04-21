// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Modal.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UModal : public UUserWidget
{
	GENERATED_BODY()
#pragma region Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	UTexture2D* modalImageTexture;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	FString modalTextBig;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	FString modalTextSmaller;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* modalImage;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* modalTextBlockBig;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* modalTextBlockSmaller;
#pragma endregion
};
