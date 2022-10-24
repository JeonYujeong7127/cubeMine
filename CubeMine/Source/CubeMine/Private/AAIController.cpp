// Fill out your copyright notice in the Description page of Project Settings.


#include "AAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AAAIController::AAAIController() 
{
	PrimaryActorTick.bCanEverTick = true;

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config!"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

	SightConfig->SightRadius = AISightRadius;
	SightConfig->LoseSightRadius = AILosesSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = AIFieldOfView;
	SightConfig->SetMaxAge(AISightAge);

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->ConfigureSense(*SightConfig);
	GetPerceptionComponent()->SetDominantSense(SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AAAIController::OnPawnDetected);

}

void AAAIController::BeginPlay()
{
	Super::BeginPlay();

	if (GetPerceptionComponent() != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("All Systems Set"));
	} 
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("System Set Failed"));
	}
	
}

void AAAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void AAAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

FRotator AAAIController::GetControlRotation() const
{
	if (GetPawn() == nullptr) 
	{
		return FRotator(0.0f, 0.0f, 0.0f);
	}

	return FRotator(0.0f, GetPawn()->GetActorRotation().Yaw, 0.0f);
}

void AAAIController::OnPawnDetected(const TArray<AActor*> &DetectedPawns)
{
	UE_LOG(LogTemp, Warning, TEXT("감지?"));
}
