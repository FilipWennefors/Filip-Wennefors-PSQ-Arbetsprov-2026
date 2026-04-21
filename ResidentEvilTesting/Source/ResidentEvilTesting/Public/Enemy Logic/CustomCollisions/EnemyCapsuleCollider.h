// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyHitComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnemyCapsuleCollider.generated.h"


UCLASS(ClassGroup="Collision", editinlinenew, hidecategories=(Object,LOD,Lighting,TextureStreaming), meta=(DisplayName="Enemy Capsule Collider", BlueprintSpawnableComponent))
class RESIDENTEVILTESTING_API UEnemyCapsuleCollider : public UCapsuleComponent, public IEnemyHitComponent
{
	GENERATED_BODY()
public:
	virtual void GetCollisionCompParams(FEnemyCollisionCompParams& CollisionCompParams) override;
	
protected:
	UPROPERTY(EditAnywhere, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FEnemyCollisionCompParams parameters;
	
};

inline void UEnemyCapsuleCollider::GetCollisionCompParams(FEnemyCollisionCompParams& CollisionCompParams)
{
	CollisionCompParams = parameters;
}
