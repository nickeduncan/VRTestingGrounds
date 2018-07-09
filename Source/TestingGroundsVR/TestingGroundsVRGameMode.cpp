// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TestingGroundsVRGameMode.h"
#include "TestingGroundsVRHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingGroundsVRGameMode::ATestingGroundsVRGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behavior/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGroundsVRHUD::StaticClass();
}
