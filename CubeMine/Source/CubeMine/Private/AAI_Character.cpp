// Fill out your copyright notice in the Description page of Project Settings.


#include "AAI_Character.h"
#include "GameFramework/CharacterMovementComponent.h"

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
	IsWaiting = true;
	UE_LOG(LogTemp, Warning, TEXT("Start Timer"));


	GetWorld()->GetTimerManager().SetTimer(AttackHandle, FTimerDelegate::CreateLambda([&]()
		{
			IsWaiting = false;
			if (!IsInside) {
				UE_LOG(LogTemp, Warning, TEXT("End Timer"));
				OnAttackEnd.Broadcast();
				IsAttack = false;
				GetWorld()->GetTimerManager().ClearTimer(AttackHandle);
			}else UE_LOG(LogTemp, Warning, TEXT("Call Timer"));
		}), 1.5f, true);

}

void AAAI_Character::AnimNotify_AttackHitCheck()
{
}

void AAAI_Character::AnimNotify_EndAttack()
{
}


// Called every frame
void AAAI_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAAI_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

