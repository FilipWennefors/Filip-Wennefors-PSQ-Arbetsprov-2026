// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CustomAnimationWarper.generated.h"

/*	This is a custom class to implement motion warping for animation montages. Since Motion warping is experimental/in beta for Unreal and not for shipping builds, and since
 *	the built-in motion warper lacks the ability to disable collisions/warp through colliders, this is the solution used
 */
UCLASS(Blueprintable, BlueprintType)
class RESIDENTEVILTESTING_API UCustomAnimationWarper : public UAnimNotifyState
{
	GENERATED_BODY()
#pragma region Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Test")
	FName warpName;
	
	UPROPERTY() FTransform motionWarpStartTransform;

	UPROPERTY() FTransform MotionWarpEndTransform;

	UPROPERTY() float motionWarpDuration;

private:
	float montageTimeElapsed;
#pragma endregion
	
#pragma region Functions
protected:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;

	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
	
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

#pragma endregion
};
