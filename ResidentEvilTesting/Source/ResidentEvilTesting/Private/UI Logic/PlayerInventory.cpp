// Fill out your copyright notice in the Description page of Project Settings.


#include "UI Logic/PlayerInventory.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/Image.h"
#include "Player Logic/Inventory Logic/PlayerInventorySubsystem.h"

void UPlayerInventory::ClampSelectedIndex(UNewInventoryItem* itemToMove, int x, int y,  int& xClamped, int& yClamped)
{
	UPlayerInventorySubsystem* playerInventorySubsystem = GetGameInstance()->GetSubsystem<UPlayerInventorySubsystem>();
	
	FIntVector2 inventorySize = FIntVector2(playerInventorySubsystem->GetInventorySize().X, playerInventorySubsystem->GetInventorySize().Y);
	FIntVector2 itemSize = FIntVector2(itemToMove->ItemSize.X, itemToMove->ItemSize.Y);
	if(itemToMove->bIsRotated)
	{
		xClamped = FMath::Clamp(x, itemSize.Y - 1, inventorySize.X);
		yClamped = FMath::Clamp(y, 0.f, inventorySize.Y - itemSize.X);
	}
	else
	{
		xClamped = FMath::Clamp(x, 0, inventorySize.X - itemSize.X);
		yClamped = FMath::Clamp(y, 0, inventorySize.Y - itemSize.Y);
	}
}
void UPlayerInventory::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

FVector2f UPlayerInventory::GetSelectedIndex(float iconSize, UImage* cornerIndicator, FVector2D& indicatorPos)
{
	float viewportScale = UWidgetLayoutLibrary::GetViewportScale(this);
	FVector2D mousePositionOnViewport = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
	FVector2D mousePosition = FVector2D(mousePositionOnViewport.X * viewportScale, mousePositionOnViewport.Y * viewportScale);

	FVector2D screenMiddlePos = UWidgetLayoutLibrary::GetViewportSize(this);




	indicatorPos = mousePosition;
	

	

	return FVector2f::ZeroVector;
}

FVector2D UPlayerInventory::GetFirstIndexViewportPosition(UWrapBox* attacheCase)
{
	TArray<UWidget*> attacheCaseIcons = attacheCase->GetAllChildren();
	FGeometry cachedGeo = attacheCaseIcons[0]->GetCachedGeometry();
	FVector2D pixelPosition;
	FVector2D viewportPosition;
	USlateBlueprintLibrary::LocalToViewport(this, cachedGeo, FVector2D(0.f, 0.f),pixelPosition,viewportPosition);
	return viewportPosition;
}

FIntVector UPlayerInventory::CalculateSelectedIndex(UWrapBox* attacheCase, float iconSize, FIntVector attacheCaseSize)
{
	//Next step is as following. We know that the absolute start of the inventory will be the part of the screen that the first pixel of the width is.
	//So what we can do is find the distance from the start of the screen to the first spot in the inventory. Then we get a number that starts at 0 when
	//the mouse pos is at the start of the inventory. We then divide it by icon size to get a value that is equivalent to the number of icons when hovering at the last icon
	
	TArray<UWidget*> attacheCaseIcons = attacheCase->GetAllChildren();
	FGeometry cachedGeo = attacheCaseIcons[0]->GetCachedGeometry();
	FVector2D pixelPosition;
	FVector2D firstIndexViewportPosition;
	USlateBlueprintLibrary::LocalToViewport(this, cachedGeo, FVector2D(0.f, 0.f),pixelPosition,firstIndexViewportPosition);

	FVector2D getMousePositionOnViewport = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
	FVector2D valueOffsetRemoved = getMousePositionOnViewport - firstIndexViewportPosition;
	
	int clampedXValue = FMath::Clamp(valueOffsetRemoved.X / iconSize, 0, attacheCaseSize.X - 1);
	int clampedYValue = FMath::Clamp(valueOffsetRemoved.Y / iconSize, 0, attacheCaseSize.Y - 1);

	return FIntVector(clampedXValue, clampedYValue, 0.f);
}

