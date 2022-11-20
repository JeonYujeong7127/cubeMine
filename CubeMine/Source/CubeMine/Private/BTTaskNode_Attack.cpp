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
	//���ٽ�.ABCharacter�� AttackEnd Delegate�� ȣ���ϸ� IsAttacking�� false��

	ABCharacter->OnAttackEnd.AddLambda([this]()->void {
		IsAttacking = false;
		});

	//�ϴ� InProgress���� �ӹ����Ѵ�.������ ������ ������ ��� ���������ش�.
	return EBTNodeResult::InProgress;
}

void UBTTaskNode_Attack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	//OnAttackEnd Delegate�� ȣ��Ǹ� Attacking�� false �ǹǷ�
	if (!IsAttacking)
	{
		//���� �½�ũ�� �������� �˷��ش�
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
