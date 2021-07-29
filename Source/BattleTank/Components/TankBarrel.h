// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	//-1 is max down +1 is max upwards speed
	void Elevate(float RelativeSpeed);

private:

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float MaxDegreesPerSecond = 5.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float MinElevation = 0.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float MaxElevation = 40.0f;
	
};
