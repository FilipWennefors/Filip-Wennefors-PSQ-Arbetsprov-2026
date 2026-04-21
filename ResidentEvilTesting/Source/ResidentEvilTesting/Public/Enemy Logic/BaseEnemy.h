// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBaseWeapon.h"
#include "EPatrolType.h"
#include "Spline.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Player Logic/ETakedownType.h"
#include "BaseEnemy.generated.h"

class ABaseEnemy;
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnEnemyDies, ABaseEnemy* enemyKilled, bool bisReallyDead)
UCLASS()
class RESIDENTEVILTESTING_API ABaseEnemy : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ABaseEnemy();
#pragma region Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true", ExposeOnSpawn = "true"))
	TSubclassOf<AEnemyBaseWeapon> equippedWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FCollisionResponseContainer ragdollCollisionResponses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FCollisionResponseContainer pawnCollisionResponses;

	static FOnEnemyDies OnAnyEnemyKilled;
	FOnEnemyDies OnThisEnemyKilled;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float maxHealth;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float meleeAttackSpeed;

	//How do we want the enemy to patrol the environment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	EPatrolType patrolType = EPatrolType::StandStill;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float patrolRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	ASpline* followSpline;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* playerTakedownIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* backStabAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* defaultMeleeAttackAnim;
	
	//Used to determine how much to move the player behind for animations
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess=true))
	float playerBackstabPosOffset;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool _bCanDetectPlayer = false;

	//Means that the enemy is lying down on the floor either due to being downed from attack or "Killed" with a chance to reanimate
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsLyingDown = false;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsKilled = false;
	
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	bool bIsStunned = false;
	
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	bool bIsStaggered = false;

	UPROPERTY(BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	AEnemyBaseWeapon* equippedWeaponActor;

private:
	UPROPERTY()
	FTransform spawnTransform;
#pragma endregion

#pragma region Functions
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Enemy AI")
	void OnHitActor(AActor* hitActor);
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Getters")
	UAnimMontage* GetMeleeAttackAnimMontage();

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Getters")
	float GetMeleeAttackSpeed();

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Getters")
	bool GetCanPerformMeleeAttack();
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Getters")
	EPatrolType GetPatrolType();
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Getters")
	float GetPatrolRadius();
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Getters")
	ASpline* GetFollowSpline();
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Getters")
	FTransform GetSpawnTransform();
	
	bool IsPlayerInFront();
	//Was originally supposed to be isBackstabbable but since backstabs and takedowns on enemies lying on the floor uses the same button, it might be smarter to merge functionality
	UFUNCTION(BlueprintCallable, Category = "BaseEnemy")
	bool GetIsTakedownable();

	UFUNCTION(BlueprintCallable, Category = "BaseEnemy")
	ETakedownType GetTakedownType();
	
	//Used to determine how much to move the player behind for animations
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Default")
	float GetPlayerBackstabPosOffset();
	
	void NotifyIsClosestTakedownable();
	
	void NotifyIsNoLongerClosestTakedownable();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Default")
	void NotifyOnAttackParried();
	
	UFUNCTION(BlueprintCallable, Category = "Takedowns")
	void NotifyPlayerPerformsTakedown(ETakedownType takedownType);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UFUNCTION(BlueprintCallable, Category = "Collision") //Use setCollisionResponseToChannels here
	void SetCollisionResponseToRagdoll();

	UFUNCTION(BlueprintCallable, Category = "Collision") //Use setCollisionResponseToChannels here
	void SetCollisionResponseToPawn();

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintCallable, Category = "Death Logic")
	void KillEnemy();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Death Logic")
	void OnKilled();
	
	UFUNCTION(BlueprintCallable, Category = "Stagger and stun")
	void ApplyStunEffect(float stunDuration);
	
	UFUNCTION(BlueprintCallable, Category = "Stagger and stun", meta = (AllowPrivateAccess = "true"))
	float CalculateStaggerChance(float staggerDamageDealt, float minDamageStaggerThreshold, float guaranteedStaggerDamageThreshold, float minStaggerChance);

	UFUNCTION(BlueprintCallable, Category = "Stagger and stun")
	void StaggerEnemy(UPrimitiveComponent* componentHit, float staggerDuration, UAnimMontage* staggerAnim);

	UFUNCTION(BlueprintCallable, Category = "Stagger and stun")
	void ShowTakedownIndicator(ETakedownType takedownType);

	UFUNCTION()
	void OnPlayerDetected(bool bCanDetectPlayer);
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	void DisableEnemyStagger();
	void DisableStunEffect();	
#pragma endregion	
};
