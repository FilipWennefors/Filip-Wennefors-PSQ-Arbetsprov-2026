
// Fill out your copyright notice in the Description page of Project Settings.


#include "Player Logic/PlayMontageOnPlayerWithCallbacks.h"

#include "PlayMontageCallbackProxy.h"

UPlayMontageOnPlayerWithCallbacks* UPlayMontageOnPlayerWithCallbacks::PlayMontageOnPlayerWithCallbacks(
	USkeletalMeshComponent* playerSkeletalMesh, UAnimMontage* montageToPlay, float playRate = 1, float startingPosition = 0,
	FName startingSection = "")
{
	UPlayMontageOnPlayerWithCallbacks* montagePlayer = NewObject<UPlayMontageOnPlayerWithCallbacks>();
	montagePlayer->_playerSkeletalMesh = playerSkeletalMesh;
	montagePlayer->_montageToPlay = montageToPlay;
	montagePlayer->_playRate = playRate;
	montagePlayer->_startingPosition = startingPosition;
	montagePlayer->_startingSection = startingSection;
	return montagePlayer;
}
FOnPlayerMontageWithCallbacksStart UPlayMontageOnPlayerWithCallbacks::montageStartDelegate;
FOnPlayerMontageWithCallbacksEnd UPlayMontageOnPlayerWithCallbacks::montageEndDelegate;

void UPlayMontageOnPlayerWithCallbacks::CallOnBlendOut(FName Name)
{
	OnMontageBlendingOut.Broadcast(Name);
}
void UPlayMontageOnPlayerWithCallbacks::CallOnInterrupted(FName Name)
{
	OnMontageInterrupted.Broadcast(Name);
}
void UPlayMontageOnPlayerWithCallbacks::CallOnNotifyEnd(FName NotifyName,
	const FBranchingPointNotifyPayload& BranchingPointPayload)
{
	OnMontageNotifyEnd.Broadcast(NotifyName);
}
void UPlayMontageOnPlayerWithCallbacks::CallOnNotifyBegin(FName NotifyName,
	const FBranchingPointNotifyPayload& BranchingPointPayload)
{
	OnMontageNotifyBegin.Broadcast(NotifyName);
}
void UPlayMontageOnPlayerWithCallbacks::CallOnCompleted(UAnimMontage* AnimMontage, bool bArg)
{
	OnMontageCompleted.Broadcast(FName());
	montageEndDelegate.Broadcast();	
	UAnimInstance* playerAnimInstance = _playerSkeletalMesh->GetAnimInstance();
	playerAnimInstance->OnPlayMontageNotifyBegin.RemoveDynamic(this, &UPlayMontageOnPlayerWithCallbacks::CallOnNotifyBegin);
	playerAnimInstance->OnPlayMontageNotifyEnd.RemoveDynamic(this, &UPlayMontageOnPlayerWithCallbacks::CallOnNotifyEnd);
}
void UPlayMontageOnPlayerWithCallbacks::Activate()
{
	Super::Activate();
	UAnimInstance* playerAnimInstance = _playerSkeletalMesh->GetAnimInstance();
	playerAnimInstance->Montage_Play(_montageToPlay, _playRate, EMontagePlayReturnType::Duration, _startingPosition, true);

	montageStartDelegate.Broadcast();
	montageCompletedDelegate.BindUObject(this, &UPlayMontageOnPlayerWithCallbacks::CallOnCompleted);
	playerAnimInstance->Montage_SetEndDelegate(montageCompletedDelegate);
	playerAnimInstance->OnPlayMontageNotifyBegin.AddDynamic(this, &UPlayMontageOnPlayerWithCallbacks::CallOnNotifyBegin);
	playerAnimInstance->OnPlayMontageNotifyEnd.AddDynamic(this, &UPlayMontageOnPlayerWithCallbacks::CallOnNotifyEnd);

}

void UPlayMontageOnPlayerWithCallbacks::BeginDestroy()
{
	// UAnimInstance* playerAnimInstance = _playerSkeletalMesh->GetAnimInstance();
	// if (playerAnimInstance != nullptr)
	// {
	// 	playerAnimInstance->OnPlayMontageNotifyBegin.RemoveDynamic(this, &UPlayMontageOnPlayerWithCallbacks::CallOnNotifyBegin);
	// 	playerAnimInstance->OnPlayMontageNotifyEnd.RemoveDynamic(this, &UPlayMontageOnPlayerWithCallbacks::CallOnNotifyEnd);
	// }
	// montageEndDelegate.Broadcast();	
	Super::BeginDestroy();
}
