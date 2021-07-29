// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BattleTankHud.generated.h"

UCLASS(config = Game)
class ABattleTankHud : public AHUD
{
	GENERATED_BODY()

public:
	ABattleTankHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
