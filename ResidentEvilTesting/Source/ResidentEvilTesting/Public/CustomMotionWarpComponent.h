// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomMotionWarpComponent.generated.h"

/*	This is a custom class to implement motion warping for animation montages. Since Motion warping is experimental/in beta for Unreal and not for shipping builds, and since
 *	the built-in motion warper lacks the ability to disable collisions/warp through colliders, this is the solution used
 */

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RESIDENTEVILTESTING_API UCustomMotionWarpComponent : public UActorComponent
{
	GENERATED_BODY()
#pragma region Variables
private:
	UPROPERTY()
	TMap<FName, FTransform> WarpTargets;	
#pragma endregion

#pragma region Functions
public:
	// Sets default values for this component's properties
	UCustomMotionWarpComponent();

	UFUNCTION(BlueprintCallable, Category = "CustomMotionWarp")
	FTransform GetMotionWarpTarget(FName targetName, bool& bHasSucceeded);

	UFUNCTION(BlueprintCallable, Category = "CustomMotionWarp")
	void SetMotionWarpTarget(FName targetName, FTransform targetTransform);

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
#pragma endregion
};
