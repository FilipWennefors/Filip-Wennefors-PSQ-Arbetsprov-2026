// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyHitComponent.h"
#include "FEnemyCollisionCompParams.h"
#include "Components/BoxComponent.h"
#include "EnemyBoxCollider.generated.h"

/**
 * 
 */
UCLASS(ClassGroup="Collision", editinlinenew, hidecategories=(Object,LOD,Lighting,TextureStreaming), meta=(DisplayName="Enemy Box Collider", BlueprintSpawnableComponent))
class RESIDENTEVILTESTING_API UEnemyBoxCollider : public UBoxComponent, public IEnemyHitComponent
{
	GENERATED_BODY()
public:
	virtual void GetCollisionCompParams(FEnemyCollisionCompParams& CollisionCompParams) override;
	
protected:
	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FEnemyCollisionCompParams parameters;
	
};

inline void UEnemyBoxCollider::GetCollisionCompParams(FEnemyCollisionCompParams& CollisionCompParams)
{
	CollisionCompParams = parameters;
}