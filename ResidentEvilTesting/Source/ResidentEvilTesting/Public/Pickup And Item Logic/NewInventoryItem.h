// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Player Logic/ExtendedPlayerController.h"
#include "UI Logic/ItemIcon.h"
#include "NewInventoryItem.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class RESIDENTEVILTESTING_API UNewInventoryItem : public UItem
{
	GENERATED_BODY()
#pragma region Variables
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector2D ItemSize;
	
	UPROPERTY(BlueprintReadWrite)
	FVector2D ItemPosition;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* ItemTexture;
	
	//Determines how many items can be placed in a stack of it. 1 means no stacking
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int maxItemsInStack = 1;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FLinearColor IconColor;
	
	//Used to show the item in the inspect menu
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh* ItemMesh;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FTransform InspectDefaultTransform;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool canItemBeUsed;
	
	//Represents the icon used in the inventory to represent the entire item
	UPROPERTY(BlueprintReadWrite)
	UItemIcon* iconWidgetReference;
	
	UPROPERTY(BlueprintReadWrite)
	bool bIsRotated;
	
	UPROPERTY(BlueprintReadWrite)
	int itemsInStack = 1;
#pragma endregion

#pragma region Functions
public:
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Items", meta = (AllowPrivateAccess = "true"))
	bool CanUseItem(AExtendedPlayerController* PlayerController);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Items", meta = (AllowPrivateAccess = "true"))
	bool TryUseItem(AExtendedPlayerController* PlayerController);

#pragma endregion
	
	
};
