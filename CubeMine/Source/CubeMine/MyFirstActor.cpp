#include "MyFirstActor.h"

#include "Explosive.h"
#include "AAI_Character.h"
#include "PickUp.h"
#include "Weapon.h"
#include "Kismet/GameplayStatics.h"
#include "MyFirstActor.h"

// Sets default values
AMyFirstActor::AMyFirstActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	SetRootComponent(Mesh);

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/LevelPrototyping/Meshes/SM_ChamferCube.SM_ChamferCube'"));

	if (MeshAsset.Object != nullptr) {
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

	static ConstructorHelpers::FClassFinder<UCM_MineUI> Mine_UI(TEXT("/Game/ThirdPerson/Blueprints/UI/UI_Mine.UI_Mine_C"));
	if (Mine_UI.Succeeded())
	{
		MineWidgetClass = Mine_UI.Class;
	}
}

void AMyFirstActor::ItemSpawn(FVector Location, UWorld* world)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	FRotator rotator;
	world->SpawnActor<AItem>(ISpawn, Location, rotator, SpawnParams);
}

void AMyFirstActor::MineSpawn(FVector Location, UWorld* world)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	FRotator rotator;
	world->SpawnActor<AExplosive>(MSpawn, Location, rotator, SpawnParams);
}

void AMyFirstActor::KeySpawn(FVector Location, UWorld* world)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	FRotator rotator;
	world->SpawnActor<APickUp>(KSpawn, Location, rotator, SpawnParams);
}

void AMyFirstActor::MobSpawn(FVector Location, UWorld* world)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	FRotator rotator;
	world->SpawnActor<AAAI_Character>(MoSpawn, Location, rotator, SpawnParams);
}

// Called when the game starts or when spawned
void AMyFirstActor::BeginPlay()
{
	Super::BeginPlay();
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
								MineSpawn(Location, world);
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
									ItemSpawn(Location, world);
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
									KeySpawn(Location, world);
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
									TSubclassOf<class AAAI_Character> AAAI_Character_Actor;
									Location = ArrayofTarget[k]->GetActorLocation();
									MobSpawn(Location, world);
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

