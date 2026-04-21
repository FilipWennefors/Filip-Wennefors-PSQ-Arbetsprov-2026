#include "Weapon Logic/Knife.h"

#include "Components/AudioComponent.h"

void AKnife::BeginPlay()
{
	Super::BeginPlay();
}

void AKnife::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (AttackingCooldown > 0)
		AttackingCooldown -= DeltaTime;
}


bool AKnife::TryFireWeapon()
{
	if (AttackingCooldown <= 0 )
	{
		AttackingCooldown = fireRate;
		weaponAudioSource->Sound = shootWeaponSFX;
		weaponAudioSource->Play();
		return true;
	}
	else return false;
}

