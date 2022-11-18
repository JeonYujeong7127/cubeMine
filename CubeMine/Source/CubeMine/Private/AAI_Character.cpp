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
}

void AAAI_Character::Attack()
{
	IsAttack = false;
	UE_LOG(LogTemp, Warning, TEXT("Attack Begin"));
	IsAttack = true;
	OnAttackEnd.Broadcast();
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

