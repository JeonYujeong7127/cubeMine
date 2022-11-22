// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsInAttackRange.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AAI_Character.h"
#include "AAIController.h"
#include "../MainCharacter.h"
#include "CubeMine/CubeMineCharacter.h"

bool UBTDecorator_IsInAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();

	
	if (nullptr == ControllingPawn)
		return false;

	auto ABCharacter = Cast<AAAI_Character>(OwnerComp.GetAIOwner()->GetPawn());
	//if (ABCharacter->IsAttack == true)	return true;
	
	auto Target = Cast<AMainCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAAIController::TargetKey));
	if (nullptr == Target) {
		UE_LOG(LogTemp, Warning, TEXT("Target Failed"));
		return false;
	}
		
	bResult = (Target->GetDistanceTo(ControllingPawn) <= 200.0f);
	OwnerComp.GetBlackboardComponent()->SetValueAsBool(AAAIController::AttackKey, bResult);
	ABCharacter->IsInside = bResult;
	return bResult;
}