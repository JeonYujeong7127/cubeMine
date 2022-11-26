// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/WidgetComponent.h"
#include "Components/SphereComponent.h"
#include "CM_MineUI.h"
#include "GameFramework/Controller.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionVolume = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionVolume"));
	RootComponent = CollisionVolume;
	ACharacter* character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0); 
	mainC = Cast<AMainCharacter>(character);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	CollisionVolume->OnComponentBeginOverlap.AddDynamic(this, &AMyActor::OnOverlapBegin);
	CollisionVolume->OnComponentEndOverlap.AddDynamic(this, &AMyActor::OnOverlapEnd);

	// ######### 오류나는 부분 ############
	// MineWidget = mainC->getMineWidget();
}

void AMyActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FString label = this->GetActorLabel();
	TArray<FString> Array = {};
	label.ParseIntoArray(Array, TEXT("l"));
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Array[1]);
	int num1 = FCString::Atoi(*Array[1]) / 8;
	int num2 = FCString::Atoi(*Array[1]) % 8;
	num = FString::FromInt(num1) + FString::FromInt(num2);
}

void AMyActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	num = 0;
}

FString AMyActor::GetNum() {
	return num;
}