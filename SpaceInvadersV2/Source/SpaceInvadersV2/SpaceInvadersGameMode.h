// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SpaceInvadersGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERSV2_API ASpaceInvadersGameMode : public AGameModeBase
{
GENERATED_BODY()

	public:
		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		void SpawnInvaders(UClass* InvadersBlueprint, int horizontalInvadersCount, int verticalInvadersCount, float distBetweenInvaders, float InvadersVerticalSpawnPos, TArray<AActor*>& spawnedInvaders, float distFromCamera);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		void MoveInvadersV2(float moveSpeed, float moveDirection, float& moveDirOut, int horizontalInvadersCount, int verticalInvadersCount, float distFromCamera, float deltaTime, TArray<AActor*> invaders);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		AActor* GetInvaderFarthestToLeft(int horizontalInvadersCount, int verticalInvadersCount, TArray<AActor*> invaders);
	
		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		AActor* GetInvaderFarthestToRight(int horizontalInvadersCount, int verticalInvadersCount, TArray<AActor*> invaders);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		bool AllInvadersKilled(int horizontalInvadersCount, int verticalInvadersCount);
	
		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		void ResetGameState(TArray<AActor*> SpawnedInvaders, TArray<AActor*> SpawnedBarracks);

		UFUNCTION(BlueprintNativeEvent, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		void OnAllInvadersInvalid();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;
		void OnInvaderKilled(float score);

private:
		int InvadersKilled;

#pragma region Potentially obsolete declarations
		//OBSOLETE
		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		void MoveInvaders(float moveSpeed, float moveDirection, float deltaTime, TArray<AActor*> invaders);

		// UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		// FVector GetLeftCornerPosInWorldSpace(float distFromCamera);
		
		// UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		// FVector GetRightCornerPosInWorldSpace(float distFromCamera);
	
		// UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		// void CheckIfInvadersCanMoveSideways(int horizontalInvadersCount, int verticalInvadersCount, float moveSpeed, float moveDirection, float deltaTime, TArray<AActor*> invaders);
		//
		// UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		// void GetScreenRightCornerInWorldSpace(FVector& ScreenRightCornerInWorldSpace, float distFromCamera);
		//
		// UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		// void GetScreenMiddleInWorldSpaceVersionForRight(FVector& worldDirection, FVector& screenMiddlePosInWorldSpace, FVector& direction, float distFromCamera);
		//
		// UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		// void GetScreenRightSideInWorldSpaceVersion2(FVector& worldDirection, FVector& screenMiddlePosInWorldSpace, FVector& direction, float distFromCamera);
	
		//UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		//void SpawnBarracks(UClass* barracksBlueprint, int barracksCount, float distBetweenBarracks, float barracksVerticalSpawnPos);
		
		//UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		//void TestSpawnCubesInVerticalFormation(UClass* spawnCube, float verticalCubes, float horizontalCubes, float distBetweenCubes, TArray<AActor*>& spawnedInvaders);
	
		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		void GetScreenMiddleInWorldSpace(FVector& worldDirection, FVector& screenMiddlePosInWorldSpace, FVector& direction, float distFromCamera);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		float GetInvadersWidth(float invadersHorizontalBounds, float distBetweenInvaders, int64 invadersCount);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		void GetScreenKeyDimensionsInCamSpace(FVector& leftCubeWorldLocation, FVector& rightCubeWorldLocation, FVector& leftCubeWorldDirection, FVector& rightCubeWorldDirection);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		FVector GetScreenMiddlePosInWorldSpace(float distFromCamera);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		FVector GetInvadersSpawnStartPos(float invadersHorizontalBounds, float distBetweenInvaders, int64 invadersCount, float distFromCamera);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		void MoveInvadersIntoCorrectPos(TArray<AActor*> spawnedInvaders, float invadersHorizontalBounds, float distBetweenInvaders, int64 invadersCount, FVector screenMiddlePos);

		UFUNCTION(BlueprintCallable, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		float CalcActualInvadersWidth(float invadersHorizontalBounds, float distBetweenInvaders, int64 invadersCount, float distFromCamera, FVector& MiddlePos, FVector& StartPos, float& cornerPos);

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		UMaterialInterface* RedMaterial;
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Space Invaders Game Mode", meta = (AllowPrivateAccess = "true"))
		UMaterialInterface* BlueMaterial;
		#pragma endregion
};

//https://stackoverflow.com/questions/31613832/converting-screen-2d-to-world-3d-coordinates
