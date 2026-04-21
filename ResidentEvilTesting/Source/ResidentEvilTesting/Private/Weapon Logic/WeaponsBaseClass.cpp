// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon Logic/WeaponsBaseClass.h"

#include "Components/AudioComponent.h"


// Sets default values
AWeaponsBaseClass::AWeaponsBaseClass()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	weaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Model"));
	weaponMesh->SetupAttachment(RootComponent);

	weaponAudioSource = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioSource"));
	weaponAudioSource->SetupAttachment(weaponMesh);

}
bool AWeaponsBaseClass::TryFireWeapon()
{
	OnFireWeapon();
	return true;
}

FWeaponAnimations AWeaponsBaseClass::GetWeaponAnimations()
{
	return Animations;
}

UTexture2D* AWeaponsBaseClass::GetItemIcon()
{
	return itemIcon;
}

UAnimMontage* AWeaponsBaseClass::GetFirAnimMontage()
{
	return Animations.FiringAnimation;
}
UAnimMontage* AWeaponsBaseClass::GetReloadAnimMontage()
{
	return ReloadingAnimation;	
}
float AWeaponsBaseClass::GetFireRate()
{
	return fireRate;
}
void AWeaponsBaseClass::OnWeaponSwitchFrom()
{
	
}

// Called when the game starts or when spawned
void AWeaponsBaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponsBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
