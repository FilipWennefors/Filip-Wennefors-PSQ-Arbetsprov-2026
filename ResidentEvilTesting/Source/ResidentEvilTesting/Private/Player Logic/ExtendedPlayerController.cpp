// Fill out your copyright notice in the Description page of Project Settings.

#include "Player Logic/ExtendedPlayerController.h"

// void AExtendedPlayerController::GetPlayerInventorySubsystem()
// {
// 	// UPlayerInventorySubsystem* PlayerInventorySubsystem = GetWorld()->GetSubsystem<UPlayerInventorySubsystem>();
//
// }
UPlayerInventorySubsystem* AExtendedPlayerController::GetPlayerInventorySubsystem()
{
	return GetGameInstance()->GetSubsystem<UPlayerInventorySubsystem>();
}
