// Copyright Epic Games, Inc. All Rights Reserved.

#include "RogueLiteCelGameMode.h"
#include "RogueLiteCelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARogueLiteCelGameMode::ARogueLiteCelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/RogueLite/Core/Player/BP_RoguePlayer"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
