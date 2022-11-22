// Copyright Epic Games, Inc. All Rights Reserved.

#include "CubeMineCharacter.h"
#include "CM_MineUI.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MyFirstActor.h" // AMyFirstActor


//////////////////////////////////////////////////////////////////////////
// ACubeMineCharacter

ACubeMineCharacter::ACubeMineCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rate for input
	TurnRateGamepad = 50.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	static ConstructorHelpers::FClassFinder<UCM_MineUI> Mine_UI(TEXT("/Game/ThirdPerson/Blueprints/UI/UI_Mine.UI_Mine_C"));
	if (Mine_UI.Succeeded())
	{
		MineWidgetClass = Mine_UI.Class;
	}
	

	
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACubeMineCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Show", IE_Pressed, this, &ACubeMineCharacter::Show);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ACubeMineCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ACubeMineCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &ACubeMineCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &ACubeMineCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ACubeMineCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ACubeMineCharacter::TouchStopped);
}

void ACubeMineCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("Hello!!"));

	APlayerController* PC = Cast<APlayerController>(GetController());
	UWorld* world = GetWorld();
	FVector Location = FVector::ZeroVector;
	TArray<AActor*> ArrayofTarget;
	AActor* target = 0;
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	FRotator rotator;
	int mineNum = 0;


	if (IsValid(MineWidgetClass))
	{
		MineWidget = Cast<UCM_MineUI>(CreateWidget(GetWorld(), MineWidgetClass));
		if (IsValid(MineWidget))
		{
			//PC->bShowMouseCursor = true;
			MineWidget->SetVisibility(ESlateVisibility::Collapsed);
			MineWidget->AddToViewport();
			TArray<TArray<int32>> MineMap = MineWidget->Mine2D;
			UGameplayStatics::GetAllActorsWithTag(world, TEXT("target"), ArrayofTarget);
			for (int i = 0; i <= 7; i++) {
				for (int j = 0; j <= 7; j++) {
					if (MineMap[i][j] < 0) {
						mineNum = (i * 8) + j + 1;
						for (int k = 0; k <= 63; k++) {
							if (*ArrayofTarget[k]->GetActorLabel() == FString::FromInt(mineNum)) {
								Location = ArrayofTarget[k]->GetActorLocation();
								world->SpawnActor<AMyFirstActor>(AMyFirstActor::StaticClass(), Location, rotator, SpawnParams);
								break;
							}

						}
					}
				}
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("fail to load MineWidget!!!"));
		}
	}
}

void ACubeMineCharacter::Show()
{
	APlayerController* PC = Cast<APlayerController>(GetController());

	if (MineWidget->IsVisible())
	{
		PC->bShowMouseCursor = false;
		PC->SetInputMode(FInputModeGameOnly());
		MineWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
	else
	{
		PC->bShowMouseCursor = true;
		PC->SetInputMode(FInputModeGameAndUI());
		MineWidget->SetVisibility(ESlateVisibility::Visible);
	}
		
}

void ACubeMineCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ACubeMineCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void ACubeMineCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ACubeMineCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ACubeMineCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACubeMineCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}