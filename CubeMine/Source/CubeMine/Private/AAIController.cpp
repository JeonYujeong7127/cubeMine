// Fill out your copyright notice in the Description page of Project Settings.


#include "AAIController.h"
#include "AAI_Character.h"
#include "AIWaypoint.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "BotMovementCharacter.h"
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

	//DistanceToPlayer = GetPawn()->GetDistanceTo(GetWorld()->GetFirstPlayerController()->GetPawn());

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

	//캐릭터 폰에 대해 waypoint를 체크하고 다음 이동지점까지 이동하게 한다
	AAAI_Character* AI_Character = Cast<AAAI_Character>(GetPawn());

	/*
	if (DistanceToPlayer > AISightRadius)
	{
		bIsPlayerDetected = false;
	}
	*/
	/*
	if (AI_Character->NextWaypoint != nullptr && bIsPlayerDetected == false) {
		//순회
		MoveToActor(AI_Character->NextWaypoint, 5.0f);
	}
	*/
	if (bIsPlayerDetected == true){
		if (!bIsAttack && !bIsOverlap) {
			bIsRunning = true;
			MoveToActor(GetWorld()->GetFirstPlayerController()->GetPawn(), 5.0f, false);
		}
		//UE_LOG(LogTemp, Warning, TEXT("플레이어 위치로 이동 :%lf"), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation().X);
	}
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
	UE_LOG(LogTemp, Warning, TEXT("DetectedPawns: %i"), DetectedPawns.Num());

	/*
	for (size_t i = 0; i < DetectedPawns.Num(); i++) {
		DistanceToPlayer = GetPawn()->GetDistanceTo(DetectedPawns[i]);
		UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), DistanceToPlayer);
	}
	*/
	bIsPlayerDetected = true;
}

void AAAIController::BeginOverlap()
{
	bIsOverlap = true;
	AttackPlayer();
}

void AAAIController::LoopAttackAction()
{
	//한 번의 공격 모션을 반복하는 타이머 함수
	if (bIsOverlap) {
		UE_LOG(LogTemp, Warning, TEXT("공격모션 1회"));
		bIsAttack = true;
		AttackPlayerAction();
	}
	else {
		bIsAttack = false;
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
	}
}

void AAAIController::AttackPlayer()
{	//공격 타이머를 호출한다
	if (bIsPlayerDetected == true) {
		bIsRunning = false;
		bIsAttack = true;
		GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AAAIController::LoopAttackAction, 2.0f, true); //2초마다 한번씩 공격하게 한다
	}
}

void AAAIController::EndOverlap()
{
	bIsOverlap = false;
}

void AAAIController::AttackPlayerAction()
{
	/*
	* @todo 플레이어를 공격하여 생기는 이벤트
	*/
}






