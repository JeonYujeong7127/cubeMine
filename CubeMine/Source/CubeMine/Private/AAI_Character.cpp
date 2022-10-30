// Fill out your copyright notice in the Description page of Project Settings.


#include "AAI_Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AAAI_Character::AAAI_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

void AAAI_Character::OnPlayerEnter(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OhterComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == GetWorld()->GetFirstPlayerController()->GetPawn()) {
		AIController = Cast<AAAIController>(GetController());
		AIController->BeginOverlap();
	}
}

void AAAI_Character::OnPlayerExit(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OhterComponent, int32 OtherBodyIndex)
{
	AIController = Cast<AAAIController>(GetController());
	AIController->EndOverlap();
}

