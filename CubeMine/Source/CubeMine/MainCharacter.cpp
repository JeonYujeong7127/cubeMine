// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "CM_MineUI.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimInstance.h"
#include "Containers/UnrealString.h"
#include "Engine/World.h"
#include "Explosive.h"
#include "AAI_Character.h"
#include "PickUp.h"
#include "MyActor.h"
#include "Weapon.h"
#include "MainPlayerController.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set size for collision capsule
	GetCapsuleComponent()->SetCapsuleSize(39.f, 90.5f);

	// set our turn rate for input
	TurnRateGamepad = 50.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	// Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	//Set out turn rate for input
	BaseTurnRate = 65.f;
	BaseLookUpRate = 65.f;

	//Don't rotate when the controller rotates.
	//Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;


	//configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; //character moves in the direction of input...
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.f, 0.0f); //...at this rotation rate

	GetCharacterMovement()->JumpZVelocity = 350.f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->MaxWalkSpeed = 250.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	MaxHealth = 100.f;
	Health = 65.f;
	MaxStamina = 150.f;
	Stamina = 120.f;
	Keys = 0;

	RunningSpeed = 400.f;
	SprintingSpeed = 650.f;

	bShiftKeyDown = false;

	//Initialize Enums
	MovementStatus = EMovementStatus::EMS_Normal;
	StaminaStatus = EStaminaStatus::ESS_Normal;

	StaminaDrainRate = 25.f;
	MinSprintStamina = 50.f;

	InterpSpeed = 15.f;
	bInterpToEnemy = false;

	static ConstructorHelpers::FClassFinder<UCM_MineUI> Mine_UI(TEXT("/Game/ThirdPerson/Blueprints/UI/UI_Mine.UI_Mine_C"));
	if (Mine_UI.Succeeded())
	{
		MineWidgetClass = Mine_UI.Class;
	}
}



void AMainCharacter::MakeWidget()
{
	MineWidget = Cast<UCM_MineUI>(CreateWidget(GetWorld(), MineWidgetClass));
}

UCM_MineUI* AMainCharacter::getMineWidget()
{
	return MineWidget;
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	UWorld* world = GetWorld();
	FVector Location = FVector::ZeroVector;
	TArray<AActor*> ArrayofTarget;
	AActor* target = 0;
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	FRotator rotator;
	UClass* SpawnActor;
	int mineNum = 0;

	if (IsValid(MineWidgetClass))
	{
		MakeWidget();
		if (IsValid(MineWidget))
		{
			MineWidget->SetVisibility(ESlateVisibility::Visible);
			MineWidget->AddToViewport();

			TArray<TArray<int32>> MineMap = MineWidget->Mine2D;
			TArray<TArray<int32>> SpawnMap = MineWidget->SpawnMap;
			UGameplayStatics::GetAllActorsWithTag(world, TEXT("target"), ArrayofTarget);

			for (int i = 0; i <= 7; i++) {
				for (int j = 0; j <= 7; j++) {
					UE_LOG(LogTemp, Log, TEXT("(%d, %d) : %d"), i, j, MineMap[i][j]);
					if (MineMap[i][j] < 0) {
						UE_LOG(LogTemp, Log, TEXT("Mine is here (%d, %d)"), i, j);
						mineNum = (i * 8) + j + 1;
						for (int k = 0; k <= 63; k++) {
							if (*ArrayofTarget[k]->GetActorLabel() == FString::FromInt(mineNum)) {
								Location = ArrayofTarget[k]->GetActorLocation();
								FName path = TEXT("Blueprint'/Game/ThirdPerson/Player/Explosive_BP.Explosive_BP_C'");
								SpawnActor = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), NULL, *path.ToString()));
								world->SpawnActor<AExplosive>(SpawnActor, Location, rotator, SpawnParams);
								UE_LOG(LogTemp, Log, TEXT("Character Label: %s"), *ArrayofTarget[k]->GetActorLabel());
								break;
							}
						}
					}
					else {
						if (SpawnMap[i][j] == 1) { // 아이템 3개
							UE_LOG(LogTemp, Log, TEXT("SpawnMap[%d][%d] = %d"), i, j, SpawnMap[i][j]);
							UE_LOG(LogTemp, Log, TEXT("Item is here (%d, %d)"), i, j);
							mineNum = (i * 8) + j + 1;
							for (int k = 0; k <= 63; k++) {
								if (*ArrayofTarget[k]->GetActorLabel() == FString::FromInt(mineNum)) {
									Location = ArrayofTarget[k]->GetActorLocation();
									FName path = TEXT("Blueprint'/Game/ThirdPerson/Player/Weapon_BP.Weapon_BP_C'");
									SpawnActor = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), NULL, *path.ToString()));
									world->SpawnActor<AWeapon>(SpawnActor, Location, rotator, SpawnParams);
									UE_LOG(LogTemp, Log, TEXT("Character Label: %s"), *ArrayofTarget[k]->GetActorLabel());
									break;
								}
							}
						}
						else if (SpawnMap[i][j] == 2) { // 키 3개
							UE_LOG(LogTemp, Log, TEXT("Key is here (%d, %d)"), i, j);
							mineNum = (i * 8) + j + 1;
							for (int k = 0; k <= 63; k++) {
								if (*ArrayofTarget[k]->GetActorLabel() == FString::FromInt(mineNum)) {
									Location = ArrayofTarget[k]->GetActorLocation();
									FName path = TEXT("Blueprint'/Game/ThirdPerson/Player/PickUp_BP.PickUp_BP_C'");
									SpawnActor = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), NULL, *path.ToString()));
									world->SpawnActor<APickUp>(SpawnActor, Location, rotator, SpawnParams);
									UE_LOG(LogTemp, Log, TEXT("Character Label: %s"), *ArrayofTarget[k]->GetActorLabel());
									break;
								}
							}
						}
						else if (SpawnMap[i][j] == 3) { // 몬스터 10개
							UE_LOG(LogTemp, Log, TEXT("Monster is here (%d, %d)"), i, j);
							mineNum = (i * 8) + j + 1;
							for (int k = 0; k <= 63; k++) {
								if (*ArrayofTarget[k]->GetActorLabel() == FString::FromInt(mineNum)) {
									Location = ArrayofTarget[k]->GetActorLocation();
									FName path = TEXT("Blueprint'/Game/BluePrints/BP_AAI_Character.BP_AAI_Character_C'");
									SpawnActor = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), NULL, *path.ToString()));
									world->SpawnActor<AActor>(SpawnActor, Location, rotator, SpawnParams);
									UE_LOG(LogTemp, Log, TEXT("Character Label: %s"), *ArrayofTarget[k]->GetActorLabel());
									break;
								}
							}
						}
						else continue;
					}
				}
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("fail to load MineWidget!!!"));
		}
	}
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	float DeltaStamina = StaminaDrainRate * DeltaTime;

	switch (StaminaStatus)
	{
	case EStaminaStatus::ESS_Normal:
		if (bShiftKeyDown)
		{
			if (Stamina - DeltaStamina <= MinSprintStamina)
			{

				SetStaminaStatus(EStaminaStatus::ESS_BelowMinimum);
				Stamina -= DeltaStamina;
			}
			else
			{
				Stamina -= DeltaStamina;
			}
			SetMovementStatus(EMovementStatus::EMS_Sprinting);
		}
		else //Shift Key Up
		{
			if (Stamina + DeltaStamina >= MaxStamina)
			{
				Stamina = MaxStamina;
			}
			else
			{
				Stamina += DeltaStamina;
			}
			SetMovementStatus(EMovementStatus::EMS_Normal);
		}
		break;
	case EStaminaStatus::ESS_BelowMinimum:
		if (bShiftKeyDown)
		{
			if (Stamina - DeltaStamina <= 0.f)
			{

				SetStaminaStatus(EStaminaStatus::ESS_Exhausted);
				Stamina = 0;
				SetMovementStatus(EMovementStatus::EMS_Normal);
			}
			else
			{
				Stamina -= DeltaStamina;
				SetMovementStatus(EMovementStatus::EMS_Sprinting);
			}
		}
		else //Shift Key Up
		{
			if (Stamina + DeltaStamina >= MinSprintStamina)
			{
				SetStaminaStatus(EStaminaStatus::ESS_Normal);
				Stamina += DeltaStamina;
			}
			else
			{
				Stamina += DeltaStamina;
			}
			SetMovementStatus(EMovementStatus::EMS_Normal);
		}
		break;
	case EStaminaStatus::ESS_Exhausted:
		if (bShiftKeyDown)
		{
			Stamina = 0.f;
		}
		else //Shift Key Up
		{
			SetStaminaStatus(EStaminaStatus::ESS_ExhaustedRecovering);
			Stamina += DeltaStamina;
		}
		SetMovementStatus(EMovementStatus::EMS_Normal);
		break;
	case EStaminaStatus::ESS_ExhaustedRecovering:
		if (Stamina + DeltaStamina >= MinSprintStamina)
		{
			SetStaminaStatus(EStaminaStatus::ESS_Normal);
			Stamina += DeltaStamina;
		}
		else
		{
			Stamina += DeltaStamina;
		}
		SetMovementStatus(EMovementStatus::EMS_Normal);
		break;
	default:
		;

	}

	if (bInterpToEnemy && CombatTarget)
	{
		FRotator LookAtYaw = GetLookAtRotationYaw(CombatTarget->GetActorLocation());
		FRotator InterpRotation = FMath::RInterpTo(GetActorRotation(), LookAtYaw, DeltaTime, InterpSpeed);


		SetActorRotation(InterpRotation);
	}
}

FRotator AMainCharacter::GetLookAtRotationYaw(FVector Target)
{
	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Target);
	FRotator LookAtRotationYaw(0.f, LookAtRotation.Yaw, 0.f);

	return LookAtRotationYaw;
}

void AMainCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void AMainCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//PlayerInputComponent->BindAction("Show", IE_Pressed, this, &AMainCharacter::Show);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMainCharacter::ShiftKeyDown);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMainCharacter::ShiftKeyUp);

	PlayerInputComponent->BindAction("Equipped", IE_Pressed, this, &AMainCharacter::EKeyDown);
	PlayerInputComponent->BindAction("Equipped", IE_Released, this, &AMainCharacter::EKeyUp);

	PlayerInputComponent->BindAction("ShowCursor", IE_Released, this, &AMainCharacter::showCursor);


	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMainCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMainCharacter::LookUpAtRate);

}

//void AMainCharacter::Show()
//{
//	APlayerController* PC = Cast<AMainPlayerController>(GetController());
//	
//	if (MineWidget->IsVisible())
//	{
//		PC->bShowMouseCursor = false;
//		PC->SetInputMode(FInputModeGameOnly());
//		MineWidget->SetVisibility(ESlateVisibility::Collapsed);
//	}
//	else
//	{
//		PC->bShowMouseCursor = true;
//		PC->SetInputMode(FInputModeGameAndUI());
//		MineWidget->SetVisibility(ESlateVisibility::Visible);
//	}		
//}

void AMainCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f) && (!bAttacking))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AMainCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}


void AMainCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AMainCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AMainCharacter::EKeyDown()
{
	bEKeyDown = true;

	if (ActiveOverlappingItem)
	{
		AWeapon* Weapon = Cast<AWeapon>(ActiveOverlappingItem);
		if (Weapon)
		{
			Weapon->Equip(this);
			SetActiveOverlappingItem(nullptr);
		}
	}
	else if(EquippedWeapon)
	{
		
		Attack();
	}
}

void AMainCharacter::EKeyUp()
{
	bEKeyDown = false;

}

void AMainCharacter::DecrementHealth(float Amount)
{
	if (Health - Amount <= 0.f)
	{
		Health -= Amount;
		Die();
	}
	else
	{
		Health -= Amount;
	}
}

void AMainCharacter::IncrementKeys(int32 Amount)
{
	Keys += Amount;
}

void AMainCharacter::Die()
{

}

void AMainCharacter::showCursor()
{
	APlayerController* PC = Cast<AMainPlayerController>(GetController());	
	if (PC->bShowMouseCursor == false) {
		PC->bShowMouseCursor = true;
	}
	else {
		PC->bShowMouseCursor = false;
	}
}

void AMainCharacter::SetMovementStatus(EMovementStatus Status)
{
	MovementStatus = Status;
	if (MovementStatus == EMovementStatus::EMS_Sprinting)
	{
		GetCharacterMovement()->MaxWalkSpeed = SprintingSpeed;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;
	}
}


void AMainCharacter::ShiftKeyDown()
{
	bShiftKeyDown = true;
}


void AMainCharacter::ShiftKeyUp()
{
	bShiftKeyDown = false;
}

void  AMainCharacter::SetEquippedWeapon(AWeapon* WeaponToSet)
{
	if (EquippedWeapon)
	{
		EquippedWeapon->Destroy(); // 이전에 장착했던 무기 파괴 
	}
	EquippedWeapon = WeaponToSet;
}

void  AMainCharacter::Attack()
{
	if (!bAttacking)
	{
		bAttacking = true;
		SetInterpToEnemy(true);

		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && CombatMontage)
		{
			int32 Section = FMath::RandRange(0, 1); //0,1 사이 난수 생성
			switch (Section)
			{
			case 0:
				AnimInstance->Montage_Play(CombatMontage, 2.2f);
				AnimInstance->Montage_JumpToSection(FName("Attack_1"), CombatMontage);
				UE_LOG(LogTemp, Warning, TEXT("Attack_1"));
				break;
			case 1:
				AnimInstance->Montage_Play(CombatMontage, 1.8f);
				AnimInstance->Montage_JumpToSection(FName("Attack_2"), CombatMontage);
				UE_LOG(LogTemp, Warning, TEXT("Attack_2"));
				break;

			default:
				;
			}
			

		}
	}
	
}

void AMainCharacter::AttackEnd()
{
	bAttacking = false;
	SetInterpToEnemy(false);
	if (bEKeyDown)
	{
		Attack();
	}
}

void AMainCharacter::SetInterpToEnemy(bool Interp)
{
	bInterpToEnemy = Interp;

}