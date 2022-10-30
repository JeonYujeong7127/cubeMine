// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AAIController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "AAI_Character.generated.h"

UCLASS()
class CUBEMINE_API AAAI_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAAI_Character();

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		class AAIWaypoint* NextWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
	AAAIController* AIController;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		void OnPlayerEnter(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OhterComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
		void OnPlayerExit(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OhterComponent, int32 OtherBodyIndex);

};
