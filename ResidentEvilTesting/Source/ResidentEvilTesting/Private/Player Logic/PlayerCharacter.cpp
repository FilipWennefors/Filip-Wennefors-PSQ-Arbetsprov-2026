// Fill out your copyright notice in the Description page of Project Settings.


#include "Player Logic/PlayerCharacter.h"

#include "GeneralUtilities.h"
#include "Player Logic/PlayMontageOnPlayerWithCallbacks.h"
#include "Pickup And Item Logic/Interactable.h"
#include "Weapon Logic/WeaponsBaseClass.h"
#include "Camera/CameraComponent.h"
#include "Enemy Logic/BaseEnemy.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Pickup And Item Logic/InteractableObject.h"
#include "Player Logic/ETakedownType.h"
#include "Player Logic/Inventory Logic/PlayerInventorySubsystem.h"
#include "Weapon Logic/Firearm.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(RootComponent);

	MotionWarper = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarper"));

	CustomMotionWarper = CreateDefaultSubobject<UCustomMotionWarpComponent>(TEXT("CustomMotionWarper"));
}
#pragma region Getters
bool APlayerCharacter::GetIsAiming() const
{
	return isAiming;
}

AWeaponsBaseClass* APlayerCharacter::GetCurrentWeapon() const
{
	return currentlyEquippedWeapon;
}
FRotator APlayerCharacter::GetCameraRotation() const
{
	return PlayerCamera->GetComponentTransform().GetRotation().Rotator();
}
FVector APlayerCharacter::GetCameraForwardVector() const
{
	return PlayerCamera->GetForwardVector();
}
#pragma endregion
//Used for playing montages on the player with callbacks like OnComplete that also blocks input. Has to be separated function since in order for the node to be async, it has to be a separate class
void APlayerCharacter::OnMontageWithCallbacksStarted()
{
	GetCharacterMovement()->SetMovementMode(MOVE_None);
	bIsPlayingMontageOnPlayer = true;
	bIsMontageBlockingDamage = true;
}
void APlayerCharacter::OnItemAdded(UNewInventoryItem* itemAdded)
{
	AFirearm* currentlyEquippedFirearm = Cast<AFirearm>(currentlyEquippedWeapon);
	if (IsValid(currentlyEquippedFirearm))
	{
		if (itemAdded->GetClass() == currentlyEquippedFirearm->GetRequiredAmmoType().Get()) //TSubClassOf needs to be dereferenced with Get, GetClass will fuck shit up
			CallOnWeaponInfoUpdated();
	}
}

void APlayerCharacter::OnItemInfoUpdated(UNewInventoryItem* itemInfoUpdated)
{
	AFirearm* currentlyEquippedFirearm = Cast<AFirearm>(currentlyEquippedWeapon);
	if (IsValid(currentlyEquippedFirearm))
	{
		if (itemInfoUpdated->GetClass() == currentlyEquippedFirearm->GetRequiredAmmoType().Get()) //TSubClassOf needs to be dereferenced with Get, GetClass will fuck shit up
			CallOnWeaponInfoUpdated();
	}
}

//Used for playing montages on the player with callbacks like OnComplete that also blocks input. Has to be separated function since in order for the node to be async, it has to be a separate class
void APlayerCharacter::OnMontageWithCallbacksEnded()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	bIsPlayingMontageOnPlayer = false;
	bIsMontageBlockingDamage = false;
}
FVector APlayerCharacter::CalculateWeaponRaycastOriginPos() const
{
	//What we're essentially doing here is calculating the origin of where the camera would be by getting how far back it would be from the player not accounting for side offset and getting the pos by
	//multiplying the value towards the camera forwards direction. That way the player camera function doesn't have to cache the value
	
	FVector cameraOriginLocation = GetActorLocation() + FVector(0.0f, 0.0f, cameraUpwardsOffset);
	
	//For some reason whoever created the transform constructor switched places for rotation and location and called location "translation" WHY?? IT MAKES NO SENSE!!!
	FTransform playerCameraOriginTransform = FTransform(GetActorRotation(), cameraOriginLocation, FVector(1, 1, 1)); 
	
	FTransform cameraTransform = PlayerCamera->GetComponentTransform();
	FTransform cameraOriginRelativeToCamera = playerCameraOriginTransform.GetRelativeTransform(cameraTransform);
	float camXDistToOrigin = cameraOriginRelativeToCamera.GetLocation().X;
	
	FVector CameraVectorTowardsOrigin = FVector( PlayerCamera->GetForwardVector() * camXDistToOrigin );
	return CameraVectorTowardsOrigin + PlayerCamera->GetComponentLocation();
}
bool APlayerCharacter::CanDamagePlayer() const
{
	if (bIsMontageBlockingDamage)
		return false;
	else return true;
}
#pragma region Camera

void APlayerCharacter::AddCameraRotation(FVector2D mouseDeltaMovement, float mouseSensitivity, float deltaTime)
{
	cameraRotation.X -= mouseDeltaMovement.X * mouseSensitivity * deltaTime;
	cameraRotation.Y -= mouseDeltaMovement.Y * mouseSensitivity * deltaTime;
	cameraRotation.Y = FMath::Clamp(cameraRotation.Y, -89.9f, 69.5f);
}

void APlayerCharacter::RecalculateCameraTransform(float RayCastSphereRadius, TArray<AWeaponsBaseClass*> weaponsEquipped, TArray<AWeaponsBaseClass*> knivesEquipped) const
{
	//Here is how this shit works. We start out with a vector representing the max camera rotation. This is basically how far in each direction the camera is if the player is standing at position 0, 0, 0
	//We then perform a raycast to see if the camera will end up inside a wall after the player pos has been added
	//if the pos is inside a wall, the camera pos is set to be almost exactly outside the wall. Otherwhise just add the rotated camera vector to the player position
	
	//Get A rotated vector to use in the calculations
	FRotator cameraRotator = FRotator(cameraRotation.Y, cameraRotation.X, 0.f);
	FVector rotatedCameraDistVector = cameraRotator.RotateVector(FVector(-cameraDistanceBehindPlayer, cameraOffsetToSide, 0.f));
	FVector cameraRotationOrigin = GetActorLocation() + FVector(0, 0, cameraUpwardsOffset);

	//Params for raycast
	FHitResult camDistHitResult;
	FCollisionQueryParams camDistParams;
	camDistParams.AddIgnoredActor(this);
	for (AWeaponsBaseClass* weapon : weaponsEquipped)
	{
		camDistParams.AddIgnoredActor(weapon);
	}
	for (AWeaponsBaseClass* knife : knivesEquipped)
	{
		camDistParams.AddIgnoredActor(knife);
	}
	camDistParams.bTraceComplex = false;
	FCollisionShape CollisionSphere = FCollisionShape::MakeSphere(RayCastSphereRadius);
	
	//Clamp the camera dist so it doesn't go through walls
	FVector cameraPosition;
	if (GetWorld()->SweepSingleByChannel(camDistHitResult, cameraRotationOrigin, cameraRotationOrigin + rotatedCameraDistVector, FQuat::Identity, ECC_Camera, CollisionSphere, camDistParams))
		cameraPosition = camDistHitResult.Location;
	else
		cameraPosition = cameraRotationOrigin + rotatedCameraDistVector;

	//Set camera values and return
	PlayerCamera->SetWorldLocation(cameraPosition);
	PlayerCamera->SetWorldRotation(cameraRotator);
}
bool APlayerCharacter::CanPerformMeleeKick() const
{
	if (closestEnemyTakedownType == ETakedownType::RoundhouseKick && bIsPlayingMontageOnPlayer == false)
		return true;
	else
		return false;
}
void APlayerCharacter::MeleeKickGetHitActors(TArray<AActor*>& actorsHitByKick, FVector meleeKickStartOffset, float meleeKickRange, float meleeKickDegrees, int raycastsCount, float kickDamage)
{
	TArray<AActor*> OutHitActors;
	
	float meleeKickStartRotation = (meleeKickDegrees / 2) * -1;
	float degreesPerRaycast = meleeKickDegrees / raycastsCount;
	
	//Configure params for raycasts
	TArray<FHitResult> hitResults;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(currentlyEquippedWeapon);
	Params.AddIgnoredActor(currentlyEquippedKnife);

	TArray<AActor*> IgnoredActors;
	IgnoredActors.Add(currentlyEquippedWeapon);
	IgnoredActors.Add(currentlyEquippedKnife);

	ETraceTypeQuery traceChannel = UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel11);
	
	for (int i = 0; i < raycastsCount; i++)
	{
		float zRotation = meleeKickStartRotation + degreesPerRaycast * i;
	
		FRotator forwardVectorRotator = FRotator(0, zRotation, 0.f);
		FVector rotatedForwardVector = forwardVectorRotator.RotateVector(GetActorForwardVector());
	
		FVector start = GetActorLocation() + meleeKickStartOffset;
		FVector end = GetActorLocation() + meleeKickStartOffset + rotatedForwardVector * meleeKickRange;


		if (UKismetSystemLibrary::LineTraceMulti(this, start, end, traceChannel, false, IgnoredActors, EDrawDebugTrace::ForDuration, hitResults, true, FLinearColor::Red, FLinearColor::Green, 5.f)) //if (GetWorld()->LineTraceMultiByChannel(hitResults, Start, End, ECC_GameTraceChannel11, Params))
		{
			for (FHitResult hitResult : hitResults)
			{
				if (!OutHitActors.Contains(hitResult.GetActor()))
					OutHitActors.Add(hitResult.GetActor());
			}
		}
	}
	actorsHitByKick = OutHitActors;
	if (OutHitActors.Num() > 0)
	{
		for (AActor* hitActor : actorsHitByKick)
		{
			FDamageEvent damageEvent;
			hitActor->TakeDamage(kickDamage, damageEvent, GetWorld()->GetFirstPlayerController(), this);
		}
	}
}
TMulticastDelegate<void(float, float, float)> APlayerCharacter::OnHealthUpdated;
void APlayerCharacter::CallOnHealthUpdated(float health, float maxhealth, float absoluteMaxHealth)
{
	OnHealthUpdated.Broadcast(health, maxhealth, absoluteMaxHealth);
}
TMulticastDelegate<void(AWeaponsBaseClass*, UTexture2D*)> APlayerCharacter::OnWeaponInfoUpdate;
void APlayerCharacter::CallOnWeaponInfoUpdated()
{
	OnWeaponInfoUpdate.Broadcast(currentlyEquippedWeapon, currentlyEquippedWeapon->GetItemIcon());
}
TMulticastDelegate<void(AKnifeBaseClass*, UTexture2D*)> APlayerCharacter::OnKnifeInfoUpdate;
void APlayerCharacter::CallOnKnifeInfoUpdated()
{
	OnKnifeInfoUpdate.Broadcast(currentlyEquippedKnife, currentlyEquippedKnife->GetItemIcon());
}
TMulticastDelegate<void(int)> APlayerCharacter::OnSelectingWeapon;
void APlayerCharacter::CallOnSelectingWeapon(int weaponIndex)
{
	OnSelectingWeapon.Broadcast(weaponIndex);
}
void APlayerCharacter::Destroyed()
{
	for (AWeaponsBaseClass* Knife : equippedKnives)
	{
		Knife->Destroy();
	}
	for (AWeaponsBaseClass* PrimaryWeapon : equippedWeapons)
	{
		PrimaryWeapon->Destroy();
	}
	Super::Destroyed();
}

void APlayerCharacter::PlayAnimationMontageOnPlayer(UAnimMontage* animationToPlay, float& montagePlayLength, bool blockTakeDamage)
{
	if(!bIsPlayingMontageOnPlayer)
	{
		bIsPlayingMontageOnPlayer = true;
		bIsMontageBlockingDamage = blockTakeDamage;
		GetCharacterMovement()->MovementMode = MOVE_None; //Disable Movement
	
		UnCrouch();
		GetMesh()->GetAnimInstance()->Montage_Play(animationToPlay);
		
		FTimerManager& timerManager = GetWorld()->GetTimerManager();
		timerManager.SetTimer(animationMontageTimerHandle, this, &APlayerCharacter::OnAnimMontageFinished, 	animationToPlay->GetPlayLength(), false);
	}
	montagePlayLength = animationToPlay->GetPlayLength();
}
void APlayerCharacter::OnAnimMontageFinished()
{
	bIsPlayingMontageOnPlayer = false;
	bIsMontageBlockingDamage = false;
	GetCharacterMovement()->MovementMode = MOVE_Walking;
}
bool APlayerCharacter::GetIsPlayingMontageOnPlayer() const
{
	return bIsPlayingMontageOnPlayer;
}

void APlayerCharacter::PlayTakeDamageAnimations(AActor* damageCauser, TArray<UAnimMontage*> animations)
{
	//First we get the enemy pos relative to player. Having the enemy pos in local player space will make the maths much easier 
	FTransform enemyTransform = damageCauser->GetTransform();
	FTransform playerTransform = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorTransform();
	FTransform enemyRelativeToPlayer = enemyTransform.GetRelativeTransform(playerTransform);

	FVector2d enemyRelative2dPos = FVector2d(enemyRelativeToPlayer.GetLocation().X, enemyRelativeToPlayer.GetLocation().Y);
	FVector2d enemyNormalizedPos = enemyRelative2dPos.GetSafeNormal();
	
	//Next step is to convert the player pos into an animation index and then use it to play a relevant directional animation.
	//We start off using Atan2 to get a rotation and then divide it by 90 to split it into 4 indexes to pick out an animation from an array
	float enemyAtan2Rotation = (180.0)/UE_DOUBLE_PI * FMath::Atan2(enemyNormalizedPos.X, enemyNormalizedPos.Y); //X is Y and Y is X with Atan2
	float enemyUnitCirclePosition = enemyAtan2Rotation + 180.f; //To get rid of negative values
	float enemyRotationOffset = enemyUnitCirclePosition + 45.f; //Offset by 45 degrees so it feels more natural
	int enemyRotationClampedTo360 = (int)enemyRotationOffset % 360;
	int animIndex = enemyRotationClampedTo360 / 90;

	float montagePlayLength;
	PlayAnimationMontageOnPlayer(animations[animIndex], montagePlayLength, true);
}
#pragma endregion
void APlayerCharacter::TryFireWeapon(AWeaponsBaseClass* equippedWeapon, bool& isSuccessful, USkeletalMeshComponent* playerSkeletalMesh)
{
	if (!IsValid(equippedWeapon))
	{
		isSuccessful = false;
		return;
	}
    if (equippedWeapon->TryFireWeapon())
    {
    	CallOnWeaponInfoUpdated();
    	playerSkeletalMesh->GetAnimInstance()->Montage_Play(equippedWeapon->GetFirAnimMontage(), 1 / equippedWeapon->GetFireRate());
    	isSuccessful = true;
    }
	else isSuccessful = false;
}


void APlayerCharacter::ReloadWeapon(AWeaponsBaseClass* equippedWeapon, USkeletalMeshComponent* playerSkeletalMesh)
{
	/*if (equippedWeapon->IsA<AFirearm>())
	{
		AFirearm* equippedFirearm = Cast<AFirearm>(equippedWeapon);
		if (equippedFirearm->GetClipSize() < equippedFirearm->GetMaxClipSize())
		{
			FTimerManager& timerManager = GetWorld()->GetTimerManager();
			

			playerSkeletalMesh->GetAnimInstance()->Montage_Play(equippedWeapon->GetReloadAnimMontage(), 1 / equippedFirearm->GetReloadSpeed());
			equippedFirearm->StartReloadingWeapon();
		}
	}*/
}

bool APlayerCharacter::CanAimWeapon() const
{
	if (bIsCrouched)
		return false;
	if (bIsPlayingMontageOnPlayer)
		return false;
	if (WeaponState == EWeaponState::Aiming || WeaponState == EWeaponState::Idle)
		return true;
	else return false;
}

bool APlayerCharacter::CanPerformKnifeTakedown() const
{
	if (!IsValid(closestTakedownableEnemy))
		return false;
	if (bIsPlayingMontageOnPlayer)
		return false;
	if (closestEnemyTakedownType == ETakedownType::RoundhouseKick)
		return false;
	if (closestTakedownableEnemy->GetIsTakedownable())
		return true;
	else return false;
}

/*void APlayerCharacter::TryReloadWeapon(AWeaponsBaseClass* equippedWeapon)
{
	if (equippedWeapon->IsA<AFirearm>())
	{
		AFirearm* equippedFirearm = Cast<AFirearm>(equippedWeapon);
		if (equippedFirearm->GetClipSize() < equippedFirearm->GetMaxClipSize())
		{
			GetMesh()->GetAnimInstance()->Montage_Play(currentlyEquippedWeapon->GetReloadAnimMontage(), 1 / equippedFirearm->GetReloadSpeed());
			
			FTimerManager& timerManager = GetWorld()->GetTimerManager();
			timerManager.SetTimer(reloadTimerHandle, this, &APlayerCharacter::ReloadCurrentWeapon, equippedFirearm->GetReloadSpeed(), true);
		}
	}
}
void APlayerCharacter::ReloadCurrentWeapon()
{
	if (currentlyEquippedWeapon->IsA<AFirearm>())
	{
		AFirearm* equippedFirearm = Cast<AFirearm>(currentlyEquippedWeapon);
		GetMesh()->GetAnimInstance()->Montage_Play(currentlyEquippedWeapon->GetReloadAnimMontage(), 1 / equippedFirearm->GetReloadSpeed());
		
	}
}*/
void APlayerCharacter::SwitchWeapon(AWeaponsBaseClass* currentWeapon, float newSelectedWeapon)
{
	AWeaponsBaseClass* newWeapon;
	//This segment is here for safety so the player does not switch to an index without a corresponding weapon in the list
	if (equippedWeapons.Num() -1 >= (int)newSelectedWeapon) 
		newWeapon = equippedWeapons[(int)newSelectedWeapon];
	else return;
	
	if (!IsValid(newWeapon))
		return;
	if (currentWeapon == newWeapon)
		return;

	currentWeapon->SetActorHiddenInGame(true);
	newWeapon->SetActorHiddenInGame(false);
	currentlyEquippedWeapon = newWeapon;
	CallOnWeaponInfoUpdated();
}

void APlayerCharacter::EquipWeaponOtherClass(AWeaponsBaseClass* currentWeapon, AWeaponsBaseClass* newWeapon)
{
	currentWeapon->SetActorHiddenInGame(true);
	newWeapon->SetActorHiddenInGame(false);
	currentlyEquippedWeapon = newWeapon;
	WeaponState = EWeaponState::Deploying;
}
bool APlayerCharacter::IsEnemyTakedownable(AActor& Context)
{
	AActor* actor = &Context;
	ABaseEnemy* baseEnemy = Cast<ABaseEnemy>(actor);
	if (IsValid(baseEnemy))
	{
		if (baseEnemy->GetIsTakedownable())
			return true;
	}
	return false;
}
//Gets whether the player can interact with an actor. It was created because of the function GetClosestActorThatFitsCriteria that takes in a TFunctionRef and checks if a bunch of actors will return true
//Since both IInteractable interface and AInteractableObject is used in the game it needs to support both
bool APlayerCharacter::IsActorInteractable(AActor& Context)
{
	AActor* actor = &Context;

	//We dont wanna interact with interactables not on the screen
	if (!UGeneralUtilities::CheckIfPositionOnScreen(actor->GetWorld()->GetFirstPlayerController(), actor->GetActorLocation()))
		return false;
	
	if(Context.GetClass()->ImplementsInterface(UInteractable::StaticClass()))
	{
		if (IInteractable::Execute_CanInteractWithObject(actor))
			return true;
	}
	//Check for implementing AActor interactable class
	AInteractableObject* interactableObject = Cast<AInteractableObject>(actor);
	if (IsValid(interactableObject))
	{
		if (interactableObject->IsInteractable())
			return true;
	}
	return false;
}
//This function takes in a TFunctionRef and determines if they meet the critera inside the function. It was created because the player needs to both get all interactable actors and all enemies susceptible to takedowns. 
//Since the process for both of them was relatively similar, this function was made to reuse the code. Do not that whatever function is passed into bMeetsCritera needs to be made static due to technical reasons related to TFunctionRef
//Returns null if no actor was found
AActor* APlayerCharacter::GetClosestActorThatFitsCriteria(float _sweepRange, TFunctionRef<bool(AActor&)> bMeetsCriteria)
{
	//Raycast to get all objects around player
	TArray<FOverlapResult> hitObjects;
	GetWorld()->OverlapMultiByChannel(hitObjects, GetActorLocation(), FQuat(), ECC_Visibility, FCollisionShape::MakeSphere(_sweepRange));

	//Make an array of only the actors that meets the criteria
	TArray<AActor*> availableActors;
	for (FOverlapResult hitObject : hitObjects)
	{
		if (IsValid(hitObject.GetActor())) //For some reason there can be a valid hit result without a valid actor so this check is to avoid segfault
		{
			AActor* actor = hitObject.GetActor();

			if (bMeetsCriteria(*actor))
				availableActors.Add(hitObject.GetActor());
		}
	}
	
	//Check so we actually have found any actors
	if (availableActors.Num() <= 0)
		return nullptr;

	//Get the closest one
	FVector playerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	return UGeneralUtilities::FindClosestActor(availableActors, playerLocation);
}
void APlayerCharacter::TryStartSwitchingWeapon()
{
	if ((int)selectedWeapon >= equippedWeapons.Num())
		return;
	AWeaponsBaseClass* targetWeapon = equippedWeapons[(int)selectedWeapon];
	if (IsValid(targetWeapon))
	{
		if (currentlyEquippedWeapon != targetWeapon)
		{
			WeaponState = EWeaponState::Holstering;
		}
	}
}
//FIXME: BUSTED FOR SOME REASON
FRotator APlayerCharacter::GetLookTowardsCrosshairRotation(float distFromCamToCursor, float deltaTime, float interpSpeed) const
{
	FVector camWorldPosition = PlayerCamera->GetComponentLocation();
	FVector camForwardVector = PlayerCamera->GetForwardVector();
	FVector target = camWorldPosition + camForwardVector * distFromCamToCursor;
	FRotator targetRotation = FRotationMatrix::MakeFromX(target - GetActorLocation()).Rotator(); //MakeFromX essentially Look At Rotation

	//Yaw is Z Rotation for some godforsaken reason why can we not agree to just use simpler terms in maths
	if (GetActorRotation() != targetRotation)
		return FMath::RInterpTo(GetActorRotation(), FRotator(0, targetRotation.Yaw, 0), deltaTime, interpSpeed);
	else return GetActorRotation();
}
// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	cameraRotation.X = GetActorRotation().Yaw; //So that the camera is always behind the player when spawned even if player spawn is rotated
	RecalculateCameraTransform(25.0f, equippedWeapons, equippedKnives);
	UPlayMontageOnPlayerWithCallbacks::montageStartDelegate.AddDynamic(this, &APlayerCharacter::OnMontageWithCallbacksStarted);
	UPlayMontageOnPlayerWithCallbacks::montageEndDelegate.AddDynamic(this, &APlayerCharacter::OnMontageWithCallbacksEnded);
	
	GetWorld()->GetGameInstance()->GetSubsystem<UPlayerInventorySubsystem>()->OnItemAdded.AddDynamic(this, &APlayerCharacter::OnItemAdded);
	GetWorld()->GetGameInstance()->GetSubsystem<UPlayerInventorySubsystem>()->OnItemInfoUpdated.AddDynamic(this, &APlayerCharacter::OnItemInfoUpdated);
	
}
// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ABaseEnemy* newClosestTakedownableEnemy = Cast<ABaseEnemy>(GetClosestActorThatFitsCriteria(takedownableEnemiesSweepRange, &APlayerCharacter::IsEnemyTakedownable));

	if (IsValid(newClosestTakedownableEnemy))
		closestEnemyTakedownType = newClosestTakedownableEnemy->GetTakedownType();
	else
		closestEnemyTakedownType = ETakedownType::NONE;

	if (newClosestTakedownableEnemy != closestTakedownableEnemy)
	{
		if (IsValid(closestTakedownableEnemy))
			closestTakedownableEnemy->NotifyIsNoLongerClosestTakedownable();
		
		if (IsValid(newClosestTakedownableEnemy))
		{
			newClosestTakedownableEnemy->NotifyIsClosestTakedownable();
		}
		closestTakedownableEnemy = newClosestTakedownableEnemy;
	}

	if (!IsValid(closestTakedownableEnemy))
	{
		closestInteractable = GetClosestActorThatFitsCriteria(interactablesSweepRange, &APlayerCharacter::IsActorInteractable);

		if (IsValid(closestInteractable))
		{
			AInteractableObject* closestInteractableObject = Cast<AInteractableObject>(closestInteractable);
			if (IsValid(closestInteractableObject))
			{
				closestInteractableObject->NotifyIsClosest();
			}
			else if (!closestInteractable->GetClass()->ImplementsInterface(UInteractable::StaticClass()))
			{
				UE_LOG(LogTemp, Warning, TEXT("Closest interactable does not implement interface"));
			}
			else
			{
				IInteractable::Execute_OnConfirmedClosestInteractable(closestInteractable);
			}

		}
	}
	switch (WeaponState)
	{
		case EWeaponState::Deploying:
			deployTimeElapsed += DeltaTime;
			if (deployTimeElapsed >= currentlyEquippedWeapon->deploySpeed)
			{
				deployTimeElapsed = 0.0f;
				WeaponState = EWeaponState::Idle;
			}
			break;
		case EWeaponState::Idle:
			WeaponIdleAndAimingStateBP();
			break;
		case EWeaponState::Aiming:
			WeaponIdleAndAimingStateBP();
			break;
		case EWeaponState::Holstering:
			holsterTimeElapsed += DeltaTime;
			if (holsterTimeElapsed >= currentlyEquippedWeapon->holsterSpeed)
			{
				holsterTimeElapsed = 0.0f;
				SwitchWeapon(currentlyEquippedWeapon, selectedWeapon);
				WeaponState = EWeaponState::Deploying;
			}
			break;
	}
}
// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}