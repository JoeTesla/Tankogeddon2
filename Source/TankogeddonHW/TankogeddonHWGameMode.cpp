// Copyright Epic Games, Inc. All Rights Reserved.

#include "TankogeddonHWGameMode.h"
#include "TankogeddonHWCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATankogeddonHWGameMode::ATankogeddonHWGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
