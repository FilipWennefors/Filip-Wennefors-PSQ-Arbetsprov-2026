// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceInvadersGameMode.h"

#include "SpaceInvader.h"
#include "SpaceInvadersCameraManager.h"
#include "Blueprint/WidgetLayoutLibrary.h"

void ASpaceInvadersGameMode::SpawnInvaders(UClass* InvadersBlueprint, int horizontalInvadersCount, int verticalInvadersCount, float distBetweenInvaders, float InvadersVerticalSpawnPos, TArray<AActor*>& spawnedInvaders, float distFromCamera)
{
	InvadersKilled = 0;
	//Spawn The invaders
	for (int i = 0; i < horizontalInvadersCount * verticalInvadersCount; i++)
	{
		FActorSpawnParameters spawnParameters;
		spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	    AActor* spawnedInvader = GetWorld()->SpawnActor<AActor>(InvadersBlueprint, spawnParameters);
		
		spawnedInvaders.Add(spawnedInvader);
	}
	//Get Dimensions
	FVector origin;
	FVector boxExtent;
	spawnedInvaders[0]->GetActorBounds(false, origin, boxExtent);
	FVector bounds = boxExtent * 2; //GetActorBounds provides half the actor size instead of the entire actor size, which is what I originally expected. Setting to double for more logical results
	FVector boundsOrigin = origin;

	//Get the middle of the screen in world space
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();

	UWidgetLayoutLibrary::GetViewportSize()
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	PlayerController->DeprojectScreenPositionToWorld(ViewportSize.X / 2, 0.f, worldLocation, worldDirectionNormalized);

	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, 0.f, worldDirectionNormalized.Z * triangleWidthToOneMultiplier);
	
	FVector worldDirection = WorldDirectionWithWidthOfOne * distFromCamera;

	FVector screenMiddlePosInWorldSpace = worldLocation + worldDirection;
	
	//Move Invaders into correct Position
	float invadersWidth = (bounds.Y + distBetweenInvaders) * horizontalInvadersCount - distBetweenInvaders;
	float startPos = -(invadersWidth / 2 - bounds.Y / 2) - screenMiddlePosInWorldSpace.Y;

	for (int a = 0; a < verticalInvadersCount; a++)
	{
		for (int b = 0; b < horizontalInvadersCount; b++)
		{
			float indicatorWidth = bounds.Y;

			FVector newLocation =  FVector(screenMiddlePosInWorldSpace.X, startPos + (distBetweenInvaders + indicatorWidth) * b, InvadersVerticalSpawnPos - (distBetweenInvaders + indicatorWidth) * a);
			
			spawnedInvaders[b + horizontalInvadersCount * a]->SetActorLocation(newLocation, false, nullptr);
		}
	}
}
void ASpaceInvadersGameMode::MoveInvadersV2(float moveSpeed, float moveDirection, float& moveDirOut, int horizontalInvadersCount, int verticalInvadersCount, float distFromCamera, float deltaTime, TArray<AActor*> invaders)
{
	if (invaders.Num() <= 0)
		return;
	if (moveDirection == 1.0f)
	{
		AActor* invaderFarthestToRight = GetInvaderFarthestToRight(horizontalInvadersCount, verticalInvadersCount, invaders);
		if (IsValid(invaderFarthestToRight))
		{
			FVector ScreenRightCornerPos = ASpaceInvadersCameraManager::GetRightCornerPosInWorldSpace(distFromCamera);
			FVector invaderFarthestRightLocation = invaderFarthestToRight->GetActorLocation();
			if (invaderFarthestRightLocation.Y >= ScreenRightCornerPos.Y)
			{
				moveDirOut = -1.0f;
				for (AActor* invader : invaders) 	//This is apparently how foreach loops look in c++, C# syntax much better
				{
					if (IsValid(invader))
						invader->AddActorLocalOffset(FVector(0.f, 0.f, -50.f), false, nullptr, ETeleportType::TeleportPhysics);
				}
			}
			else
				moveDirOut = moveDirection;
		}
	}
	else
	{
		AActor* invaderFarthestToLeft = GetInvaderFarthestToLeft(horizontalInvadersCount, verticalInvadersCount, invaders);
		if (IsValid(invaderFarthestToLeft))
		{
			FVector leftCornerPos = ASpaceInvadersCameraManager::GetLeftCornerPosInWorldSpace(distFromCamera);
			FVector invaderFarthestLeftLocation = invaderFarthestToLeft->GetActorLocation();
			if (invaderFarthestLeftLocation.Y <= leftCornerPos.Y)
			{
				moveDirOut = 1.0f;
				for (AActor* invader : invaders)
				{
					if (IsValid(invader))
						invader->AddActorLocalOffset(FVector(0.f, 0.f, -50.f), false, nullptr, ETeleportType::TeleportPhysics);
				}
			}
			else
				moveDirOut = moveDirection;
		}
	}
	//Finally move invaders sideways
	float positionToAdd = moveSpeed * moveDirection * deltaTime;
	for (AActor* invaderToMove : invaders)
	{
		if (IsValid(invaderToMove))
		{
			FVector invaderCurrentLocation = invaderToMove->GetActorLocation();
			invaderToMove->AddActorLocalOffset(FVector(0.f, positionToAdd, 0.f), false, nullptr, ETeleportType::TeleportPhysics);
		}
	}
}
/*What we gotta do in these functions is the following
 *Loop through each invader from right to left to see if an invader was detected
 *Nested inside loop through each row. Check if the invader is dead or not
 * 
 */
AActor* ASpaceInvadersGameMode::GetInvaderFarthestToLeft(int horizontalInvadersCount, int verticalInvadersCount, TArray<AActor*> invaders)
{
	//So we don't crash the engine if method called before invaders spawned
	if (invaders.Num() <= 0)
		return nullptr;

	for (int h = 0; h < horizontalInvadersCount; h++)
	{
		for (int v = 0; v < verticalInvadersCount; v++)
		{
			AActor* invaderToValidate = invaders[h + v * horizontalInvadersCount];
			if (IsValid(invaderToValidate))
			{
				Cast<ASpaceInvader>(invaderToValidate)->invaderMesh->SetMaterial(0, BlueMaterial);
				return invaderToValidate;
			}
		}
	}
	return nullptr;
}
AActor* ASpaceInvadersGameMode::GetInvaderFarthestToRight(int horizontalInvadersCount, int verticalInvadersCount, TArray<AActor*> invaders)
{
	//So we don't crash the engine if method called before invaders spawned
	if (invaders.Num() <= 0)
		return nullptr;
	for (int h = horizontalInvadersCount; h >= 0; h--)
	{
		for (int v = 1; v <= verticalInvadersCount; v++)
		{
			AActor* invaderToValidate = invaders[h * v - 1];
			if (IsValid(invaderToValidate))
			{
				Cast<ASpaceInvader>(invaderToValidate)->invaderMesh->SetMaterial(0, RedMaterial);
				return invaderToValidate;
			}	
		}
	}
	return nullptr;
}
bool ASpaceInvadersGameMode::AllInvadersKilled(int horizontalInvadersCount, int verticalInvadersCount)
{
	if (horizontalInvadersCount * verticalInvadersCount == InvadersKilled)
		return true;
	else
		return false;

}
void ASpaceInvadersGameMode::ResetGameState(TArray<AActor*> SpawnedInvaders, TArray<AActor*> SpawnedBarracks)
{

	
	ResetLevel();
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	APawn* playerPawn = PlayerController->GetPawn();
	
	if (!IsValid(playerPawn))
	{
		if (PlayerController->CanRestartPlayer())
		{
			RestartPlayer(PlayerController);
		}
	}
	if (SpawnedInvaders.Num() > 0 && SpawnedBarracks.Num() > 0)
	{
		for (AActor* actorToDestroy : SpawnedInvaders)
		{
			if (IsValid(actorToDestroy))
			{
				actorToDestroy->Destroy();
			}
		}
		for (AActor* actorToDestroy : SpawnedBarracks)
		{
			if (IsValid(actorToDestroy))
			{
				actorToDestroy->Destroy();
			}
		}
	}
	/*	What we need to do next is the following:
	 *	Loop Through and destroy all spawned invaders and barracks
	 *	Respawn the player if the player has been destroyed
	 *	Spawn All barracks and invaders.
	 *
	 *	Spawning invaders and barracks will likely be done in 
	 * 
	 */
}
void ASpaceInvadersGameMode::OnAllInvadersInvalid_Implementation()
{

}
void ASpaceInvadersGameMode::BeginPlay()
{
	ASpaceInvader::OnInvaderKilled.AddUObject(this, &ASpaceInvadersGameMode::OnInvaderKilled);
	Super::BeginPlay();
}
void ASpaceInvadersGameMode::OnInvaderKilled(float score)
{
	InvadersKilled++;
}
#pragma region Potentially Obsolete functions
//OBSOLETE
/*void ASpaceInvadersGameMode::CheckIfInvadersCanMoveSideways(int horizontalInvadersCount, int verticalInvadersCount, float moveSpeed, float moveDirection, float deltaTime, TArray<AActor*> invaders)
{
	for (int v = 0; v < verticalInvadersCount; v++)
		for (int h = 1; h <= horizontalInvadersCount; h++)
		{
			AActor* invaderToValidate = invaders[v * h];
			if (invaderToValidate != nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("Invader In Array is: %d, %d"), v, h)
				break;
			}
		}
}*/

void ASpaceInvadersGameMode::MoveInvaders(float moveSpeed, float moveDirection, float deltaTime, TArray<AActor*> spawnedInvaders)
{
	if (spawnedInvaders.Num() <= 0)
		return;

	
	moveDirection = FMath::Clamp(moveDirection, -1.0f, 1.0f);
	float positionToAdd = moveSpeed * moveDirection * deltaTime;

	
	
	//This is apparently how foreach loops look in c++, C# syntax much better
	for (AActor* invaderToMove : spawnedInvaders)
	{
		if (IsValid(invaderToMove))
		{
			FVector invaderCurrentLocation = invaderToMove->GetActorLocation();
			invaderToMove->AddActorLocalOffset(FVector(0.f, positionToAdd, 0.f), false, nullptr, ETeleportType::TeleportPhysics);
		}
	}
}
/*FVector ASpaceInvadersGameMode::GetLeftCornerPosInWorldSpace(float distFromCamera)
{
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	PlayerController->DeprojectScreenPositionToWorld(0,ViewportSize.Y / 2, worldLocation, worldDirectionNormalized);


	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, worldDirectionNormalized.Y * triangleWidthToOneMultiplier, 0.f);
	
	FVector worldDirection = WorldDirectionWithWidthOfOne * distFromCamera;

	FVector screenMiddlePosInWorldSpace = worldLocation + worldDirection;
	
	
	return screenMiddlePosInWorldSpace;
}
FVector ASpaceInvadersGameMode::GetRightCornerPosInWorldSpace(float distFromCamera)
{
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	PlayerController->DeprojectScreenPositionToWorld(ViewportSize.X,ViewportSize.Y / 2, worldLocation, worldDirectionNormalized);


	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, worldDirectionNormalized.Y * triangleWidthToOneMultiplier, 0.f);
	
	FVector worldDirection = WorldDirectionWithWidthOfOne * distFromCamera;

	FVector screenMiddlePosInWorldSpace = worldLocation + worldDirection;
	
	
	return screenMiddlePosInWorldSpace;
}
void ASpaceInvadersGameMode::GetScreenRightCornerInWorldSpace(FVector& ScreenRightCornerInWorldSpace, float distFromCamera)
{
	/* Step 1: Get the right corner position
	 * Calculate vector pointing towards right corner
	 * 
	 * 
	 #1#
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	if (PlayerController == nullptr)
		UE_LOG(LogTemp, Warning, TEXT("Player Controller is null"));
	
	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	if (PlayerController->DeprojectScreenPositionToWorld(0.f, 0.f, worldLocation, worldDirectionNormalized))
	{
		UE_LOG(LogTemp, Warning, TEXT("UNABLE TO DETERMINE POS"));
	}

	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, worldDirectionNormalized.Z * triangleWidthToOneMultiplier, 0.f );
	
	FVector worldDirection = WorldDirectionWithWidthOfOne * distFromCamera;

	FVector screenRightCornerInWorldSpace = worldLocation + worldDirection;
}*/
//Probably not necessary as spawn invaders seems to do basically the same for them
/*void ASpaceInvadersGameMode::SpawnBarracks(UClass* barracksBlueprint, int barracksCount, float distBetweenBarracks, float barracksVerticalSpawnPos)
{
	//Spawn Barracks
	for (int i = 0; i < barracksCount; i++)
	{
		FActorSpawnParameters spawnParameters;
		spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		GetWorld()->SpawnActor<ABarracks>(barracksBlueprint, spawnParameters);
	}
	//Move Into Position
	for (int i = 0; i < barracksCount; i++)
	{
		
	}
}

void ASpaceInvadersGameMode::TestSpawnCubesInVerticalFormation(UClass* spawnCube, float verticalCubes, float horizontalCubes, float distBetweenCubes, TArray<AActor*>& spawnedInvaders)
{
	for (int i = 0; i < horizontalCubes * verticalCubes; i++)
	{
		FActorSpawnParameters spawnParameters;
		spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		AActor* spawnedInvader = GetWorld()->SpawnActor<AActor>(spawnCube, spawnParameters);
		spawnedInvaders.Add(spawnedInvader);
	}
	for (int a = 0; a < verticalCubes; a++)
	{
		for (int b = 0; b < horizontalCubes; b++)
		{
			
			spawnedInvaders[b + (horizontalCubes) * a]->SetActorLocation(FVector(0, b * distBetweenCubes,  a * distBetweenCubes), false, nullptr);
		}
	}
}*/
/*void ASpaceInvadersGameMode::GetScreenMiddleInWorldSpaceVersionForRight(FVector& worldDirection, FVector& screenMiddlePosInWorldSpace, FVector& direction, float distFromCamera)
{
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	PlayerController->DeprojectScreenPositionToWorld(0.f, ViewportSize.Y, worldLocation, worldDirectionNormalized);

	//What we need to do next is the following: Extend the length of the triangle to be distance from the camera
	//Divide 1 by triangle width in order to get how much larger the triangle needs to be
	//Multiply width and height.

	//Double check so the dimensions are correct using trig and the angle


	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, 0.f, worldDirectionNormalized.Z * triangleWidthToOneMultiplier);
	direction = WorldDirectionWithWidthOfOne;

	


	
	worldDirection = worldDirectionNormalized;
	screenMiddlePosInWorldSpace = worldLocation + direction * distFromCamera;
}
void ASpaceInvadersGameMode::GetScreenRightSideInWorldSpaceVersion2(FVector& worldDirection, FVector& screenMiddlePosInWorldSpace, FVector& direction, float distFromCamera)
{
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	if (PlayerController->DeprojectScreenPositionToWorld(0.f, ViewportSize.Y, worldLocation, worldDirectionNormalized))
		UE_LOG(LogTemp, Warning, TEXT("UNABLE TO DETERMINE POS"));

	//What we need to do next is the following: Extend the length of the triangle to be distance from the camera
	//Divide 1 by triangle width in order to get how much larger the triangle needs to be
	//Multiply width and height.

	//Double check so the dimensions are correct using trig and the angle


	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, 0.f, worldDirectionNormalized.Z * triangleWidthToOneMultiplier);
	direction = WorldDirectionWithWidthOfOne;

	


	
	worldDirection = worldDirectionNormalized;
	screenMiddlePosInWorldSpace = worldLocation + direction * distFromCamera;
}*/
void ASpaceInvadersGameMode::GetScreenMiddleInWorldSpace(FVector& worldDirection, FVector& screenMiddlePosInWorldSpace, FVector& direction, float distFromCamera)
{
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	PlayerController->DeprojectScreenPositionToWorld(0.f, ViewportSize.Y, worldLocation, worldDirectionNormalized);

	//What we need to do next is the following: Extend the length of the triangle to be distance from the camera
	//Divide 1 by triangle width in order to get how much larger the triangle needs to be
	//Multiply width and height.

	//Double check so the dimensions are correct using trig and the angle


	float triangleWidthToOneMultiplier = 1 / worldDirectionNormalized.X;
	FVector WorldDirectionWithWidthOfOne = FVector(1, 0.f, worldDirectionNormalized.Z * triangleWidthToOneMultiplier);
	direction = WorldDirectionWithWidthOfOne;

	


	
	worldDirection = worldDirectionNormalized;
	screenMiddlePosInWorldSpace = worldLocation + direction * distFromCamera;
}
float ASpaceInvadersGameMode::GetInvadersWidth(float invadersHorizontalBounds, float distBetweenInvaders, int64 invadersCount)
{
	
	UE_LOG(LogTemp, Warning, TEXT("HorizontalBounds: %f, distBetweenInvaders: %f, invadersCount: %lld"), invadersHorizontalBounds, distBetweenInvaders, invadersCount)
	//return invadersHorizontalBounds + (distBetweenInvaders + invadersHorizontalBounds * 2 * invadersCount - 1);
	return (distBetweenInvaders + invadersHorizontalBounds * invadersCount);
}

void ASpaceInvadersGameMode::GetScreenKeyDimensionsInCamSpace(FVector& leftCubeWorldLocation, FVector& rightCubeWorldLocation, FVector& leftCubeWorldDirection, FVector& rightCubeWorldDirection)
{
	
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	PlayerController->DeprojectScreenPositionToWorld(0.f, 0.f, leftCubeWorldLocation, leftCubeWorldDirection);

	PlayerController->DeprojectScreenPositionToWorld(ViewportSize.X, 0.f, rightCubeWorldLocation, rightCubeWorldDirection);

}
FVector ASpaceInvadersGameMode::GetScreenMiddlePosInWorldSpace(float distFromCamera)
{
	FVector2D ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	FVector worldLocation;
	FVector worldDirectionNormalized;
	
	PlayerController->DeprojectScreenPositionToWorld(ViewportSize.X / 2, 0.f, worldLocation, worldDirectionNormalized);

	FVector worldDirection = worldDirectionNormalized * distFromCamera;

	return worldLocation + worldDirection;
}
FVector ASpaceInvadersGameMode::GetInvadersSpawnStartPos(float invadersHorizontalBounds, float distBetweenInvaders, int64 invadersCount, float distFromCamera)
{
	FVector ScreenMiddle = GetScreenMiddlePosInWorldSpace(distFromCamera);

	float InvadersWidth = GetInvadersWidth(invadersHorizontalBounds, distBetweenInvaders, invadersCount);
	FVector invadersSpawnStartPos = FVector(ScreenMiddle.X, ScreenMiddle.Y - (InvadersWidth + (invadersHorizontalBounds + distBetweenInvaders) / 2), ScreenMiddle.Z);

	return invadersSpawnStartPos;
}
//Seems to work now
void ASpaceInvadersGameMode::MoveInvadersIntoCorrectPos(TArray<AActor*> spawnedInvaders, float invadersHorizontalBounds, float distBetweenInvaders, int64 invadersCount, FVector screenMiddlePos)
{
	float invadersWidth = (invadersHorizontalBounds + distBetweenInvaders) * invadersCount - distBetweenInvaders;
	float startPos = -(invadersWidth / 2 - invadersHorizontalBounds / 2) - screenMiddlePos.Y;
	
	for (int i = 0; i < invadersCount; i++)
	{
		float indicatorWidth = invadersHorizontalBounds;

		FVector newLocation =  FVector(screenMiddlePos.X, startPos + (distBetweenInvaders + indicatorWidth) * i, screenMiddlePos.Z);
		
		
		spawnedInvaders[i]->SetActorLocation(newLocation, false, nullptr);
	}
}

float ASpaceInvadersGameMode::CalcActualInvadersWidth(float invadersHorizontalBounds, float distBetweenInvaders, int64 invadersCount, float distFromCamera, FVector& MiddlePos, FVector& StartPos, float& cornerPos)
{
	float invadersWidth = (invadersHorizontalBounds + distBetweenInvaders) * invadersCount - distBetweenInvaders;
	float startPos = invadersWidth / 2 - invadersHorizontalBounds / 2;

	cornerPos = startPos;

	


	// FVector ScreenMiddle = GetScreenMiddlePosInWorldSpace(distFromCamera);
	// MiddlePos = ScreenMiddle;
	// float invadersWidth = (invadersHorizontalBounds + distBetweenInvaders) * invadersCount;
	// float invadersStartPos =(invadersWidth + invadersHorizontalBounds + distBetweenInvaders) / 2;
	//
	// StartPos = FVector(ScreenMiddle.X, ScreenMiddle.Y + invadersStartPos, ScreenMiddle.Z);
	return (invadersHorizontalBounds + distBetweenInvaders) * invadersCount - distBetweenInvaders;

	
}

/*APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();


PlayerController->DeprojectScreenPositionToWorld()
FVector2f viewportCenter = GEngine->GameViewport->Viewport->GetSizeXY();


FVector worldLocation;
FVector worldDirectionNormalized;
PlayerController->DeprojectScreenPositionToWorld(viewportCenter.X,viewportCenter.Y, worldLocation, worldDirectionNormalized);

FVector worldDirection = worldDirectionNormalized * distFromCamera;
screenCenter = worldLocation + worldDirection;*/
#pragma endregion