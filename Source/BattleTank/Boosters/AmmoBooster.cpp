// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoBooster.h"

// Sets default values
AAmmoBooster::AAmmoBooster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Collision Mesh"));
	SetRootComponent(CollisionMesh);

}

// Called when the game starts or when spawned
void AAmmoBooster::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void AAmmoBooster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

