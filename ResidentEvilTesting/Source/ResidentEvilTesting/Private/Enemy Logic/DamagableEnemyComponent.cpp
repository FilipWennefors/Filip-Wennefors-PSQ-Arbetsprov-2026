// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy Logic/DamagableEnemyComponent.h"

#include "Components/ShapeComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values for this component's properties
UDamagableEnemyComponent::UDamagableEnemyComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;

	// ...
}

void UDamagableEnemyComponent::OnOwnerTakePointDamage_Implementation(AActor* DamagedActor, float Damage,
	class AController* InstigatedBy, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName,
	FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser)
{
	/*damageDealt = Damage;
	if (isStaggered)
		return;

	UShapeComponent* shapeComponent = Cast<UShapeComponent>(FHitComponent);
	if (shapeComponent == nullptr)
		return;

	if (!CheckIfHitComponentIsWeakPoint(shapeComponent))
		return;

	float staggerChance = CalculateStaggerChance();
	if (staggerChance < FMath::RandRange(0, 100))
		return;

	isStaggered = true;	
	staggerRecoverTimeElapsed = staggerRecoverTime; //Rename from elapsed later to clarify meaning as elapsed should always count up from zero
	damageRecoverTimeElapsed = 0;
	UAnimMontage* staggerAnimation = staggerAnimations.Find(shapeComponent->GetName());
	if (staggerAnimation == nullptr)
		return;

	//SO MANY FUCKING NULLPTR CHECKS
	*/
}


// Called when the game starts
void UDamagableEnemyComponent::BeginPlay()
{
	Super::BeginPlay();

	GetOwner()->OnTakePointDamage.AddDynamic(this, &UDamagableEnemyComponent::OnOwnerTakePointDamage);
	// ...
	
}
//I have no idea what the fuck I even cooked up here but it works
float UDamagableEnemyComponent::CalculateStaggerChance()
{
	damageDealtForStaggerPurposes += damageDealt;


	float StaggerDamagePercentageUnclamped = (damageDealtForStaggerPurposes - minDamageToStagger) / (weakSpotDamageGuaranteedStaggerThreshold - minDamageToStagger);
	float StaggerDamagePercentage =  FMath::Clamp(StaggerDamagePercentageUnclamped, 0.f, 1.f);
	
	float minStaggerChanceClamped = FMath::Clamp(minStaggerChance / 100, 0, 1);
	float additionalPercentToAdd = 1 - minStaggerChanceClamped;

	return minStaggerChance + ((StaggerDamagePercentage * additionalPercentToAdd) * 100);
	
}
bool UDamagableEnemyComponent::CheckIfHitComponentIsWeakPoint(UShapeComponent* HitComponent)
{
	bool bIsWeakPoint = false;
	for (UShapeComponent* ShapeComponent : weakPoints)
	{
		if (ShapeComponent == HitComponent)
		{
			bIsWeakPoint = true;
			break;
		}
	}
	return bIsWeakPoint;
}

void UDamagableEnemyComponent::PrintString(FString message, float value)
{
	FString debugMessage = UKismetStringLibrary::BuildString_Float(message, "", value, "");
	UKismetSystemLibrary::PrintString(this, debugMessage, true, true, FLinearColor(0.f, 0.66f, 1.f, 1.f), 2);
}

// Called every frame
void UDamagableEnemyComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (damageDealtForStaggerPurposes > 0 )
	{
		damageRecoverTimeElapsed += DeltaTime;
		damageRecoverTimeElapsed = FMath::Clamp(damageRecoverTimeElapsed, 0, damageRecoverTime);
		float exponent = 2;				//Have to use Kismet instead of FMath or it spits out an error for some reason
		damageDealtForStaggerPurposes = UKismetMathLibrary::FInterpEaseInOut(damageDealtForStaggerPurposes, 0, damageRecoverTimeElapsed / damageRecoverTime,  exponent);

		// PrintString("Damage dealt for stagger purposes is ", damageDealtForStaggerPurposes);
		// PrintString("damageRecoverTimeElapsed is ", damageRecoverTimeElapsed);
			
	}
	// ...
}

