// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoolArray2D.h"
#include "Pickup And Item Logic/KeyItem.h"
#include "Pickup And Item Logic/NewInventoryItem.h"
#include "Pickup And Item Logic/SpecialItem.h"
#include "Pickup And Item Logic/TreasureItem.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UI Logic/ImageWidget.h"
#include "PlayerInventorySubsystem.generated.h"

/**Create a TMap to keep track of all items in the inventory and their amount
 *https://dev.epicgames.com/documentation/en-us/unreal-engine/tmap?application_version=4.27#queries
 *https://www.youtube.com/watch?v=-GEaYx-Bba8 Pobato on TMaps
 *https://www.reddit.com/r/unrealengine/comments/ydbaee/c_tmap/
 *TMap also only allows one of each key which could either be perfect or disastrous
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemAdded, UNewInventoryItem*, itemAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemRemoved, UNewInventoryItem*, itemRemoved);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemInfoUpdated, UNewInventoryItem*, itemInfoUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKeyItemAdded, UKeyItem*, itemAdded, int, itemIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTreasureItemAdded, UTreasureItem*, itemAdded, int, itemIndex);

USTRUCT(BlueprintType)
struct FInventorySlot
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(ExposeOnSpawn=true))
	bool bIsOccupied = false;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(ExposeOnSpawn=true))
	UNewInventoryItem* itemInSlot = nullptr;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(ExposeOnSpawn=true))
	UImageWidget* imageWidget = nullptr;
};

USTRUCT(BlueprintType)
struct FItemInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	int itemCount;
	
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	bool bFirstTimePickedUp = true;
};

UCLASS(Blueprintable)
class RESIDENTEVILTESTING_API UPlayerInventorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

#pragma region Variables
public:
#pragma region Delegates
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	FOnItemAdded OnItemAdded;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	FOnItemRemoved OnItemRemoved;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	FOnItemInfoUpdated OnItemInfoUpdated;
	
	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnKeyItemAdded OnKeyItemAdded;
	
	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnTreasureItemAdded OnTreasureItemAdded;
#pragma endregion
	
	//Takes in the item class name as the FString and will spit out how many exist in the inventory. Might be modified in the future to store more information
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	TMap<FString, FItemInfo> itemInformation;
	
private:
	UPROPERTY()
	TMap<FPrimaryAssetId, int> amountOfEachItem; //Temp map later modify to create amount of each item
	
	FIntVector2 caseSize = FIntVector2(15, 8);
	
	BoolArray2D isSlotOccupiedArray = BoolArray2D(caseSize.X, caseSize.Y);
	
	
	UPROPERTY()
	TArray<UKeyItem*> keyItems;
	
	UPROPERTY()
	TArray<UTreasureItem*> treasureItems;
	
	UPROPERTY(BlueprintReadWrite, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	TArray<FInventorySlot> inventorySlots;

#pragma endregion

#pragma region Functions
public:
	//Getter for items not placed in the attache case, ie keys, treasures, and mission items
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	TArray<UKeyItem*> GetKeyItems() { return keyItems; }
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	bool TryGetKeyItemAtIndex(int index, UKeyItem*& keyItem);

	//Getter for how many slots the inventory is in length and height
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	FVector2D GetInventorySize() { return FVector2D(caseSize.X, caseSize.Y); }

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	FInventorySlot GetInventorySlot(int x, int y);

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	void MarkSlotsAsOccupied(UNewInventoryItem* itemAdded, bool bIsRotated);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	void GetSlotsToMark(FVector2D itemSize, FVector2D inventoryPosition, TArray<int>& slotsToMark, int& lastIndex, bool bIsRotated);
	
	//Used for adding items to the attache case. This is for ammo, weapons, grenades etc
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	bool TryAddItemToInventory(UNewInventoryItem* itemAdded, int itemCount, bool& bIsItemRotated, FVector2D& outItemPosition);

	//Used to remove a certain amount of an item from the attache case. Returns true if the amount of items has been removed
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	bool TryRemoveItemsFromInventory(TSubclassOf<UNewInventoryItem> itemClass, int itemCount);
	
	//For mission items, keys, treasures, etc
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	bool AddSpecialItemToInventory(USpecialItem* itemAdded);
	
	//Used to see if an items fits in an inventory slot, will return false if it is blocked by another item
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	bool CheckIfItemFitsSlot(FVector2D itemPosition, FVector2D itemSize, bool bIsRotated, UNewInventoryItem* itemToAdd);
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	int GetAmountOfItemType(TSubclassOf<UNewInventoryItem> itemClass);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	void RemoveItemFromInventory(UNewInventoryItem* itemToRemove);
	
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

protected:
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	void ClearInventorySlots(FVector2D itemSize, FVector2D itemPosition, bool bIsRotated);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	void ClearInventorySlot(int index, UImageWidget* imageWidget);
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnInitializedBP();
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

private:
	//For Initial setup for items just added to the inventory
	void AddItemToSlot(UNewInventoryItem* itemAdded, int itemCount, bool bIsItemRotated, FVector2D itemPosition);
	
	//Increase the amount of a certain item in the internal system to track item quantities
	void IncreaseItemCount(int itemCountToAdd, UNewInventoryItem* itemAdded);
	
	void MarkSlotsAsOccupiedOrNot(FIntVector2 startPos, FVector2D dimensions, bool isOccupied);
#pragma endregion


};