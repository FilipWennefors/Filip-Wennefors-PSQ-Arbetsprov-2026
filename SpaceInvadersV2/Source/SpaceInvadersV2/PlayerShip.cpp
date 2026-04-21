// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

#include "Bullet.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"


// Sets default values 
APlayerShip::APlayerShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	playerShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerShip"));
	playerShipMesh->SetupAttachment(RootComponent);

	playerShipCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerShipCamera"));
	playerShipCamera->SetupAttachment(playerShipMesh);

	playerShipHitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("Hitbox"));
	playerShipHitbox->SetupAttachment(playerShipMesh);

	firingCooldown = 0;

	
}
TMulticastDelegate<void(int)> APlayerShip::OnPlayerHealthUpdated;
// Called when the game starts or when spawned
void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	
}
/*Called when the player is pressing the move key. Todo make it so the player accelerates in speed and slows down when stopping. Also make it so the player moves when pressing button
 *
 * 
 */
void APlayerShip::MovePlayerShip(float speed, float direction)
{
	_movingPlayerShip = true;
	_speed = speed;
	_direction = direction;
	
}
float APlayerShip::TestMirroredEaseInOutQuartFactor(float t)
{
	//Alright I have figured this shit out

	//if the time is less than -0.5, use curve h(x)=1-(-2*x-2)^4/2
	//else if the curve is less than 0.5, use curve f(x)=8*x*x*x*x
	//else use curve h(x)=1-(-2*x-2)^4/2
	
	float time = FMath::Clamp(t, -1, 1);
	float factor;

	if (time <= -0.5f )
		factor = 1 - FMath::Pow(-2 * time - 2, 4) / 2;
	else if (time > -0.5f && time < 0.5f)
		factor = -(8 * time * time * time * time);
	else
		factor = 1 - FMath::Pow(-2 * time + 2, 4) / 2;
	return factor;
}

void APlayerShip::TakeDamage(int damageTaken)
{
	if(!hasIFrames)
	{
		_health -= damageTaken;
		OnPlayerHealthUpdated.Broadcast(_health);
		if (_health <= 0)
			Destroy();
		else
		{
			hasIFrames = true;
			FTimerHandle iFrameTimerHandle;
			FTimerManager& timerManager = GetWorldTimerManager();
			timerManager.SetTimer(iFrameTimerHandle, this, &APlayerShip::DisableIFrames, iFrameDuration, false);
		}
	}
}
void APlayerShip::DisableIFrames()
{
	hasIFrames = false;
}
void APlayerShip::SetPlayerHealth(int newHealth)
{
	_health = newHealth;
	OnPlayerHealthUpdated.Broadcast(_health);
	if (_health <= 0)
		Destroy();
}
void APlayerShip::LocalMovePlayerShip(float speed, float direction, float deltaTime)
{
	//What we need to do next here is to rewrite the code and clamp the min and max positions so the ship doesn't go outside the player screen
	FVector currentPosition = GetActorLocation();

	float yPositionClamped = FMath::Clamp(currentPosition.Y + speed * direction * deltaTime, MinSidewaysPosition, MaxSidewaysPosition);

	UE_LOG(LogTemp, Warning, TEXT("MinSidewaysPosition: %f, MaxSidewaysPosition: %f"), MinSidewaysPosition, MaxSidewaysPosition)
	UE_LOG(LogTemp, Warning, TEXT("CurrentPosition.Y: %f, yPositionClamped: %f"), currentPosition.Y, yPositionClamped)
	FVector newPosition = FVector(currentPosition.X, yPositionClamped, currentPosition.Z);

	SetActorLocation(newPosition, true);
}

// Called every frame
void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_movingPlayerShip)
		LocalMovePlayerShip(_speed, _direction, DeltaTime);
	
	_movingPlayerShip = false;

	if(firingCooldown > 0)
		firingCooldown -= DeltaTime;
}

// Called to bind functionality to input
void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
/* Called every frame the player is holding down the fire key. Todo add a cooldown for shooting and make it so the player fires the bullet after cooldown
 *
 * 
 */
void APlayerShip::Shoot(float fireRate, FTransform shipRelativeSpawnPos)
{
	if (firingCooldown <= 0)
	{
		
		firingCooldown = fireRate;
		GetWorld()->SpawnActor<ABullet>(bulletActor, GetActorTransform() + shipRelativeSpawnPos);
	}
}