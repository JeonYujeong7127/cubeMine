// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "AIWaypoint.generated.h"

UCLASS()
class CUBEMINE_API AAIWaypoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIWaypoint();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AAIWaypoint* NextWaypoint;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnPlayerEnter(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OhterComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
