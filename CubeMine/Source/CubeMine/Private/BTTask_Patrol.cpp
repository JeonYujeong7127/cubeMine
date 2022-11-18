// Fill out your copyright notice in the Description page of Project Settings.



#include "BTTask_Patrol.h"
#include "NavigationSystem.h"
#include "AIController.h"
#include "AAIController.h"

EBTNodeResult::Type UBTTask_Patrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//UE_LOG(LogTemp, Warning, TEXT("½ÇÇà"));
	APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (nullptr == ControllingPawn) {
		UE_LOG(LogTemp, Warning, TEXT("BT Patrol : Pawn Failed"));
		return EBTNodeResult::Failed;
	}

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetNavigationSystem(ControllingPawn->GetWorld());
	if (nullptr == NavSystem) {
		UE_LOG(LogTemp, Warning, TEXT("BT Patrol : Nav Failed"));
		return EBTNodeResult::Failed;
	}

	FVector Origin = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AAAIController::HomePosKey);
	FNavLocation NextPatrol;
	
	if (NavSystem->GetRandomPointInNavigableRadius(ControllingPawn->GetActorLocation(), 500.0f, NextPatrol))
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(AAAIController::PatrolPosKey, NextPatrol.Location);
		return EBTNodeResult::Succeeded;
	}

	//UE_LOG(LogTemp, Warning, TEXT("BT Patrol : Something Failed"));
	return EBTNodeResult::Failed;
}
