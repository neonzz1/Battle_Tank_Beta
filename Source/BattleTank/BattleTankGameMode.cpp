// Copyright Epic Games, Inc. All Rights Reserved.

#include "BattleTankGameMode.h"
#include "BattleTankPawn.h"
#include "BattleTankHud.h"

ABattleTankGameMode::ABattleTankGameMode()
{
	DefaultPawnClass = ABattleTankPawn::StaticClass();
	HUDClass = ABattleTankHud::StaticClass();
}
