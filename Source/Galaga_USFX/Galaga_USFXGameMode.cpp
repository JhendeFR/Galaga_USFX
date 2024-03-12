// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "Enemy.h"
#include "NaveCaza.h"
#include "NaveEspia.h"
#include "NaveTransp.h"
//Incluir las clases creadas.h
AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	//Enemy01 = nullptr; Al definir a 'Enemy' como abstracta ya no necesitamos generar esta nave en el escenario.
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Poner la ubicacion de las 2 naves a generar en el word(rotator dejarlo 0,0,0).
	FVector ubicacionNave01 = FVector(-900.0f, 50.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		//este es el spawn de las naves
		NaveCaza01 = World->SpawnActor<ANaveCaza>(ubicacionNave01, rotacionNave);
		NaveEspia01 = World->SpawnActor<ANaveEspia>(ubicacionNave02, rotacionNave);
	}
	//Asignamos las posiciones a las naves
	NaveCaza01->Setposicion(FVector(2000.0f, 0.0f, 120.0f));
	NaveEspia01->Setposicion(FVector(500.0f, -500.0f, 200.0f));
}