// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SpaceInvadersCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERSV2_API ASpaceInvadersCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
	public:
	UFUNCTION(BlueprintCallable, Category = "SpaceInvadersCameraManager", meta = (AllowPrivateAccess = "true"))
	static FVector GetLeftCornerPosInWorldSpace(float distFromCamera);
	
	UFUNCTION(BlueprintCallable, Category = "SpaceInvadersCameraManager", meta = (AllowPrivateAccess = "true"))
	static FVector GetRightCornerPosInWorldSpace(float distFromCamera);
	
};
