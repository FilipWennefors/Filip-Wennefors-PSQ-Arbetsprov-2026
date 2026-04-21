// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup And Item Logic/InteractableObject.h"

// Sets default values
AInteractableObject::AInteractableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->SetupAttachment(RootComponent);
	
	inputIndicatorWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("InputIndicator"));
	inputIndicatorWidget->SetupAttachment(mesh);
}

// Called when the game starts or when spawned
void AInteractableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInteractableObject::InternalNotifyClosestInteractable()
{
	indicatorDeactivationTimeElapsed = 0;
	inputIndicatorWidget->SetVisibility(true);
}

bool AInteractableObject::IsInteractable()
{
	return true;
}

void AInteractableObject::StartInteraction_Implementation()
{
}
void AInteractableObject::StopInteraction_Implementation()
{
}

void AInteractableObject::NotifyIsClosest()
{
	InternalNotifyClosestInteractable();
}

// Called every frame
void AInteractableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (indicatorDeactivationTimeElapsed < indicatorDeactivationTime)
	{
		indicatorDeactivationTimeElapsed += DeltaTime;

		FVector widgetPosition = inputIndicatorWidget->GetComponentLocation();
		FVector playerCameraPosition = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
		FRotator facePlayerRotation = FRotationMatrix::MakeFromX(playerCameraPosition - widgetPosition).Rotator();
		
		inputIndicatorWidget->SetWorldRotation(facePlayerRotation);
	}
	else
		inputIndicatorWidget->SetVisibility(false);
	
}

