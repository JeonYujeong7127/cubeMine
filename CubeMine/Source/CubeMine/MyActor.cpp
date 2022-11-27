// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/WidgetComponent.h"
#include "Components/BoxComponent.h"
#include "CM_MineUI.h"
#include "MainCharacter.h"
#include "Components/Button.h"
#include "Kismet/GamePlayStatics.h"
#include "GameFramework/Controller.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionVolume"));
	RootComponent = CollisionVolume;
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
	FString olabel = OtherActor->GetActorLabel();
	if (olabel == "Main_BP") {
		auto character = Cast<AMainCharacter>(OtherActor);
		MineWidget = character->getMineWidget();

		FString label = this->GetActorLabel();
		TArray<FString> Array = {};
		label.ParseIntoArray(Array, TEXT("l"));
		int num1 = (FCString::Atoi(*Array[1]) - 1) / 8;
		int num2 = (FCString::Atoi(*Array[1]) - 1) % 8;
		num = FString::FromInt(num1).Append(FString::FromInt(num2));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *num);

		if (num == "00") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button00Callback();
			MineWidget->BT_00->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "01") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button01Callback();
			MineWidget->BT_01->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "02") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button02Callback();
			MineWidget->BT_02->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "03") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button03Callback();
			MineWidget->BT_03->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "04") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button04Callback();
			MineWidget->BT_04->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "05") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button05Callback();
			MineWidget->BT_05->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "06") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button06Callback();
			MineWidget->BT_06->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "07") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button07Callback();
			MineWidget->BT_07->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "10") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button10Callback();
			MineWidget->BT_10->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "11") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button11Callback();
			MineWidget->BT_11->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "12") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button12Callback();
			MineWidget->BT_12->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "13") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button13Callback();
			MineWidget->BT_13->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "14") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button14Callback();
			MineWidget->BT_14->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "15") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button15Callback();
			MineWidget->BT_15->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "16") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button16Callback();
			MineWidget->BT_16->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "17") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button17Callback();
			MineWidget->BT_17->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "20") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button20Callback();
			MineWidget->BT_20->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "21") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button21Callback();
			MineWidget->BT_21->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "22") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button22Callback();
			MineWidget->BT_22->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "23") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button23Callback();
			MineWidget->BT_23->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "24") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button24Callback();
			MineWidget->BT_24->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "25") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button25Callback();
			MineWidget->BT_25->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "26") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button26Callback();
			MineWidget->BT_26->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "27") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button27Callback();
			MineWidget->BT_27->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "30") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button30Callback();
			MineWidget->BT_30->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "31") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button31Callback();
			MineWidget->BT_31->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "32") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button32Callback();
			MineWidget->BT_32->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "33") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button33Callback();
			MineWidget->BT_33->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "34") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button34Callback();
			MineWidget->BT_34->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "35") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button35Callback();
			MineWidget->BT_35->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "36") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button36Callback();
			MineWidget->BT_36->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "37") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button37Callback();
			MineWidget->BT_37->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "40") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button40Callback();
			MineWidget->BT_40->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "41") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button41Callback();
			MineWidget->BT_41->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "42") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button42Callback();
			MineWidget->BT_42->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "43") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button43Callback();
			MineWidget->BT_43->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "44") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button44Callback();
			MineWidget->BT_44->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "45") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button45Callback();
			MineWidget->BT_45->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "46") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button46Callback();
			MineWidget->BT_46->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "47") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button47Callback();
			MineWidget->BT_47->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "50") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button50Callback();
			MineWidget->BT_50->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "51") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button51Callback();
			MineWidget->BT_51->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "52") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button52Callback();
			MineWidget->BT_52->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "53") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button53Callback();
			MineWidget->BT_53->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "54") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button54Callback();
			MineWidget->BT_54->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "55") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button55Callback();
			MineWidget->BT_55->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "56") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button56Callback();
			MineWidget->BT_56->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "57") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button57Callback();
			MineWidget->BT_57->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "60") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button01Callback();
			MineWidget->BT_60->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "61") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button61Callback();
			MineWidget->BT_61->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "62") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button62Callback();
			MineWidget->BT_62->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "63") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button63Callback();
			MineWidget->BT_63->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "64") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button64Callback();
			MineWidget->BT_64->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "65") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button65Callback();
			MineWidget->BT_65->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "66") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button66Callback();
			MineWidget->BT_66->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "67") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button67Callback();
			MineWidget->BT_67->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "70") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button70Callback();
			MineWidget->BT_70->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "71") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button71Callback();
			MineWidget->BT_71->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "72") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button72Callback();
			MineWidget->BT_72->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "73") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button73Callback();
			MineWidget->BT_73->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "74") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button74Callback();
			MineWidget->BT_74->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "75") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button75Callback();
			MineWidget->BT_75->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "76") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button76Callback();
			MineWidget->BT_76->SetColorAndOpacity(FLinearColor::Red);
		}
		else if (num == "77") {
			UE_LOG(LogTemp, Warning, TEXT("callback complete"));
			MineWidget->Button77Callback();
			MineWidget->BT_77->SetColorAndOpacity(FLinearColor::Red);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("I can't find the number"));
		}
	}
}

void AMyActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (num == "00") {
		MineWidget->BT_00->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "01") {
		MineWidget->BT_01->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "02") {
		MineWidget->BT_02->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "03") {
		MineWidget->BT_03->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "04") {
		MineWidget->BT_04->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "05") {
		MineWidget->BT_05->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "06") {
		MineWidget->BT_06->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "07") {
		MineWidget->BT_07->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "10") {
		MineWidget->BT_10->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "11") {
		MineWidget->BT_11->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "12") {
		MineWidget->BT_12->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "13") {
		MineWidget->BT_13->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "14") {
		MineWidget->BT_14->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "15") {
		MineWidget->BT_15->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "16") {
		MineWidget->BT_16->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "17") {
		MineWidget->BT_17->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "20") {
		MineWidget->BT_20->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "21") {
		MineWidget->BT_21->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "22") {
		MineWidget->BT_22->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "23") {
		MineWidget->BT_23->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "24") {
		MineWidget->BT_24->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "25") {
		MineWidget->BT_25->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "26") {
		MineWidget->BT_26->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "27") {
		MineWidget->BT_27->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "30") {
		MineWidget->BT_30->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "31") {
		MineWidget->BT_31->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "32") {
		MineWidget->BT_32->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "33") {
		MineWidget->BT_33->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "34") {
		MineWidget->BT_34->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "35") {
		MineWidget->BT_35->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "36") {
		MineWidget->BT_36->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "37") {
		MineWidget->BT_37->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "40") {
		MineWidget->BT_40->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "41") {
		MineWidget->BT_41->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "42") {
		MineWidget->BT_42->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "43") {
		MineWidget->BT_43->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "44") {
		MineWidget->BT_44->SetColorAndOpacity(FLinearColor::White);

	}
	else if (num == "45") {
		MineWidget->BT_45->SetColorAndOpacity(FLinearColor::White);

	}
	else if (num == "46") {
		MineWidget->BT_46->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "47") {
		MineWidget->BT_47->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "50") {
		MineWidget->BT_50->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "51") {
		MineWidget->BT_51->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "52") {
		MineWidget->BT_52->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "53") {
		MineWidget->BT_53->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "54") {
		MineWidget->BT_54->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "55") {
		MineWidget->BT_55->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "56") {
		MineWidget->BT_56->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "57") {
		MineWidget->BT_57->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "60") {
		MineWidget->BT_60->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "61") {
		MineWidget->BT_61->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "62") {
		MineWidget->BT_62->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "63") {
		MineWidget->BT_63->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "64") {
		MineWidget->BT_64->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "65") {
		MineWidget->BT_65->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "66") {
		MineWidget->BT_66->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "67") {
		MineWidget->BT_67->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "70") {
		MineWidget->BT_70->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "71") {
		MineWidget->BT_71->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "72") {
		MineWidget->BT_72->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "73") {
		MineWidget->BT_73->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "74") {
		MineWidget->BT_74->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "75") {
		MineWidget->BT_75->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "76") {
		MineWidget->BT_76->SetColorAndOpacity(FLinearColor::White);
	}
	else if (num == "77") {
		MineWidget->BT_77->SetColorAndOpacity(FLinearColor::White);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("I can't find the number"));
	}
	num = 0;
}

FString AMyActor::GetNum() {
	return num;
}