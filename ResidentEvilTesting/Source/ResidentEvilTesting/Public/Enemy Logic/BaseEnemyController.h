// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "GameplayTagContainer.h"
#include "Perception/AIPerceptionTypes.h"
#include "BaseEnemyController.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDetectedPlayer, bool, bCanDetectPlayer);
UCLASS()
class RESIDENTEVILTESTING_API ABaseEnemyController : public AAIController
{
	GENERATED_BODY()
public:
	ABaseEnemyController(); //Constructor

#pragma region Variables
public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "PlayerPerceptionSystem")
	FOnDetectedPlayer OnDetectedPlayer;


protected:
	//The Gameplay tag used to inject custom Behaviour Tree Behaviour for pre scripted behaviour
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	FGameplayTag behaviourTag;
	
	//The name of whatever bool is used in the blackboard to determine if pre scripted behaviour should be ran
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	FName RunPreScriptedBehaviourKeyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerPerceptionSystem", meta = (AllowPrivateAccess = "true"))
	UAIPerceptionComponent* AIPerceptionComponent;
#pragma endregion

#pragma region Functions
public:
	UFUNCTION(BlueprintCallable, Category = "PreScriptedBehaviour")
	void RunPreScriptedBehaviour(UBehaviorTree* scriptedBehaviour);
protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "PlayerPerceptionSystem")
	void OnTargetPerceptionUpdatedSight(AActor* Actor, FAIStimulus AIStimulus);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "PlayerPerceptionSystem")
	void OnTargetPerceptionUpdatedHearing(AActor* Actor, FAIStimulus AIStimulus);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "PlayerPerceptionSystem")
	void OnTargetPerceptionFailDebug();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "ControlledPawn")
	void OnControlledEnemyKilled();
	
	UFUNCTION(BlueprintCallable, Category = "BehaviourTree")
	void SuspendBehaviourTree()
	{
		GetBrainComponent()->StopLogic("");//No idea how reason is supposed to be used but oh well
	}
	
	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus AIStimulus);
	
	virtual void BeginPlay() override;
#pragma endregion
};
