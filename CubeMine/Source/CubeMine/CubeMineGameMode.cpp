// Copyright Epic Games, Inc. All Rights Reserved.

#include "CubeMineGameMode.h"
#include "CubeMineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACubeMineGameMode::ACubeMineGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
	DefaultPawnClass = ACubeMineCharacter::StaticClass();
}
