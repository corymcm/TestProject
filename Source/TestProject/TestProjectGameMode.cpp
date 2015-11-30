// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TestProject.h"
#include "TestProjectGameMode.h"
#include "TestProjectCharacter.h"
#include "GameFramework/HUD.h"

ATestProjectGameMode::ATestProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<AHUD> HUDBPClass(TEXT("/Game/PlayerHUD"));
	if (HUDBPClass.Class != NULL)
	{
		HUDClass = HUDBPClass.Class;
	}
}
