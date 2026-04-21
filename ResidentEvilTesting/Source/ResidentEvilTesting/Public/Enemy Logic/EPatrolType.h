// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPatrolType.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EPatrolType : uint8
{
	StandStill,
	PatrolRadius,
	PatrolSplinePath,
	NONE
};