// Fill out your copyright notice in the Description page of Project Settings.


#include "VisualizationBox.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"

// Sets default values for this component's properties
UVisualizationBox::UVisualizationBox()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVisualizationBox::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVisualizationBox::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FVector UVisualizationBox::GetLeftForwardBottomCornerPos() const
{
	return FVector(GetOwner()->GetActorLocation().X + boxDimensions.X + boxOffset.X, GetOwner()->GetActorLocation().Y - boxDimensions.Y + boxOffset.Y, GetOwner()->GetActorLocation().Z - boxDimensions.Z + boxOffset.Z);
}
FVector UVisualizationBox::GetRightForwardBottomCornerPos() const
{
	return FVector(GetOwner()->GetActorLocation().X + boxDimensions.X + boxOffset.X, GetOwner()->GetActorLocation().Y + boxDimensions.Y + boxOffset.Y, GetOwner()->GetActorLocation().Z - boxDimensions.Z + boxOffset.Z);
}
FVector UVisualizationBox::GetLeftBackwardBottomCornerPos() const
{
	return FVector(GetOwner()->GetActorLocation().X - boxDimensions.X + boxOffset.X, GetOwner()->GetActorLocation().Y - boxDimensions.Y + boxOffset.Y, GetOwner()->GetActorLocation().Z - boxDimensions.Z + boxOffset.Z);
}
FVector UVisualizationBox::GetRightBackwardBottomCornerPos() const
{
	return FVector(GetOwner()->GetActorLocation().X - boxDimensions.X + boxOffset.X, GetOwner()->GetActorLocation().Y + boxDimensions.Y + boxOffset.Y, GetOwner()->GetActorLocation().Z - boxDimensions.Z + boxOffset.Z);
}
FVector UVisualizationBox::GetLeftForwardTopCornerPos() const
{
	return FVector(GetOwner()->GetActorLocation().X + boxDimensions.X + boxOffset.X, GetOwner()->GetActorLocation().Y - boxDimensions.Y + boxOffset.Y, GetOwner()->GetActorLocation().Z + boxDimensions.Z + boxOffset.Z);
}
FVector UVisualizationBox::GetRightForwardTopCornerPos() const
{
	return FVector(GetOwner()->GetActorLocation().X + boxDimensions.X + boxOffset.X, GetOwner()->GetActorLocation().Y + boxDimensions.Y + boxOffset.Y, GetOwner()->GetActorLocation().Z + boxDimensions.Z+ boxOffset.Z);
}
FVector UVisualizationBox::GetLeftBackwardTopCornerPos() const
{
	return FVector(GetOwner()->GetActorLocation().X - boxDimensions.X + boxOffset.X, GetOwner()->GetActorLocation().Y - boxDimensions.Y + boxOffset.Y, GetOwner()->GetActorLocation().Z + boxDimensions.Z + boxOffset.Z);
}
FVector UVisualizationBox::GetRightBackwardTopCornerPos() const
{
	return FVector(GetOwner()->GetActorLocation().X - boxDimensions.X + boxOffset.X, GetOwner()->GetActorLocation().Y + boxDimensions.Y + boxOffset.Y, GetOwner()->GetActorLocation().Z + boxDimensions.Z + boxOffset.Z);
}

