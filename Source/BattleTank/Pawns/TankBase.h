// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "TankBase.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankBase : public AActor
{
	GENERATED_BODY()

public:

	ATankBase();

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealthPercent() const; // return percent health

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetShieldPercent() const;

	//UPROPERTY(EditAnywhere, Category = "Setup")
	//TSubclassOf<AShieldAnim> ShieldAnimBlueprint;

	virtual void Tick(float DeltaTime) override;

	//void SpawnShield();

	//AShieldAnim* ShieldAnim;

protected:
	//Called when the game starts or spawned
	virtual void BeginPlay() override;

	virtual float TakeDamage(float DamageAmmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	UPROPERTY(EditAnywhere, Category = "Health")
	int32 StartingHealth = 120.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	int32 CurrentHealth; //init in beginplay

	UPROPERTY(VisibleAnywhere, Category = "Health")
	int32 StartingShield = 20.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	int32 CurrentShield;

	UPROPERTY(VisibleAnywhere, Category = "Health")
	int32 MaxShield = 120.0f;
	
};
