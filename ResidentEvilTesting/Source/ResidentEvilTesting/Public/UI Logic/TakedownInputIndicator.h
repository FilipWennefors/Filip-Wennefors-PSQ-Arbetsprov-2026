// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Player Logic/ETakedownType.h"
#include "TakedownInputIndicator.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UTakedownInputIndicator : public UUserWidget
{
	GENERATED_BODY()
#pragma region Variables
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* TakedownIcon;
#pragma endregion
	
#pragma  region Functions
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "TakedownInputIndicator")
	void SetInputIcon(ETakedownType takedownType);
#pragma endregion
};
