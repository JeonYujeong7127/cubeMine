// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainCharacter.h"
#include "MyActor.generated.h"

UCLASS()
class CUBEMINE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	/**Base shape collision */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item | Collision")
		class USphereComponent* CollisionVolume;

	/**Base Mesh collision */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MyActor | Mesh")
		class UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UCM_MineUI* MineWidget;
	AMainCharacter* mainC;
	FString num;

public:	
	UFUNCTION()
		virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	FString GetNum();
};
