// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType)
class RESIDENTEVILTESTING_API UItem : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* itemIconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString itemName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString itemDescription;
};
