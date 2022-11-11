// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "PickUp.generated.h"

/**
 * 
 */
UCLASS()
class CUBEMINE_API APickUp : public AItem
{
	GENERATED_BODY()
public:
	APickUp();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Keys")
	int32 KeyCount;

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
	
};
