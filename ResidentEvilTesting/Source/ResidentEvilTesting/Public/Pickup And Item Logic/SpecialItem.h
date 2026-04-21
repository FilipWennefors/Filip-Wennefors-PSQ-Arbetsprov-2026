// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "UObject/Object.h"
#include "SpecialItem.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class RESIDENTEVILTESTING_API USpecialItem : public UItem
{
	GENERATED_BODY()
#pragma region Variables
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* ItemTexture;
#pragma endregion
};
