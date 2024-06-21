// Copyright Epic Games, Inc. All Rights Reserved.

#include "StrangeSideEffectsGameMode.h"
#include "StrangeSideEffectsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStrangeSideEffectsGameMode::AStrangeSideEffectsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
