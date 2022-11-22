// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	EWS_Pickup UMETA(DisplayNme = "Pickup"),
	EWS_Equipped UMETA(DisplayNme = "Equipped"),

	EWS_MAX UMETA(DisplayNme = "DefaultMax")

};

/**
 * 
 */
UCLASS()
class CUBEMINE_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	AWeapon();


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item")
	EWeaponState WeaponState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Sound")
	class USoundCue* OnEquipSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SkeletalMesh")
	class USkeletalMeshComponent* SkeletalMesh;

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

	void Equip(class AMainCharacter* Char);

	FORCEINLINE void SetWWeaponState(EWeaponState State) { WeaponState = State;}
	FORCEINLINE EWeaponState GetWWeaponState() { return WeaponState; }
};
