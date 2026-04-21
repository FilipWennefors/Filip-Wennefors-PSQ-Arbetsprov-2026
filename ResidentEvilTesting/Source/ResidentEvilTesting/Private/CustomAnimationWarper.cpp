// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomAnimationWarper.h"
#include "CustomMotionWarpComponent.h"


void UCustomAnimationWarper::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	AActor* meshCompOwner = MeshComp->GetOwner();
	UCustomMotionWarpComponent* motionWarpComponent = meshCompOwner->FindComponentByClass<UCustomMotionWarpComponent>();

	bool hasSucceeded;

	if (!IsValid(meshCompOwner) || !IsValid(motionWarpComponent))	
	{
		motionWarpStartTransform = FTransform::Identity;
		MotionWarpEndTransform = FTransform::Identity;
		return;
	}
	
	motionWarpStartTransform = meshCompOwner->GetTransform();
	MotionWarpEndTransform = motionWarpComponent->GetMotionWarpTarget(warpName, hasSucceeded);

	if (!hasSucceeded)
		return;

	motionWarpDuration = TotalDuration;
	montageTimeElapsed = 0.0f;
}
void UCustomAnimationWarper::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	montageTimeElapsed += FrameDeltaTime;

	float warpFactor = FMath::Clamp(montageTimeElapsed / motionWarpDuration, 0.f, 1.f);
	float lerpAmount = 1 - FMath::Pow(1 - warpFactor, 4); //basically implements the math function f(x) = 1-(1-x)^4
	
	FVector distanceMoved = MotionWarpEndTransform.GetLocation() - motionWarpStartTransform.GetLocation();
	FVector deltaLocation = FVector(distanceMoved.X * lerpAmount, distanceMoved.Y * lerpAmount, distanceMoved.Z * lerpAmount);
	FVector currentLocation = motionWarpStartTransform.GetLocation() + deltaLocation;
	MeshComp->GetOwner()->SetActorLocation(currentLocation);
}
void UCustomAnimationWarper::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
}
