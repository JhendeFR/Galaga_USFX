// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoNormal.h"
#include "Galaga_USFXPawn.h"

// Sets default values
AEstadoNormal::AEstadoNormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoNormal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoNormal::SetPawn(AGalaga_USFXPawn* _Pawn)
{
	Pawn = Cast<AGalaga_USFXPawn>(_Pawn);
}

void AEstadoNormal::PawnNormal()
{
	Pawn->ResSpeed();
	Pawn->SetActorHiddenInGame(false);
	Pawn->SetActorEnableCollision(true);
}

FString AEstadoNormal::ObtenerEstado()
{
	return "Estado Normal";
}

