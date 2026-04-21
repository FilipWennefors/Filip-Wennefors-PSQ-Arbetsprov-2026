// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamagableEnemyComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class RESIDENTEVILTESTING_API UDamagableEnemyComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDamagableEnemyComponent();
#pragma region Variables
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", DisplayName = "Weak Points", meta = (AllowPrivateAccess = "true"))
	TArray<UShapeComponent*> weakPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", DisplayName = "Stagger Animations", meta = (AllowPrivateAccess = "true"))
	TMap<FName, UAnimMontage*> staggerAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", DisplayName = "Stagger Recover Time", meta = (AllowPrivateAccess = "true"))
	float staggerRecoverTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", DisplayName = "Min Damage To Stagger", meta = (AllowPrivateAccess = "true"))
	float minDamageToStagger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", DisplayName = "Min Stagger Chance", meta = (AllowPrivateAccess = "true"))
	float minStaggerChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", DisplayName = "Weak Spot Damage Guaranteed Stagger Threshold", meta = (AllowPrivateAccess = "true"))
	float weakSpotDamageGuaranteedStaggerThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", DisplayName = "Damage Recover Time", meta = (AllowPrivateAccess = "true"))
	float damageRecoverTime;

	UPROPERTY(BlueprintReadWrite, Category = "Default", DisplayName = "Stagger Recover Time Elapsed", meta = (AllowPrivateAccess = "true"))
	float staggerRecoverTimeElapsed;
	
	UPROPERTY(BlueprintReadWrite, Category = "Default", DisplayName = "Damage Recover Time Elapsed", meta = (AllowPrivateAccess = "true"))
	float damageRecoverTimeElapsed;
	
	UPROPERTY(BlueprintReadWrite, Category = "Default", DisplayName = "Damage Dealt", meta = (AllowPrivateAccess = "true"))
	float damageDealt;

	UPROPERTY(BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float damageDealtForStaggerPurposes;
	
	UPROPERTY(BlueprintReadWrite, Category = "Default", DisplayName = "Is staggered", meta = (AllowPrivateAccess = "true"))
	bool isStaggered = false;
#pragma endregion
	
#pragma region Functions
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintNativeEvent)
	void OnOwnerTakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser);

	UFUNCTION(BlueprintCallable)
	bool CheckIfHitComponentIsWeakPoint(UShapeComponent* HitComponent);

	UFUNCTION(BlueprintCallable)
	float CalculateStaggerChance();

private:
	void PrintString(FString message, float value);
#pragma endregion	
};
