// Fill out your copyright notice in the Description page of Project Settings.


#include "Player Logic/Inventory Logic/PlayerInventorySubsystem.h"

void UPlayerInventorySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnInitializedBP();
	UE_LOG(LogTemp, Warning, TEXT("PlayerInventorySubsystem::Initialize"));
	//Leftover from debugging
	
	/*for (int i = 0; i < caseSize.X; i++)
	{
		for (int j = 0; j < caseSize.Y; j++)
		{
			//Stupid that we have to use brackets with macros like this but c++ do be like that
			if (isSlotOccupiedArray.GetIndexValue(i, j))
			{
				UE_LOG(LogTemp, Display, TEXT("Slot is occupied %d, %d"), i, j);
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("Slot ain't occupied %d, %d"), i, j);
			}
		}
	}*/
}
void UPlayerInventorySubsystem::GetSlotsToMark(FVector2D itemSize, FVector2D inventoryPosition, TArray<int>& slotsToMark, int& lastIndex, bool bIsRotated)
{
	TArray<int> slotsMarked;
	FVector2D inventorySize =  GetInventorySize();
	FIntVector2 _itemSize = FIntVector2(itemSize.X, itemSize.Y);
	FIntVector2 _inventoryPosition = FIntVector2(inventoryPosition.X, inventoryPosition.Y);
	FIntVector2 _inventorySize = FIntVector2(inventorySize.X, inventorySize.Y);

	if (bIsRotated)
	{
		for (int y = _inventoryPosition.Y; y < _inventoryPosition.Y + _itemSize.X; y++)
		{
			for (int x = _inventoryPosition.X - (_itemSize.Y - 1); x <= inventoryPosition.X; x++)
			{
				int integerToAdd = y * _inventorySize.X;
				slotsMarked.Add(x + integerToAdd);
			}
		}
	}
	else
	{
		for (int y = _inventoryPosition.Y; y < _inventoryPosition.Y + _itemSize.Y; y++)
		{
			for (int x = _inventoryPosition.X; x < _inventoryPosition.X + _itemSize.X; x++)
			{
				int integerToAdd = y * _inventorySize.X;
				slotsMarked.Add(x + integerToAdd);
			}
		} 
	}
	slotsToMark = slotsMarked;
	//	int _lastIndex = 
	//	lastIndex = _lastIndex;
}
bool UPlayerInventorySubsystem::TryAddItemToInventory(UNewInventoryItem* itemAdded, int itemCount, bool& bIsItemRotated, FVector2D& outItemPosition)
{
	int _itemCount = itemCount;
	FIntVector2 _itemSize =  FIntVector2(itemAdded->ItemSize.X, itemAdded->ItemSize.Y);
	for (int y = 0; y < caseSize.Y; y++)
	{
		for (int x = 0; x < caseSize.X; x++)
		{
			FVector2D itemPosition = FVector2D(x, y);
			
			//First step here is to check whether the item in the slot is the same blueprint class as the item being added to the inventory. If that is the case, increment the items stack count by the max amount allowed.
			//Then if there is leftover items, go to the next iteration of the for loop and try to continue adding items to future slots
			
			if (GetInventorySlot(x, y).bIsOccupied && GetInventorySlot(x, y).itemInSlot->GetClass() == itemAdded->GetClass())
			{
				UNewInventoryItem* itemInSlot = GetInventorySlot(x, y).itemInSlot;
				//If the amount of items in the stack exceed the item count. Calculate how many extra exist, then set the value of _itemCount to it. Then continue to the next for loop iteration
				if (itemInSlot->itemsInStack + _itemCount > itemInSlot->maxItemsInStack)
				{
					int extraItemsCount = itemInSlot->itemsInStack + _itemCount - itemInSlot->maxItemsInStack;
					int deltaItemsCount = itemInSlot->maxItemsInStack - itemInSlot->itemsInStack;
					_itemCount = extraItemsCount;
					itemInSlot->itemsInStack = itemInSlot->maxItemsInStack;
					IncreaseItemCount(deltaItemsCount, itemInSlot);
					

					if(IsValid(itemInSlot->iconWidgetReference)) //Check needed because sometimes the item icon has not been created yet
						itemInSlot->iconWidgetReference->UpdateItemsCountText(itemInSlot->itemsInStack);
					
					//Skip to next for loop iteration
					continue; 
				}
				else 
				{
					int newItemStackCount = itemInSlot->itemsInStack + itemCount;
					itemInSlot->itemsInStack = newItemStackCount;
					IncreaseItemCount(itemCount, itemInSlot);
					

					
					if(IsValid(itemInSlot->iconWidgetReference)) //Check needed because sometimes the item icon has not been created yet
						itemInSlot->iconWidgetReference->UpdateItemsCountText(newItemStackCount);
					
					return true;
				}
			}
			//Here is if the slot does not contain the same item. Check if the item can be added to the slot then add it to it
			if (CheckIfItemFitsSlot(itemPosition, itemAdded->ItemSize, false, itemAdded))
			{
				bIsItemRotated = false;
				outItemPosition = itemPosition;
				AddItemToSlot(itemAdded, _itemCount, bIsItemRotated, itemPosition);
				return true;
			}
			else if (CheckIfItemFitsSlot(itemPosition, itemAdded->ItemSize, true, itemAdded))
			{
				bIsItemRotated = true;
				outItemPosition = itemPosition;
				AddItemToSlot(itemAdded, _itemCount, bIsItemRotated, itemPosition);
				return true;
			}
			
			//This slot is to assign the blue color for visualization in the editor. Added to easier understand what is happening
			else
			{
				UImageWidget* imageWidget = GetInventorySlot(x, y).imageWidget;
				if (IsValid(imageWidget))
					imageWidget->Image->SetBrushTintColor(FLinearColor(0, 0, 1, 1) );
			}
		}		
	}
	return false;
}

bool UPlayerInventorySubsystem::TryRemoveItemsFromInventory(TSubclassOf<UNewInventoryItem> itemClass,  int itemCount)
{
	int itemsToRemoveTemp = itemCount;
	for (int y = 0; y < caseSize.Y; y++)
	{
		for (int x = 0; x < caseSize.X; x++)
		{
			FInventorySlot inventorySlot = GetInventorySlot(x, y);
			if (inventorySlot.bIsOccupied)
			{
				UNewInventoryItem* itemInSlot = inventorySlot.itemInSlot;
				if (itemInSlot->GetClass() != itemClass.Get())
					continue;
				if (itemInSlot->itemsInStack <= itemsToRemoveTemp)
				{
					IncreaseItemCount(-itemInSlot->itemsInStack, itemInSlot);
					RemoveItemFromInventory(itemInSlot);
					itemsToRemoveTemp = itemsToRemoveTemp - itemInSlot->itemsInStack;
					if (itemsToRemoveTemp <= 0)
						return true;
				}
				else
				{
					IncreaseItemCount(-itemsToRemoveTemp, itemInSlot);
					int newItemsInStack = itemInSlot->itemsInStack - itemsToRemoveTemp;
					itemInSlot->itemsInStack = newItemsInStack;
					if(IsValid(itemInSlot->iconWidgetReference)) //Check needed because sometimes the item icon has not been created yet
						itemInSlot->iconWidgetReference->UpdateItemsCountText(itemInSlot->itemsInStack);
					
					return true;
				}
			}
		}
	}
	return false;

}

// bool UPlayerInventorySubsystem::TryRemoveItemsFromInventory(TSubclassOf<UNewInventoryItem> itemClass, int itemCount, APawn* playerReference)
// {
// 	return true;
// }

void UPlayerInventorySubsystem::AddItemToSlot(UNewInventoryItem* itemAdded, int itemCount, bool bIsItemRotated, FVector2D itemPosition)
{
	itemAdded->ItemPosition = itemPosition;
	itemAdded->bIsRotated = bIsItemRotated;
	itemAdded->itemsInStack = itemCount;
	
	FString itemClassName = itemAdded->GetClass()->GetName();

	//Add to Item information to track how many exists
	IncreaseItemCount(itemCount, itemAdded);	
		
		
	FString base = "Item class name is";
	FString message = base.Append(itemClassName);
	
	UE_LOG(LogTemp, Log, TEXT("String %s"), *message) 
	
	MarkSlotsAsOccupied(itemAdded, itemAdded->bIsRotated);
	OnItemAdded.Broadcast(itemAdded);
}
void UPlayerInventorySubsystem::IncreaseItemCount(int itemCountToAdd, UNewInventoryItem* itemAdded)
{
	FString itemClassName = itemAdded->GetClass()->GetName();
	if (itemInformation.Contains(itemClassName))
	{
		FItemInfo itemInfo = itemInformation[itemClassName];
		itemInfo.itemCount = itemInfo.itemCount + itemCountToAdd;
		itemInformation.Add(itemClassName, itemInfo); //Because there can only be one of a key in a tmap, this essentially replaces the key
	}
	else
	{
		FItemInfo itemInfo;
		itemInfo.itemCount = itemCountToAdd;
		itemInformation.Add(itemClassName, itemInfo);
	}
	OnItemInfoUpdated.Broadcast(itemAdded);
}
//What we have to do here is simple. Loop through the inventory and reduce the amount of items by the specified amount. 
//If any item stack is discovered and it is less than, remove it from the inventory. Otherwhise just increment it by decreasing it.
// bool UPlayerInventorySubsystem::TryRemoveItemsFromInventory(TSubclassOf<UNewInventoryItem> itemClass, int itemCount)
// {
// 	return false;
// }
bool UPlayerInventorySubsystem::AddSpecialItemToInventory(USpecialItem* itemAdded)
{
	if (itemAdded->IsA(UKeyItem::StaticClass()))
	{
		UKeyItem* keyItemAdded = Cast<UKeyItem>(itemAdded);
		keyItems.Add(keyItemAdded);
		OnKeyItemAdded.Broadcast(keyItemAdded, keyItems.Num() - 1);
		return true;
	}
	else if (itemAdded->IsA(USpecialItem::StaticClass()))
	{
		UTreasureItem* treasureItemAdded = Cast<UTreasureItem>(itemAdded);
		treasureItems.Add(treasureItemAdded);
		OnTreasureItemAdded.Broadcast(treasureItemAdded, keyItems.Num() - 1);
		return true;
	}
	return false;
}
bool UPlayerInventorySubsystem::CheckIfItemFitsSlot(FVector2D itemPosition, FVector2D itemSize, bool bIsRotated, UNewInventoryItem* itemToAdd)
{
	if (bIsRotated)
	{
		//Initial Check to make sure we're not checking slots outside the inventory, or slots the item is too large to fit inside
		if (itemPosition.X < itemSize.Y - 1 || itemPosition.Y + itemSize.X > GetInventorySize().Y || itemPosition.X >= GetInventorySize().X || itemPosition.Y < 0)
			return false;
	}
	else
	{
		//Initial Check to make sure we're not checking slots outside the inventory, or slots the item is too large to fit inside
		if (itemPosition.X + itemSize.X > GetInventorySize().X || itemPosition.Y + itemSize.Y > GetInventorySize().Y || itemPosition.X < 0 || itemPosition.Y < 0)
			return false;
	}
 		
	int lastIndex;
	TArray<int> slotsToMark;
	slotsToMark.Init(1, 1);
		
	GetSlotsToMark(itemSize, itemPosition, slotsToMark, lastIndex, bIsRotated);
	for (int slotToMark : slotsToMark)
	{
		if (inventorySlots[slotToMark].bIsOccupied)
			return false;
	}

	return true;
}

int UPlayerInventorySubsystem::GetAmountOfItemType(TSubclassOf<UNewInventoryItem> itemClass)
{
	FString itemClassName = itemClass.Get()->GetName();
	if (itemInformation.Contains(itemClassName))
	{
	 	return itemInformation[itemClassName].itemCount;
	}
	else 
		return 0;
	
}


void UPlayerInventorySubsystem::ClearInventorySlot(int index, UImageWidget* imageWidget)
{
	FInventorySlot inventorySlot;
	inventorySlot.imageWidget = imageWidget;
	inventorySlots[index] = inventorySlot;
}

// void UPlayerInventorySubsystem::ClearInventorySlot(int index, UImageWidget* imageWidget)
// {
// 	UKismetArrayLibrary::Array_Set()
// 	newInventorySlots[].
// }

bool UPlayerInventorySubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (this->GetClass()->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer))
		return true;
	else return false;
}

void UPlayerInventorySubsystem::ClearInventorySlots(FVector2D itemSize, FVector2D itemPosition, bool bIsRotated)
{
	TArray<int> slotsToMark;
	int lastIndex;
	GetSlotsToMark(itemSize, itemPosition, slotsToMark, lastIndex, bIsRotated);
	for (int slot : slotsToMark)
	{
		UImageWidget* imageWidget = inventorySlots[slot].imageWidget;
		ClearInventorySlot(slot, imageWidget);
		if (IsValid(imageWidget))
			imageWidget->Image->SetBrushTintColor(FLinearColor(0.0f, 1.0f, 0.0f, 1.0f));
	}
}
//As simple as that. Unreal automatically deletes unreferenced UObjects so provided that there's no rogue references to the object, it will be deleted by the garbage collector
void UPlayerInventorySubsystem::RemoveItemFromInventory(UNewInventoryItem* itemToRemove)
{
	ClearInventorySlots(itemToRemove->ItemSize, itemToRemove->ItemPosition, itemToRemove->bIsRotated);
	OnItemRemoved.Broadcast(itemToRemove);
}
void UPlayerInventorySubsystem::MarkSlotsAsOccupied(UNewInventoryItem* itemAdded, bool bIsRotated)
{
	TArray<int> slotsMarked;
	FVector2D inventorySize =  GetInventorySize();
	FIntVector2 _itemSize = FIntVector2(itemAdded->ItemSize.X, itemAdded->ItemSize.Y);
	FIntVector2 _inventoryPosition = FIntVector2(itemAdded->ItemPosition.X, itemAdded->ItemPosition.Y);
	FIntVector2 _inventorySize = FIntVector2(inventorySize.X, inventorySize.Y);

	if (bIsRotated)
	{
		for (int y = _inventoryPosition.Y; y < _inventoryPosition.Y + _itemSize.X; y++)
		{
			for (int x = _inventoryPosition.X - (_itemSize.Y - 1); x <= _inventoryPosition.X; x++)
			{
				int slotIndex = x + (y * _inventorySize.X);

				inventorySlots[slotIndex].bIsOccupied = true;
				inventorySlots[slotIndex].itemInSlot = itemAdded;
	
				UImageWidget* ImageWidget = inventorySlots[slotIndex].imageWidget;
				if (IsValid(ImageWidget))
					ImageWidget->Image->SetBrushTintColor(FLinearColor(1, 0, 0, 1));
			}
		}
	}
	else
	{
		for (int y = _inventoryPosition.Y; y < _inventoryPosition.Y + _itemSize.Y; y++)
		{
			for (int x = _inventoryPosition.X; x < _inventoryPosition.X + _itemSize.X; x++)
			{
				int slotIndex = x + (y * _inventorySize.X);

				inventorySlots[slotIndex].bIsOccupied = true;
				inventorySlots[slotIndex].itemInSlot = itemAdded;
	
				UImageWidget* ImageWidget = inventorySlots[slotIndex].imageWidget;
				if (IsValid(ImageWidget))
					ImageWidget->Image->SetBrushTintColor(FLinearColor(1, 0, 0, 1));
			}
		} 
	}
	

}
void UPlayerInventorySubsystem::MarkSlotsAsOccupiedOrNot(FIntVector2 startPos, FVector2D dimensions, bool isOccupied)
{
	for (int y = startPos.Y; y < startPos.Y + dimensions.Y; y++)
	{
		for (int x = startPos.X; x < startPos.X + dimensions.X; x++)
		{
			isSlotOccupiedArray.SetIndexValue(isOccupied, x, y);
		}
	}
}
bool UPlayerInventorySubsystem::TryGetKeyItemAtIndex(int index, UKeyItem*& keyItem)
{
	if (keyItems.Num() > index)
	{
		keyItem = keyItems[index];
		return true;
	}
	else return false;
}
FInventorySlot UPlayerInventorySubsystem::GetInventorySlot(int x, int y)
{
	int index = GetInventorySize().X * y + x;
	return inventorySlots[index];
}
