// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceInvadersCameraManager.h"
FVector ASpaceInvadersCameraManager::GetLeftCornerPosInWorldSpace(float distFromCamera)
{
	
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GEngine->GameViewport->GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	PlayerController->DeprojectScreenPositionToWorld(0,ViewportSize.Y / 2, worldLocation, worldDirectionNormalized);


	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, worldDirectionNormalized.Y * triangleWidthToOneMultiplier, 0.f);
	
	FVector worldDirection = WorldDirectionWithWidthOfOne * distFromCamera;

	FVector screenMiddlePosInWorldSpace = worldLocation + worldDirection;
	
	
	return screenMiddlePosInWorldSpace;
}
FVector ASpaceInvadersCameraManager::GetRightCornerPosInWorldSpace(float distFromCamera)
{
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GEngine->GameViewport->GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	PlayerController->DeprojectScreenPositionToWorld(ViewportSize.X,ViewportSize.Y / 2, worldLocation, worldDirectionNormalized);


	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, worldDirectionNormalized.Y * triangleWidthToOneMultiplier, 0.f);
	
	FVector worldDirection = WorldDirectionWithWidthOfOne * distFromCamera;

	FVector screenMiddlePosInWorldSpace = worldLocation + worldDirection;
	
	
	return screenMiddlePosInWorldSpace;
}
