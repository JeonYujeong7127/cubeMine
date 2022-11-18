// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsInAttackRange.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AAI_Character.h"
#include "AAIController.h"

bool UBTDecorator_IsInAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();

	if (nullptr == ControllingPawn)
		return false;

	auto Target = Cast<AAAI_Character>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAAIController::TargetKey));
	if (nullptr == Target)
		return false;
	bResult = (Target->GetDistanceTo(ControllingPawn) <= 200.0f);
	return bResult;
}