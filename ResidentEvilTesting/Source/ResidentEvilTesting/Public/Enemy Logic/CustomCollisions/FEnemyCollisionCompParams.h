#pragma once

#include "FEnemyCollisionCompParams.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct FEnemyCollisionCompParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* OnHitAnimMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float hitStunDuration = 1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float damageMultiplier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	bool bIsWeakSpot = false;
};
