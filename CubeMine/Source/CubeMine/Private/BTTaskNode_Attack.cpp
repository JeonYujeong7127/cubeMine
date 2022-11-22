// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_Attack.h"
#include "AAI_Character.h"
#include "AAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackboardData.h"

const FName UBTTaskNode_Attack::AttackKey(TEXT("Attack"));

UBTTaskNode_Attack::UBTTaskNode_Attack() {
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTaskNode_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto ABCharacter = Cast<AAAI_Character>(OwnerComp.GetAIOwner()->GetPawn());
	if (nullptr == ABCharacter)
		return EBTNodeResult::Failed;

	ABCharacter->Attack();
	IsAttacking = true;
	//람다식.ABCharacter이 AttackEnd Delegate를 호출하면 IsAttacking을 false로

	ABCharacter->OnAttackEnd.AddLambda([this]()->void {
		IsAttacking = false;
		});

	//일단 InProgress에서 머물게한다.공격이 끝나기 전까지 계속 지연시켜준다.
	return EBTNodeResult::InProgress;
}

void UBTTaskNode_Attack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	//OnAttackEnd Delegate가 호출되면 Attacking이 false 되므로
	if (!IsAttacking)
	{
		//공격 태스크가 끝났음을 알려준다
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
