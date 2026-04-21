// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy Logic/BaseEnemyController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/AISense_Sight.h"

ABaseEnemyController::ABaseEnemyController()
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception"));
	
}
void ABaseEnemyController::RunPreScriptedBehaviour(UBehaviorTree* scriptedBehaviour)
{
	UBehaviorTreeComponent* behaviorTree = Cast<UBehaviorTreeComponent>(GetBrainComponent());
	if (behaviorTree != nullptr)
	{
		behaviorTree->SetDynamicSubtree(behaviourTag, scriptedBehaviour);
		GetBlackboardComponent()->SetValueAsBool(RunPreScriptedBehaviourKeyName, true);
	}
}
void ABaseEnemyController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus AIStimulus)
{
	
	TSubclassOf<UAISense> SenseClass = UAIPerceptionSystem::GetSenseClassForStimulus(Actor, AIStimulus);
	if (SenseClass.Get() == UAISense_Sight::StaticClass())
	{
		OnTargetPerceptionUpdatedSight(Actor, AIStimulus);	
	}
	else if (SenseClass.Get() == UAISense_Hearing::StaticClass())
	{
		OnTargetPerceptionUpdatedHearing(Actor, AIStimulus);
	}
	else
	{
		OnTargetPerceptionFailDebug();
	}
}

void ABaseEnemyController::BeginPlay()
{
	Super::BeginPlay();
	AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &ABaseEnemyController::OnTargetPerceptionUpdated);
}
//Implement delegate in c++ like this


//Then call broadcast with the param passed in like this
//OnInvaderKilled.Broadcast(scoreGainedUponKill);
