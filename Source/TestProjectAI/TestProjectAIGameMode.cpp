// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProjectAIGameMode.h"
#include "TestProjectAICharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestProjectAIGameMode::ATestProjectAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
