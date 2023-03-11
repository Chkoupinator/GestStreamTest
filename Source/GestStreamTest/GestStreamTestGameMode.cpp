// Copyright Epic Games, Inc. All Rights Reserved.

#include "GestStreamTestGameMode.h"
#include "GestStreamTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGestStreamTestGameMode::AGestStreamTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
