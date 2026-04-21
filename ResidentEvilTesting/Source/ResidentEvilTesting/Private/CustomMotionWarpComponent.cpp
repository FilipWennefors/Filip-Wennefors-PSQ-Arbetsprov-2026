// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomMotionWarpComponent.h"


// Sets default values for this component's properties
UCustomMotionWarpComponent::UCustomMotionWarpComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

FTransform UCustomMotionWarpComponent::GetMotionWarpTarget(FName targetName, bool& bHasSucceeded)
{
	if (WarpTargets.Contains(targetName))
	{
		bHasSucceeded = true;
		return WarpTargets[targetName];
	}
	else
	{
		bHasSucceeded = false;
		return FTransform(FRotator::ZeroRotator, FVector::ZeroVector, FVector::ZeroVector);
	}
}
void UCustomMotionWarpComponent::SetMotionWarpTarget(FName targetName, FTransform targetTransform)
{
	WarpTargets.Add(targetName, targetTransform);

}
// Called when the game starts
void UCustomMotionWarpComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UCustomMotionWarpComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                               FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

