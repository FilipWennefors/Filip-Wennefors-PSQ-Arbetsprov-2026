#pragma once
#include "FEnemyWeaponAnimations.generated.h"

USTRUCT(BlueprintType)
struct FEnemyWeaponAnimations
{
	GENERATED_BODY()

#pragma region Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* IdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* AttackingMontage;
#pragma endregion
};
