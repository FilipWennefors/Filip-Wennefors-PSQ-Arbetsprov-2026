
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PlayMontageOnPlayerWithCallbacks.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMontageOnPlayerDelegate, FName, notifyName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerMontageWithCallbacksStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerMontageWithCallbacksEnd);
UCLASS()
class RESIDENTEVILTESTING_API UPlayMontageOnPlayerWithCallbacks : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
#pragma region Variables
	public:
	static FOnPlayerMontageWithCallbacksStart montageStartDelegate;
	static FOnPlayerMontageWithCallbacksEnd montageEndDelegate;
	
private:
	UPROPERTY(BlueprintAssignable)
	FOnMontageOnPlayerDelegate OnMontageCompleted;
	
	UPROPERTY(BlueprintAssignable)
	FOnMontageOnPlayerDelegate OnMontageBlendingOut;

	UPROPERTY(BlueprintAssignable)
	FOnMontageOnPlayerDelegate OnMontageInterrupted;

	UPROPERTY(BlueprintAssignable)
	FOnMontageOnPlayerDelegate OnMontageNotifyBegin;

	UPROPERTY(BlueprintAssignable)
	FOnMontageOnPlayerDelegate OnMontageNotifyEnd;

	UPROPERTY() USkeletalMeshComponent* _playerSkeletalMesh;
	UPROPERTY() UAnimMontage* _montageToPlay;
	float _playRate;
	float _startingPosition;
	FName _startingSection;
	
	FOnMontageEnded montageCompletedDelegate;
#pragma endregion

#pragma region Functions
private:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly, WorldContext = "WorldContextObject"), Category = "PlayMontage")
	static UPlayMontageOnPlayerWithCallbacks* PlayMontageOnPlayerWithCallbacks(USkeletalMeshComponent* playerSkeletalMesh, UAnimMontage* montageToPlay, float playRate, float startingPosition, FName startingSection);
	
	UFUNCTION()
	void CallOnBlendOut(FName Name);

	UFUNCTION()
	void CallOnInterrupted(FName Name);
	
	UFUNCTION()
	void CallOnNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);

	UFUNCTION()
	void CallOnCompleted(UAnimMontage* AnimMontage, bool bArg);

	UFUNCTION()
	void CallOnNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
	
	virtual void Activate() override;

	virtual void BeginDestroy() override;
#pragma endregion
}; 
