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
	PrimaryActorTick.bCanEverTick = true; //Establece si el actor puede ser actualizado cada fotograma.
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
}



//La clase implementa la funcion BeginPlay.
//BeginPlay se llama al comienzo del juego y es donde se colocan las inicializaciones y configuraciones iniciales del juego.
void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay(); //Llama al metodo BeginPlay y se usar el 'Super' porque este es un metodo de AGameModeBase.
	//Definimos las posiciones iniciales para las naves a spawnear.

	FVector UIniNavesCaza = FVector(500.0f, 500.0f, 250.0f);

	//No tocaremos la rotacion porque no nos interesa por ahora la rotacion de los objetos.
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld(); //Estamos obteniendo una direccion (puntero) de la clase UWorld (Escenario del juego).
	if (World != nullptr) //Verificamos si el puntero obtenido es valido.
	{
		for (int i = 0; i < 5; i++) //Creamos un bucle para crear 5 naves.
		{
			FVector PActualNaveCaza = FVector(UIniNavesCaza.X, UIniNavesCaza.Y + i *150, UIniNavesCaza.Z); //Generamos un vector con las nuevas coordenadas.
			ANaveCaza* NaveCazaInst = World->SpawnActor<ANaveCaza>(PActualNaveCaza, rotacionNave); //Creamos una instancia de la clase ANaveCaza.
			Enemigos.Push(NaveCazaInst); //Agregamos la instancia a la lista de enemigos.
		}
		
	}
}