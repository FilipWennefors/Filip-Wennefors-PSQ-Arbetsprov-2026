// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy Logic/BaseEnemy.h"

#include "LandscapeHeightfieldCollisionComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Enemy Logic/BaseEnemyController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Player Logic/PlayerCharacter.h"
#include "UI Logic/TakedownInputIndicator.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	playerTakedownIndicator = CreateDefaultSubobject<UWidgetComponent>(TEXT("Player Takedown Indicator"));
	playerTakedownIndicator->SetupAttachment(RootComponent);
	playerTakedownIndicator->SetVisibility(false);

	pawnCollisionResponses = GetMesh()->GetCollisionResponseToChannels();

}

UAnimMontage* ABaseEnemy::GetMeleeAttackAnimMontage()
{
	if (IsValid(equippedWeaponActor))
	{
		AEnemyBaseWeapon* enemyBaseWeapon = Cast<AEnemyBaseWeapon>(equippedWeaponActor);
		if (IsValid(enemyBaseWeapon))
		{
			//Check if the weapon can perform melee attacks here, logic to be implemented later
			return enemyBaseWeapon->GetAnimations().AttackingMontage;
		}
	}
	else return defaultMeleeAttackAnim;
	return nullptr;
}
TMulticastDelegate<void(ABaseEnemy*, bool)> ABaseEnemy::OnAnyEnemyKilled;
float ABaseEnemy::GetMeleeAttackSpeed()
{
	return meleeAttackSpeed;
}

bool ABaseEnemy::GetCanPerformMeleeAttack()
{
	if (bIsStunned)
		return false;
	if (bIsLyingDown)
		return false;
	if (bIsStaggered)
		return false;
	return true;
}

EPatrolType ABaseEnemy::GetPatrolType()
{
	return patrolType;
}

float ABaseEnemy::GetPatrolRadius()
{
	return patrolRadius;
}

ASpline* ABaseEnemy::GetFollowSpline()
{
	return followSpline;
}
FTransform ABaseEnemy::GetSpawnTransform()
{
	return spawnTransform;
}
// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	ABaseEnemyController* controller = Cast<ABaseEnemyController>(GetController());
	if (IsValid(controller))
		controller->OnDetectedPlayer.AddDynamic(this, &ABaseEnemy::OnPlayerDetected);
	spawnTransform = GetActorTransform();
}
// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector takedownIndicatorPosition = playerTakedownIndicator->GetComponentLocation();
	FVector playerCameraLocation = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();

	FRotator lookAtRotation = UKismetMathLibrary::FindLookAtRotation(takedownIndicatorPosition, playerCameraLocation);
	playerTakedownIndicator->SetWorldRotation(lookAtRotation);

}

void ABaseEnemy::SetCollisionResponseToRagdoll()
{
	GetMesh()->SetCollisionObjectType(ECC_PhysicsBody);
	GetMesh()->SetCollisionResponseToChannels(ragdollCollisionResponses);
}

void ABaseEnemy::SetCollisionResponseToPawn()
{
	GetMesh()->SetCollisionResponseToChannels(pawnCollisionResponses);
}
float ABaseEnemy::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	//TODO: Cast FDamageEvent to point damage event and get any potential damage multipliers from hitboxes

	health -= DamageAmount;
	if (health <= 0 && !bIsKilled)
		KillEnemy();


	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void ABaseEnemy::KillEnemy()
{
	GetMesh()->GetAnimInstance()->Montage_Pause();
	GetMesh()->SetSimulatePhysics(true);
	SetCollisionResponseToRagdoll();
	bIsLyingDown = true;
	bIsKilled = true;
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	OnAnyEnemyKilled.Broadcast(this, true);
	OnThisEnemyKilled.Broadcast(this, true);
	OnKilled();
}

void ABaseEnemy::ApplyStunEffect(float stunDuration)
{
	bIsStunned = true;
	GetCharacterMovement()->SetMovementMode(MOVE_None);

	FTimerManager& TimerManager = GetWorldTimerManager();
	FTimerHandle TimerHandle;
	TimerManager.SetTimer(TimerHandle, this, &ABaseEnemy::DisableStunEffect, stunDuration, false);
}
void ABaseEnemy::DisableStunEffect()
{
	bIsStunned = false;
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
}
float ABaseEnemy::CalculateStaggerChance(float staggerDamageDealt, float minDamageStaggerThreshold, float guaranteedStaggerDamageThreshold, float minStaggerChance)
{
	/* How this function works is the following:
	 * There is a math function written as f(x) = p+(1-p) * x where p is the start value that goes from p to 1 in the y axis over 1 unit in the x axis.
	 * This function uses it to calculate a damage percentage where if the damage passes a threshold to stagger, it will use it to calculate an escalating chance to stagger
	 */

	 //Here we start by calculating how much of the damage is above the stagger threshold
	float damageAboveThreshold = staggerDamageDealt - minDamageStaggerThreshold;

	//This is basically the x value for the math function f(x)
	float factorToGuaranteedStagger = damageAboveThreshold / (guaranteedStaggerDamageThreshold - minDamageStaggerThreshold);
	factorToGuaranteedStagger = FMath::Clamp(factorToGuaranteedStagger, 0.f, 1.f); //So we don't feed in a value larger than 1 as the x value

	float _minStaggerChance = FMath::Clamp(minStaggerChance, 0.f, 100.f) / 100.f; 	//In case the stagger chance ends up above 100% so it doesn't break shit
	//Finally for the pièce de résistance of this calculation, f(x) = p+(1-p) * x
	float staggerChance = (_minStaggerChance + (1 - _minStaggerChance) * factorToGuaranteedStagger) * 100.f;
	return staggerChance;
}

void ABaseEnemy::StaggerEnemy(UPrimitiveComponent* componentHit, float staggerDuration, UAnimMontage* staggerAnim)
{

	GetMesh()->GetAnimInstance()->Montage_Play(staggerAnim, 1 / staggerDuration);
	GetCharacterMovement()->SetMovementMode(MOVE_None);
	bIsStaggered = true;
	ShowTakedownIndicator(ETakedownType::RoundhouseKick);

	FTimerManager& TimerManager = GetWorldTimerManager();
	FTimerHandle TimerHandle;
	TimerManager.SetTimer(TimerHandle, this, &ABaseEnemy::DisableEnemyStagger, staggerDuration, false);
}
void ABaseEnemy::DisableEnemyStagger()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	bIsStaggered = false;
	playerTakedownIndicator->SetVisibility(false);
}


void ABaseEnemy::ShowTakedownIndicator(ETakedownType takedownType)
{
	playerTakedownIndicator->SetVisibility(true);

	UTakedownInputIndicator* takedownInputIndicator = Cast<UTakedownInputIndicator>(playerTakedownIndicator->GetWidget());
	if (IsValid(takedownInputIndicator))
		takedownInputIndicator->SetInputIcon(takedownType);
}

void ABaseEnemy::OnPlayerDetected(bool bCanDetectPlayer)
{
	_bCanDetectPlayer = bCanDetectPlayer;
}
/* What we need to do here is the following
 * If the enemy is lying on the floor return true
 * else if the enemy cannot see the player, return true
 * otherwhise return false
 * return the type of takedown required
 */
bool ABaseEnemy::GetIsTakedownable()
{
	if (bIsStaggered && !bIsLyingDown)
		return true;
	if (_bCanDetectPlayer || IsPlayerInFront() || bIsLyingDown) //We don't wanna backstab enemies lying on the floor
		return false;
	return false; //Commented out to disable backstabbing because it's buggy AF and it will take too long to fix.
	//else return true;
}

ETakedownType ABaseEnemy::GetTakedownType()
{
	if (GetIsTakedownable() == false)
		return ETakedownType::NONE;
	if (bIsStaggered)
		return  ETakedownType::RoundhouseKick;

	//commented out to disable backstabbing because it's buggy AF and it will take too long to fix.

	//if (!_bCanDetectPlayer && !IsPlayerInFront() && !bIsLyingDown)
		//return ETakedownType::Backstab;
	else
		return ETakedownType::NONE;

}
bool ABaseEnemy::IsPlayerInFront()
{
	//Step 1: Convert the player pos into enemy local space
	//if the player's position in the x axis is positive or above a certain value, the player is in front of the enemy

	FTransform enemyTransform = GetActorTransform();
	FTransform playerTransform = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorTransform();

	FTransform playerRelativeToEnemy = playerTransform.GetRelativeTransform(enemyTransform);

	if (playerRelativeToEnemy.GetLocation().X > 0.f)
		return true;
	else return false;
}
float ABaseEnemy::GetPlayerBackstabPosOffset()
{
	return playerBackstabPosOffset;
}

void ABaseEnemy::NotifyIsClosestTakedownable()
{
	if (!_bCanDetectPlayer)
		ShowTakedownIndicator(GetTakedownType());
}

void ABaseEnemy::NotifyIsNoLongerClosestTakedownable()
{
	playerTakedownIndicator->SetVisibility(false);
}

void ABaseEnemy::NotifyPlayerPerformsTakedown(ETakedownType takedownType)
{
	SetActorEnableCollision(false);
	GetMesh()->GetAnimInstance()->Montage_Play(backStabAnimation);
}

// Called to bind functionality to input
void ABaseEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

