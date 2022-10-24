// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AAIController.generated.h"

UCLASS()
class CUBEMINE_API AAAIController : public AAIController
{
	GENERATED_BODY()

public:
	AAAIController();

	virtual void BeginPlay() override;
	
	virtual void OnPossess(APawn* InPawn) override;

	virtual void Tick(float DeltaSeconds) override;

	virtual FRotator GetControlRotation() const override;

public:
	UFUNCTION()
		void OnPawnDetected(const TArray<AActor*> &DetectedPawns);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float AISightRadius = 500.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float AISightAge = 5.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float AILosesSightRadius = AISightRadius + 50.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float AIFieldOfView = 90.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		class UAISenseConfig_Sight* SightConfig;
};
