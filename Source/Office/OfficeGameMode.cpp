// Copyright Epic Games, Inc. All Rights Reserved.

#include "OfficeGameMode.h"
#include "OfficeHUD.h"
#include "OfficeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOfficeGameMode::AOfficeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOfficeHUD::StaticClass();
}
