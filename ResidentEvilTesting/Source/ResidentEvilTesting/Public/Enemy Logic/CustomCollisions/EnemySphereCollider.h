// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyHitComponent.h"
#include "Components/SphereComponent.h"
#include "Enemy Logic/CustomCollisions/FEnemyCollisionCompParams.h"
#include "EnemySphereCollider.generated.h"

/**
 * 
 */
UCLASS(ClassGroup="Collision", editinlinenew, hidecategories=(Object,LOD,Lighting,TextureStreaming), meta=(DisplayName="Enemy Sphere Collider", BlueprintSpawnableComponent))
class RESIDENTEVILTESTING_API UEnemySphereCollider : public USphereComponent, public IEnemyHitComponent
{
	GENERATED_BODY()
public:
	virtual void GetCollisionCompParams(FEnemyCollisionCompParams& CollisionCompParams) override;
	
protected:
	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FEnemyCollisionCompParams parameters;
	
};

inline void UEnemySphereCollider::GetCollisionCompParams(FEnemyCollisionCompParams& CollisionCompParams)
{
	CollisionCompParams = parameters;
}
