// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CM_MineUI.h"
#include "GameFramework/Actor.h"
#include "MyFirstActor.generated.h"

UCLASS()
class CUBEMINE_API AMyFirstActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFirstActor();
	UPROPERTY()
		UStaticMeshComponent* Mesh;

protected:
	TSubclassOf<UUserWidget> MineWidgetClass;
	UCM_MineUI* MineWidget;

	UFUNCTION(BlueprintCallable)
		void ItemSpawn(FVector Location, UWorld* world);

	UFUNCTION(BlueprintCallable)
		void MineSpawn(FVector Location, UWorld* world);

	UFUNCTION(BlueprintCallable)
		void KeySpawn(FVector Location, UWorld* world);

	UFUNCTION(BlueprintCallable)
		void MobSpawn(FVector Location, UWorld* world);

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AActor> ISpawn;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AActor> MSpawn;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AActor> KSpawn;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AActor> MoSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};