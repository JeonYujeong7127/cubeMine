// Fill out your copyright notice in the Description page of Project Settings.


#include "AAIController.h"
#include "AAI_Character.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "BotMovementCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardData.h"

const FName AAAIController::HomePosKey(TEXT("HomePos"));
const FName AAAIController::PatrolPosKey(TEXT("PatrolPos"));
const FName AAAIController::TargetKey(TEXT("Target"));

AAAIController::AAAIController() 
{
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBObject(TEXT("BlackboardData'/Game/AI_Behaivor/BB_AICharacter.BB_AICharacter'"));
	if (BBObject.Succeeded())
	{
		BBAsset = BBObject.Object;
	}
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTObject(TEXT("BehaviorTree'/Game/AI_Behaivor/BT_AICharacter.BT_AICharacter'"));
	if (BTObject.Succeeded())
	{
		BTAsset = BTObject.Object;
	}
	else UE_LOG(LogTemp, Warning, TEXT("BT Failed"));

}

void AAAIController::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (UseBlackboard(BBAsset, (UBlackboardComponent*) Blackboard))
	{
		Blackboard->SetValueAsVector(AAAIController::HomePosKey, InPawn->GetActorLocation());
		Blackboard->SetValueAsVector(AAAIController::PatrolPosKey, InPawn->GetActorLocation());
		
		RunBehaviorTree(BTAsset);
	}
}







