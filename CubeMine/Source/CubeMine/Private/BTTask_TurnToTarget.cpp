// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_TurnToTarget.h"
#include "AAI_Character.h"
#include "AAIController.h"
#include "CubeMine/CubeMineCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_TurnToTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto ABCharacter = Cast<AAAI_Character>(OwnerComp.GetAIOwner()->GetPawn());
	if (nullptr == ABCharacter)
		return EBTNodeResult::Failed;

	auto Target = Cast<ACubeMineCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAAIController::TargetKey));
	if (nullptr == Target)
		return EBTNodeResult::Failed;

	//타겟의 위치와 현재위치를 빼서 방향벡터를 만든다
	FVector LockVector = Target->GetActorLocation() - ABCharacter->GetActorLocation();
	LockVector.Z = 0.0f;
	FRotator TargetRot = FRotationMatrix::MakeFromX(LockVector).Rotator(); //방향벡터로부터 각도를 얻어낸다(내적?)
	//각도만큼 2초에 걸쳐서 회전시킨다.
	ABCharacter->SetActorRotation(FMath::RInterpTo(ABCharacter->GetActorRotation(), TargetRot, GetWorld()->GetDeltaSeconds(), 2.0f));

	return EBTNodeResult::Succeeded;
}
