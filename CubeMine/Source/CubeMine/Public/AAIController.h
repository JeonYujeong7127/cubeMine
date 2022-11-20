// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AAIController.generated.h"

UCLASS()
class CUBEMINE_API AAAIController : public AAIController
{
	GENERATED_BODY()

public:
	AAAIController();

	virtual void BeginPlay() override;
	
	virtual void OnPossess(APawn* InPawn) override;

public:
	static const FName HomePosKey;
	static const FName PatrolPosKey;
	static const FName TargetKey;
	static const FName AttackKey;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		class UBehaviorTree* BTAsset;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		class UBlackboardData* BBAsset;

public:

};
