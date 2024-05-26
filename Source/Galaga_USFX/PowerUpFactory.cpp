// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUpFactory.h"
#include "Power_Speed.h"
#include "Power_Shield.h"

// Sets default values
APowerUpFactory::APowerUpFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APowerUpFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerUpFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APowerUpFactory::CrearPower(FString tipo)
{
	float PosX = FMath::RandRange(-1500.0f, 1500.0f);
	float PosY = FMath::RandRange(-1500.0f, 1500.0f);
	FVector Posicion = FVector(PosX, PosY, 150.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	if (tipo == "Speed") {
		GetWorld()->SpawnActor<APower_Speed>(APower_Speed::StaticClass(), Posicion, Rotacion);
	}
	if (tipo == "Shield") {
		GetWorld()->SpawnActor<APower_Shield>(APower_Shield::StaticClass(), Posicion, Rotacion);
	}
}