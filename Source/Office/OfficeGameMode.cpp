// Copyright Epic Games, Inc. All Rights Reserved.

#include "OfficeGameMode.h"
#include "OfficeHUD.h"
#include "OfficeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOfficeGameMode::AOfficeGameMode()
	: Super()
{
	// use our custom HUD class
	HUDClass = AOfficeHUD::StaticClass();
}
