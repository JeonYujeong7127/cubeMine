// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"
#include "Components/SkeletalMeshComponent.h"
#include "MainCharacter.h"

APickUp::APickUp()
{
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	KeyCount = 1;
}

void APickUp::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	UE_LOG(LogTemp, Warning, TEXT("APickUp::OnOverlapBegin()"));

	if (OtherActor)
	{
		AMainCharacter* Main = Cast<AMainCharacter>(OtherActor);
		if (Main)
		{
			Main->IncrementKeys(KeyCount);
			
			SkeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
			SkeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

			SkeletalMesh->SetSimulatePhysics(true);
			Destroy();
		}
	}
}

void APickUp::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);

	UE_LOG(LogTemp, Warning, TEXT("APickUp::OnOverlapEnd()"));
}