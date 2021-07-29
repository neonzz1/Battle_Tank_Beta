// Fill out your copyright notice in the Description page of Project Settings.


#include "TankBase.h"
ATankBase::ATankBase()
{
    PrimaryActorTick.bCanEverTick = true;


}
float ATankBase::GetHealthPercent() const
{
    return (float)CurrentHealth / (float)StartingHealth;
}

float ATankBase::GetShieldPercent() const
{
    return (float)CurrentShield / (float)MaxShield;
}

void ATankBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATankBase::BeginPlay()
{
    Super::BeginPlay();

    CurrentHealth = StartingHealth;

    CurrentShield = StartingShield;
}

float ATankBase::TakeDamage(float DamageAmmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    int32 DamagePoints = FPlatformMath::RoundToInt(DamageAmmount); //Changes Damageammount to in32
    
    int32 DamageToApply = FMath::Clamp<int32>(DamagePoints, 0, CurrentHealth);

    if(CurrentShield != 0)
    {
        CurrentShield -= DamageToApply;
    }
    else
    {
        CurrentHealth -= DamageToApply;
    }

    if (CurrentHealth <= 0)
    {
        //
    }
    return DamageToApply;
}
