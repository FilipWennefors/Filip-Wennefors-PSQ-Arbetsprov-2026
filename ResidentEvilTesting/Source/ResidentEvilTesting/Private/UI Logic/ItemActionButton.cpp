// Fill out your copyright notice in the Description page of Project Settings.


#include "UI Logic/ItemActionButton.h"

void UItemActionButton::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	
	//Because apparently you cannot make one delegate called another without an intermediate function
	Button->OnClicked.AddDynamic(this, &UItemActionButton::CallOnClicked);
	Button->OnPressed.AddDynamic(this, &UItemActionButton::CallOnPressed);
	Button->OnReleased.AddDynamic(this, &UItemActionButton::CallOnReleased);
	Button->OnHovered.AddDynamic(this, &UItemActionButton::CallOnHovered);
	Button->OnUnhovered.AddDynamic(this, &UItemActionButton::CallOnUnhovered);
}

void UItemActionButton::NativeDestruct()
{
	Button->OnClicked.RemoveDynamic(this, &UItemActionButton::CallOnClicked);
	Button->OnPressed.RemoveDynamic(this, &UItemActionButton::CallOnPressed);
	Button->OnReleased.RemoveDynamic(this, &UItemActionButton::CallOnReleased);
	Button->OnHovered.RemoveDynamic(this, &UItemActionButton::CallOnHovered);
	Button->OnUnhovered.RemoveDynamic(this, &UItemActionButton::CallOnUnhovered);
	
	Super::NativeDestruct();
}
void UItemActionButton::CallOnClicked()
{
	OnClicked.Broadcast();
}
void UItemActionButton::CallOnPressed()
{
	OnPressed.Broadcast();
}
void UItemActionButton::CallOnReleased()
{
	OnReleased.Broadcast();
}
void UItemActionButton::CallOnHovered()
{
	OnHovered.Broadcast();
}
void UItemActionButton::CallOnUnhovered()
{
	OnUnhovered.Broadcast();
}