// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4GithubTestGameMode.h"
#include "UE4GithubTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4GithubTestGameMode::AUE4GithubTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
