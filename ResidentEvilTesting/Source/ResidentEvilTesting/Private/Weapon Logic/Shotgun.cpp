// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon Logic/Shotgun.h"

#include "Engine/DamageEvents.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Player Logic/PlayerCharacter.h"

void AShotgun::FireWeapon()
{
	UE_LOG(LogTemp, Warning, TEXT("Shotgun started"));
	APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(playerPawn);
	
	FVector firingOriginPos = playerCharacter->CalculateWeaponRaycastOriginPos();
	float horizontalStartRotation =  -(horizontalSpreadRotation / 2);
	float horizontalRotationPerIncrement = horizontalSpreadRotation / horizontalPelletsCount;

	float verticalStartRotation = -(verticalSpreadRotation / 2);
	float verticalRotationPerIncrement = verticalSpreadRotation / verticalPelletsCount;
	
	for (int y = 0; y < verticalPelletsCount; y++)
	{
		float verticalRotation = verticalStartRotation + verticalRotationPerIncrement * y;
		
		for (int x = 0; x < horizontalPelletsCount; x++)
		{
			float horizontalRotation = horizontalStartRotation + horizontalRotationPerIncrement * x;
			FRotator raycastRotation = FRotator(verticalRotation, horizontalRotation, 0.f);
			FVector rotatedForwardVector = raycastRotation.RotateVector(playerCharacter->GetCameraForwardVector());
			FVector end = rotatedForwardVector * fireRange + firingOriginPos;
		
			FHitResult outHit;
			FCollisionQueryParams params;
			params.AddIgnoredActor(this);
			params.AddIgnoredActor(GetWorld()->GetFirstPlayerController()->GetPawn()); //
	
			if (GetWorld()->LineTraceSingleByChannel(outHit, firingOriginPos, end, ECC_GameTraceChannel1, params))
			{
				AActor* damagedActor = outHit.GetActor();
				if (!IsValid(damagedActor))		//If the actor is a brush, it will be null, and crash the game
					return;						//Therefore return to prevent a crash
				UE_LOG(LogTemp, Warning, TEXT("Hit object"));
				FVector HitFromDirection = outHit.TraceStart;
	
				FPointDamageEvent pointDamageEvent(baseDamage, outHit, HitFromDirection, nullptr);
				damagedActor->TakeDamage(baseDamage, pointDamageEvent, GetWorld()->GetFirstPlayerController(), this);
			}
		}
	}
}

