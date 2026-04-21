// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CutsceneDescription.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UCutsceneDescription : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetDescriptiveText(const FString& test); // No idea why but the game didn't compile unless I did const and & pointer
};
