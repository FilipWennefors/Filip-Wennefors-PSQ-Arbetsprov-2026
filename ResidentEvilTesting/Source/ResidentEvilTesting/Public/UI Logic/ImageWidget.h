// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "ImageWidget.generated.h"

/** Image widget is a class created that represents the background images in the attache case
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class RESIDENTEVILTESTING_API UImageWidget : public UUserWidget
{
	GENERATED_BODY()
#pragma region Variables
public: //Temporary for testing, Change back to protected afterwards
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	USizeBox* SizeBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* Image;
#pragma endregion
};
