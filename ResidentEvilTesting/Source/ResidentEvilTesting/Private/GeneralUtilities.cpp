// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneralUtilities.h"

#include "Kismet/GameplayStatics.h"

bool UGeneralUtilities::IsActorInFront(AActor* actor, AActor* inFrontOfActor)
{
	//How this works is the following. If the actor has a positional x value above 0 relative to the other, it is in front of it, otherwhise it is behind it.
	FTransform actorTransform = actor->GetTransform();
	FTransform relativeToTransform = inFrontOfActor->GetTransform();
	FTransform otherActorRelativeTransform = actorTransform.GetRelativeTransform(relativeToTransform);
	return otherActorRelativeTransform.GetLocation().X >= 0.f;
}

bool UGeneralUtilities::IsActorOnScreen(AActor* actor)
{
	return false;
}
bool UGeneralUtilities::CheckIfPointOnScreen(APlayerController* playerController, FVector pointToCheck)
{
	FVector2D pointOnScreen;
	FVector2D viewportSize = GEngine->GameViewport->Viewport->GetSizeXY();
	playerController->ProjectWorldLocationToScreen(pointToCheck, pointOnScreen, true);
	//If the point location on screen is not further than the viewport size, then it is on screen
	//Likewhise if any of the points are 0, then it is not on screen
	if (pointOnScreen.X > 0 && pointOnScreen.X < viewportSize.X && pointOnScreen.Y > 0 && pointOnScreen.Y < viewportSize.Y)
		return true;
	else
		return false;	
}

AActor* UGeneralUtilities::FindClosestActor(TArray<AActor*> actors, FVector closestTo)
{
	/* Works like this. Start off by getting the last actor in the array
	 * Then compare each actor to see which is farther from the last actor's distance from the position.
	 * If it is closer we have a new closest actor. Finally after all actors have been checked the closest actor has been determined
	 */
	AActor* closestActor = actors.Last();
	float closestActorDistTo = FVector::Distance(closestTo, closestActor->GetActorLocation());
	for (AActor* actor : actors)
	{
		float actorDistToPlayer = FVector::Distance(closestTo, actor->GetActorLocation());
		if (actorDistToPlayer < closestActorDistTo)
		{
			closestActor = actor;
			closestActorDistTo = actorDistToPlayer;
		}
	}
	return closestActor;
}
