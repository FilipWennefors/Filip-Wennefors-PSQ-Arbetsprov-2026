// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/** This enum exists because the player can perform multiple d
 * 
 */
UENUM(BlueprintType)
enum class ETakedownType : uint8
{
	RoundhouseKick,
	GroundStab,
	Backstab,
	NONE
};
