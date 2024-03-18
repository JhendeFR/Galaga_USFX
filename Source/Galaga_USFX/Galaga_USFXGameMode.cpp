// Copyright Epic Games, Inc. All Rights Reserved.
//Incluir las clases necesarias.
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
#include "NaveNodriza.h"
//Esta es la implementacion del constructor que define la instancia inicial de la clase 'AGalaga_USFXPawn' para establecer un conportamiento preterminado.
//El constructor se llama automaticamente al crear un objeto de la clase.
AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
}



//La clase implementa la funcion BeginPlay.
//BeginPlay se llama al comienzo del juego y es donde se colocan las inicializaciones y configuraciones iniciales del juego.
void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay(); //Llama al metodo BeginPlay y se usar el 'Super' porque este es un metodo de AGameModeBase.
	//Definimos las posiciones iniciales para las naves a spawnear.
	FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-900.0f, 400.0f, 250.0f);

	FVector ubicacionNave03 = FVector(-800.0f, 300.0f, 250.0f);
	FVector ubicacionNave04 = FVector(-700.0f, 200.0f, 250.0f);

	FVector ubicacionNave05 = FVector(-600.0f, 100.0f, 250.0f);
	FVector ubicacionNave06 = FVector(-500.0f, 0.0f, 250.0f);

	FVector ubicacionNave07 = FVector(-400.0f, -100.0f, 250.0f);
	FVector ubicacionNave08 = FVector(-300.0f, -200.0f, 250.0f);

	FVector ubicacionNave09 = FVector(-200.0f, -300.0f, 250.0f);
	//No tocaremos la rotacion porque no nos interesa por ahora la rotacion de los objetos.
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld(); //Estamos obteniendo una direccion (puntero) de la clase UWorld (Escenario del juego).
	if (World != nullptr) //Verificamos si el puntero obtenido es valido.
	{
		//En los punteros creados en el encabezado (.h) almacenamos el Spawn de las respectivas clases con las ubicaciones asignadas anteriormente.
		CazaGen01 = World->SpawnActor<ACazaGen01>(ubicacionNave01, rotacionNave);
		CazaGen02 = World->SpawnActor<ACazaGen02>(ubicacionNave02, rotacionNave);
		EspiaGen01 = World->SpawnActor<AEspiaGen01>(ubicacionNave03, rotacionNave);
		EspiaGen02 = World->SpawnActor<AEspiaGen02>(ubicacionNave04, rotacionNave);
		ReabGen01 = World->SpawnActor<AReabGen01>(ubicacionNave05, rotacionNave);
		ReabGen02 = World->SpawnActor<AReabGen02>(ubicacionNave06, rotacionNave);
		TranspGen01 = World->SpawnActor<ATranspGen01>(ubicacionNave07, rotacionNave);
		TranspGen02 = World->SpawnActor<ATranspGen02>(ubicacionNave08, rotacionNave);
		NaveNodriza = World->SpawnActor<ANaveNodriza>(ubicacionNave09, rotacionNave);

	}
}