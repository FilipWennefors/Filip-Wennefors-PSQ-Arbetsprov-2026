// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomMotionWarpComponent.h"
#include "ETakedownType.h"
#include "EWeaponState.h"
#include "Weapon Logic/WeaponsBaseClass.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Enemy Logic/BaseEnemy.h"
#include "Weapon Logic/AKnifeBaseClass.h"
#include "MotionWarpingComponent.h"
#include "Pickup And Item Logic/NewInventoryItem.h"
#include "PlayerCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponWheelInfoUpdate, const TArray<AWeaponsBaseClass*>&, weaponsInWeaponWheel); //Refuses to compile unless we do const and two pointers: https://forums.unrealengine.com/t/bind-event-not-compiling-in-blueprints/348173/5
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStabClosestEnemy, ETakedownType, takedownTypePerformed);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnHealthUpdated, float newHealth, float maxHealth, float absoluteMaxHealth);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnKnifeInfoUpdate, AKnifeBaseClass* knifeInfoToBroadcast, UTexture2D* newKnifeIcon);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnWeaponInfoUpdate, AWeaponsBaseClass* weaponInfoToBroadcast, UTexture2D* newWeaponIcon);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnSelectingWeapon, int weaponIndex);
UCLASS()
class RESIDENTEVILTESTING_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	APlayerCharacter();
#pragma region Variables
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UMotionWarpingComponent* MotionWarper;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCustomMotionWarpComponent* CustomMotionWarper;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* PlayerCamera;
	
#pragma region Delegates
	static FOnHealthUpdated OnHealthUpdated;
	static FOnWeaponInfoUpdate OnWeaponInfoUpdate;
	static FOnKnifeInfoUpdate OnKnifeInfoUpdate;
	static FOnSelectingWeapon OnSelectingWeapon;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	FOnWeaponWheelInfoUpdate OnWeaponWheelUIInfoUpdate;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	FOnStabClosestEnemy OnStabClosestEnemy;
#pragma endregion

protected:
	
#pragma region Weapon Logic
	UPROPERTY(BlueprintReadWrite, Category = "PlayerCharacterWeaponLogic", meta = (AllowPrivateAccess = "true"))
	AWeaponsBaseClass* currentlyEquippedWeapon;
	
	UPROPERTY(BlueprintReadWrite, Category = "PlayerCharacterWeaponLogic", meta = (AllowPrivateAccess = "true"))
	AKnifeBaseClass* currentlyEquippedKnife;
#pragma endregion

#pragma region PlayerParameters
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float cameraDistanceBehindPlayer = 75.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float cameraOffsetToSide = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float cameraUpwardsOffset = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FVector playerLookAtPos;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	bool isAiming = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float interactablesSweepRange;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float takedownableEnemiesSweepRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	EWeaponState WeaponState = EWeaponState::Deploying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float selectedWeapon;

	UPROPERTY(BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	TArray<AWeaponsBaseClass*> equippedWeapons;

	UPROPERTY(BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	TArray<AWeaponsBaseClass*> equippedKnives;
	
	UPROPERTY(BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float reloadTimeElapsed;
#pragma endregion
	
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AActor* closestInteractable;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	ABaseEnemy* closestTakedownableEnemy;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	ETakedownType closestEnemyTakedownType = ETakedownType::Backstab;
	
private:
	UPROPERTY() FVector2D cameraRotation;
	UPROPERTY() float deployTimeElapsed;
	UPROPERTY() float holsterTimeElapsed;

	UPROPERTY() FTimerHandle reloadTimerHandle;
	UPROPERTY() FTimerHandle animationMontageTimerHandle;
	
	bool bIsPlayingMontageOnPlayer;
	
	bool bIsMontageBlockingDamage;
#pragma endregion

#pragma region Functions
public:
	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterParams", meta = (AllowPrivateAccess = "true"))
	bool GetIsAiming() const;

	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterParams", meta = (AllowPrivateAccess = "true"))
	AWeaponsBaseClass* GetCurrentWeapon() const;

	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterParams", meta = (AllowPrivateAccess = "true"))
	FRotator GetCameraRotation() const;

	FVector GetCameraForwardVector() const;

	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterWeaponLogic")
	FVector CalculateWeaponRaycastOriginPos() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerCharacterLogic", meta = (AllowPrivateAccess = "true"))
	bool CanDamagePlayer() const;
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "PlayerCharacterLogic", meta = (AllowPrivateAccess = "true"))
	void HealPlayer(float healthAdded);
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//Both of these have to be static because of technical reasons related to TFunctionRef. They are used in a different function
	static bool IsActorInteractable(AActor& Context);
	static bool IsEnemyTakedownable(AActor& Context);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AActor* GetClosestActorThatFitsCriteria(float _sweepRange, TFunctionRef<bool(AActor&)> bMeetsCriteria);
	
	//bool IsActorInteractable(const AActor& ActorToCheck);
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterCamera", meta = (AllowPrivateAccess = "true"))
	void AddCameraRotation(FVector2D mouseDeltaMovement, float mouseSensitivity, float deltaTime);

	UFUNCTION(BlueprintCallable, Category = "Melee", meta = (AllowPrivateAccess = "true"))
	void RecalculateCameraTransform(float RayCastSphereRadius, TArray<AWeaponsBaseClass*> weaponsEquipped, TArray<AWeaponsBaseClass*> knivesEquipped) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Melee", meta = (AllowPrivateAccess = "true"))
	bool CanPerformMeleeKick() const;
	
	UFUNCTION(BlueprintCallable, Category = "Melee", meta = (AllowPrivateAccess = "true"))
	void MeleeKickGetHitActors(TArray<AActor*>& actorsHitByKick, FVector MeleeKickStartOffset, float meleeKickRange, float meleeKickDegrees, int raycastsCount, float kickDamage);

	//A function to call the delegate OnHealthUpdated because unreal doesn't allow static delegates to be directly used in blueprints
	UFUNCTION(BlueprintCallable, Category = "Events", meta = (AllowPrivateAccess = "true"))
	void CallOnHealthUpdated(float health, float maxhealth, float absoluteMaxHealth);
	
	//A function to call the delegate OnWeaponInfoUpdated because unreal doesn't allow static delegates to be directly used in blueprints
	UFUNCTION(BlueprintCallable, Category = "Events", meta = (AllowPrivateAccess = "true"))
	void CallOnWeaponInfoUpdated();

	//A function to call the delegate OnKnifeInfoUpdated because unreal doesn't allow static delegates to be directly used in blueprints
	UFUNCTION(BlueprintCallable, Category = "Events", meta = (AllowPrivateAccess = "true"))
	void CallOnKnifeInfoUpdated();
	
	//A function to call the delegate OnSelectingWeapon because unreal doesn't allow static delegates to be directly used in blueprints
	UFUNCTION(BlueprintCallable, Category = "Events", meta = (AllowPrivateAccess = "true"))
	void CallOnSelectingWeapon(int weaponIndex);
	
	virtual void Destroyed() override;
#pragma region Weapon Logic
	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterWeaponLogic", meta = (AllowPrivateAccess = "true"))
	void TryFireWeapon(AWeaponsBaseClass* equippedWeapon, bool& isSuccessful, USkeletalMeshComponent* playerSkeletalMesh);

	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterWeaponLogic", meta = (AllowPrivateAccess = "true"))
	void ReloadWeapon(AWeaponsBaseClass* equippedWeapon, USkeletalMeshComponent* playerSkeletalMesh);

	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterWeaponLogic", meta = (AllowPrivateAccess = "true"))
	bool CanAimWeapon() const;

	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterWeaponLogic", meta = (AllowPrivateAccess = "true"))
	bool CanPerformKnifeTakedown() const;
	
	/*
	* Immediately sets the player weapon to a weapon specified in the list of weapons equipped by the player
	* @param		currentWeapon			The weapon currently carried by the player
	* @param		newSelectedWeapon		The index of whatever weapon you want to equip as featured in the array currentlyEquippedWeapons 
	* @return		true if actor is in front of the second actor in the params list  */
	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterWeaponLogic", meta = (AllowPrivateAccess = "true"))
	void SwitchWeapon(AWeaponsBaseClass* currentWeapon, float newSelectedWeapon);

	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterWeaponLogic", meta = (AllowPrivateAccess = "true"))
	void EquipWeaponOtherClass(AWeaponsBaseClass* currentWeapon, AWeaponsBaseClass* newWeapon);

#pragma endregion
	
#pragma region Animation
	void OnAnimMontageFinished();

	//Used to play animations on the player that temporarily blocks input
	UFUNCTION(BlueprintCallable, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	void PlayAnimationMontageOnPlayer(UAnimMontage* animationToPlay, float& montagePlayLength, bool blockDamage);

	UFUNCTION(BlueprintCallable, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	bool GetIsPlayingMontageOnPlayer() const;

	UFUNCTION(BlueprintCallable, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	void PlayTakeDamageAnimations(AActor* damageCauser, TArray<UAnimMontage*> animations);
#pragma endregion

#pragma  region Interaction
	//This event is called every frame when a weapon is deplayed, that is the player is not switching between weapons
	UFUNCTION(BlueprintImplementableEvent, Category = "PlayerCharacterInteracting", meta = (AllowPrivateAccess = "true"))
	void WeaponIdleAndAimingStateBP();
	
	UFUNCTION(BlueprintCallable, Category = "PlayerCharacterInteracting", meta = (AllowPrivateAccess = "true"))
	void TryStartSwitchingWeapon();

	//This function calculates a rotation used to make it look like the player is looking at whatever the crosshair is aiming at
	UFUNCTION(BlueprintPure, Category = "PlayerCharacterInteracting", meta = (AllowPrivateAccess = "true"))
	FRotator GetLookTowardsCrosshairRotation(float distFromCamToCursor, float deltaTime, float interpSpeed) const;
#pragma endregion
	UFUNCTION()
	void OnMontageWithCallbacksEnded();

	UFUNCTION()
	void OnMontageWithCallbacksStarted();
private:
	UFUNCTION()
	void OnItemAdded(UNewInventoryItem* itemAdded);
	
	UFUNCTION()
	void OnItemInfoUpdated(UNewInventoryItem* itemInfoUpdated);
#pragma endregion

};

