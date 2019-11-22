// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FPS_TestingGroundGameMode.h"
#include "FPS_TestingGroundHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_TestingGroundGameMode::AFPS_TestingGroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_TestingGroundHUD::StaticClass();
}
