// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GeneralUtilities.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API UGeneralUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/** 
	 * Check whether an actor is in front of another
	 *
	 * @param		actor				The actor you want to check to see if it's in front of another
	 * @param		inFrontOfActor		The actor you want so see if the other actor is in front of. 
	 * @return		true if actor is in front of the second actor in the params list 
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GeneralUtilities")
	static bool IsActorInFront(AActor* actor, AActor* inFrontOfActor);
	
	/** 
	 * Checks if a specified world position is on the player's screen
	 *
	 * @param		playerController	The controller for the player whose screen is supposed to be checked
	 * @param		positionToCheck		The position to check whether it is on the player screen 
	 * @return		true if the point is located on the player's screen
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GeneralUtilities")
	static bool CheckIfPositionOnScreen(APlayerController* playerController, FVector positionToCheck);
	
	/** 
	 * This function takes in an array of actors and returns the one which is closest to the specified position
	 *
	 * @param		actors			The array of actors from which you want to get the closest position
	 * @param		closestTo		The position which you want to get the actor closest to
	 * @return		the actor which is closest to the specified position 
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GeneralUtilities")
	static AActor* FindClosestActor(TArray<AActor*> actors, FVector closestTo);
};

