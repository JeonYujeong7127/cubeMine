// Fill out your copyright notice in the Description page of Project Settings.


#include "AAI_Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "../MainCharacter.h"

// Sets default values
AAAI_Character::AAAI_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = AAAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	auto AnimInstance = Cast<UAnimInstance>(GetMesh()->GetAnimInstance());

	/*
	CapsuleComponent = GetCapsuleComponent();
	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AAAI_Character::OnPlayerEnter);
	CapsuleComponent->OnComponentEndOverlap.AddDynamic(this, &AAAI_Character::OnPlayerExit);
	*/
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 600.0f, 0.0f);

	AttackRange = 80.0f;
	AttackRadius = 50.0f;
	AIHealth = 100.0f;
}

// Called when the game starts or when spawned
void AAAI_Character::BeginPlay()
{
	Super::BeginPlay();
	IsAttack = false;
}

void AAAI_Character::Attack()
{
	IsAttack = true;
	//IsWaiting = true;

	/*
	GetWorld()->GetTimerManager().SetTimer(AttackHandle, FTimerDelegate::CreateLambda([&]()
		{
			IsWaiting = false;
			if (!IsInside) {
				OnAttackEnd.Broadcast();
				IsAttack = false;
				GetWorld()->GetTimerManager().ClearTimer(AttackHandle);
			}
		}), 1.5f, true);
		*/
}

void AAAI_Character::CheckAttackDamage()
{
	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);
	//결과를 채널로 반환
	bool bResult = GetWorld()->SweepSingleByChannel(
		HitResult,
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * 200.0f,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel1,
		FCollisionShape::MakeSphere(50.0f),
		Params);

	if (bResult)
	{
		auto OtherActor = Cast<AMainCharacter>(HitResult.GetActor());
		if (HitResult.GetActor() != nullptr)
		{
			FVector TraceVec = GetActorForwardVector() * AttackRange;
			FVector Center = GetActorLocation() + TraceVec * 0.5f;
			//반지름
			float HalfHeight = AttackRange * 0.5f + AttackRadius;
			//캡슐 회전방향
			FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat();
			//타겟 발견시 녹색,미발견시 빨강
			FColor DrawColor = bResult ? FColor::Green : FColor::Red;
			//생성후 삭제되기까지의 시간
			float DebugLifeTime = 5.0f;

			//DrawDebugCapsule(GetWorld(), Center, HalfHeight, AttackRadius, CapsuleRot, DrawColor, false, DebugLifeTime);
			//UE_LOG(LogTemp, Warning, TEXT("Actor Name : %s"), *HitResult.GetActor()->GetName());
			if (OtherActor!=nullptr) {
				if (OtherActor->CombatTarget == this)
				{
					OtherActor->SetCombatTarget(nullptr);
				}
				
				OtherActor->DecrementHealth(10);
			}
		}
		else {
			OtherActor->SetCombatTarget(nullptr);
		}
	}
	
}

void AAAI_Character::EndAttack()
{
	if (!IsInside) {
		IsAttack = false;
		OnAttackEnd.Broadcast();
	}
}

void AAAI_Character::AI_DecrementHealth(float Amount)
{
	AIHealth = AIHealth - Amount;

	UE_LOG(LogTemp, Error, TEXT(" Decreament Health!!!"));
	if (AIHealth <= 0.f) {
		AIHealth = 0.f;
		DieAI();
	}
	CE_AdaptToHelatBarWidget(AIHealth);
}

void AAAI_Character::CE_AdaptToHelatBarWidget_Implementation(float newHealth)
{
}

// Called every frame
void AAAI_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (AIHealth <= 0.f) {
		AIHealth = 0.f;
		DieAI();
	}
}

// Called to bind functionality to input
void AAAI_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}

void AAAI_Character::DieAI()
{
	IsDead = true;
	FTimerHandle DeadHandle;
	GetWorld()->GetTimerManager().SetTimer(DeadHandle, FTimerDelegate::CreateLambda([&]()
		{
			this->Destroy(true);
		}), 5.0f, false);
}

