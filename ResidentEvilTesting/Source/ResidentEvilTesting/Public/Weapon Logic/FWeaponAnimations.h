#pragma once
#include "FWeaponAnimations.generated.h"

USTRUCT(BlueprintType)
struct RESIDENTEVILTESTING_API FWeaponAnimations //Why do struct names start with F specifically? I cannot see how the letter would be related 
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* DeployingAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* IdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* RunningIdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* CrouchedIdleAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* CrouchedWalkingAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* FiringAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* ReloadingAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* AimingAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* HolsteringAnimation;
};
