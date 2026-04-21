// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FWeaponAnimations.h"
#include "UObject/NoExportTypes.h"
#include "WeaponsBaseClass.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVILTESTING_API AWeaponsBaseClass : public AActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AWeaponsBaseClass();

#pragma region Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* weaponMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UAudioComponent* weaponAudioSource;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FName SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float deploySpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	float holsterSpeed;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	float fireRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	FWeaponAnimations Animations;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UTexture2D* itemIcon;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* DeployingAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* IdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* FiringAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* ReloadingAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* AimingAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UAnimSequence* HolsteringAnimation;
#pragma endregion

#pragma region Functions
public:
	UAnimMontage* GetFirAnimMontage();

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Weapons", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* GetReloadAnimMontage();
	
	float GetFireRate();
	
	virtual bool TryFireWeapon();
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Weapons", meta = (AllowPrivateAccess = "true"))
	FWeaponAnimations GetWeaponAnimations();

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Weapons", meta = (AllowPrivateAccess = "true"))
	UTexture2D* GetItemIcon();

	UFUNCTION(BlueprintImplementableEvent, Category = "Weapons", meta = (AllowPrivateAccess = "true"))
	void OnFireWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Weapons", meta = (AllowPrivateAccess = "true"))
	virtual void OnWeaponSwitchFrom();
#pragma endregion
	
};
