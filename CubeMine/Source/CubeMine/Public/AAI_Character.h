// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AAIController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AAI_Character.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHitCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);

UCLASS()
class CUBEMINE_API AAAI_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAAI_Character();

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
	AAAIController* AIController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	class UParticleSystem* HitParticles;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		class UBehaviorTree* TreeAsset;

	UFUNCTION()
		void Attack();
	UFUNCTION(BlueprintCallable)
		void CheckAttackDamage();
	UFUNCTION(BlueprintCallable)
		void EndAttack();


	UFUNCTION()
		void AI_DecrementHealth(float Amount);

	UFUNCTION(BlueprintImplementableEvent)
		void CE_AdaptToHelatBarWidget(float newHealth);

	//FOnAttackHitCheckDelegate	OnAttackHitCheck;
	FOnAttackEndDelegate OnAttackEnd;
	FTimerHandle AttackHandle;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool IsAttack = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool IsWaiting = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool IsInside = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool IsDead = false;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		float AttackRange;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		float AttackRadius;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		float AIHealth;

	UFUNCTION()
		void DieAI();
};
