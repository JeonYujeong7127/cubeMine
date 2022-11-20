// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_Detect.h"
#include "AAI_Character.h"
#include "AAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"

void UBTService_Detect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (nullptr == ControllingPawn) return;

	UWorld* World = ControllingPawn->GetWorld();
	FVector Center = ControllingPawn->GetActorLocation();
	float DetectRadius = 600.0f;

	if (nullptr == World) return;
	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams CollisionQueryParam(NAME_None, false, ControllingPawn);
	bool bResult = World->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(DetectRadius),
		CollisionQueryParam
	);

	if (bResult)
	{
		for (auto OverlapResult : OverlapResults)
		{
			if (OverlapResult.GetActor() == GetWorld()->GetFirstPlayerController()->GetPawn()) {
				//UE_LOG(LogTemp, Warning, TEXT("Object Overlap"));
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAAIController::TargetKey, OverlapResult.GetActor());

				//반경을 보여준다
				DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);
				DrawDebugPoint(World, OverlapResult.GetActor()->GetActorLocation(), 10.0f, FColor::Blue, false, 0.2f);
				DrawDebugLine(World, ControllingPawn->GetActorLocation(), OverlapResult.GetActor()->GetActorLocation(), FColor::Blue, false, 0.2f);
				return;
			}
		}
	}
	else
	{
		//null로 설정해준다.
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAAIController::TargetKey, nullptr);
	}

	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f);
}