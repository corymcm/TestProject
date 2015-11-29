// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TestProject.h"
#include "TestProjectGameMode.h"
#include "TestProjectCharacter.h"
#include "GameFramework/HUD.h"
#include ""

ATestProjectGameMode::ATestProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<UWidgetBlueprint> HUDBPClass(TEXT("/Game/Player_HUD.Player_HUD"));
	if (HUDBPClass.Class != NULL)
	{
		HUDClass = HUDBPClass.Class;
		//https://forums.unrealengine.com/showthread.php?86204-C-GameMode-with-Blueprint-HUD
	}
}
