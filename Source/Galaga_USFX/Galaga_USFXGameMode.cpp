// Copyright Epic Games, Inc. All Rights Reserved.
//Incluir las clases creadas.h
#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "Enemy.h"
#include "CazaGen01.h"
#include "CazaGen02.h"
#include "EspiaGen01.h"
#include "EspiaGen02.h"
#include "ReabGen01.h"
#include "ReabGen02.h"
#include "TranspGen01.h"
#include "TranspGen02.h"
AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	//Enemy01 = nullptr; Al definir a 'Enemy' como abstracta ya no necesitamos generar esta nave en el escenario.
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Poner la ubicacion de las naves a generar en el word(rotator dejarlo 0,0,0).
	FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-900.0f, 400.0f, 250.0f);

	FVector ubicacionNave03 = FVector(-800.0f, 300.0f, 250.0f);
	FVector ubicacionNave04 = FVector(-700.0f, 200.0f, 250.0f);

	FVector ubicacionNave05 = FVector(-600.0f, 100.0f, 250.0f);
	FVector ubicacionNave06 = FVector(-500.0f, 0.0f, 250.0f);

	FVector ubicacionNave07 = FVector(-400.0f, -100.0f, 250.0f);
	FVector ubicacionNave08 = FVector(-300.0f, -200.0f, 250.0f);

	FVector ubicacionNave09 = FVector(-200.0f, -300.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		//este es el spawn de las naves
		CazaGen01 = World->SpawnActor<ACazaGen01>(ubicacionNave01, rotacionNave);
		CazaGen02 = World->SpawnActor<ACazaGen02>(ubicacionNave02, rotacionNave);
		EspiaGen01 = World->SpawnActor<AEspiaGen01>(ubicacionNave03, rotacionNave);
		EspiaGen02 = World->SpawnActor<AEspiaGen02>(ubicacionNave04, rotacionNave);
		ReabGen01 = World->SpawnActor<AReabGen01>(ubicacionNave05, rotacionNave);
		ReabGen02 = World->SpawnActor<AReabGen02>(ubicacionNave06, rotacionNave);
		TranspGen01 = World->SpawnActor<ATranspGen01>(ubicacionNave07, rotacionNave);
		TranspGen02 = World->SpawnActor<ATranspGen02>(ubicacionNave08, rotacionNave);

	}
	//Asignamos las posiciones a las naves
	CazaGen01->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	CazaGen02->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	EspiaGen01->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	EspiaGen02->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	ReabGen01->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	ReabGen02->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	TranspGen01->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	TranspGen02->Setposicion(FVector(500.0f, 500.0f, 200.0f));
}