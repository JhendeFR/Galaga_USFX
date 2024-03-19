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
	TArray<TSubclassOf<AEnemy>> ClasesNaves;
	TMap<TSubclassOf<AEnemy>, int> MaxNavesPorTipo;
	ClasesNaves.Add(ANaveCaza::StaticClass());
	ClasesNaves.Add(ACazaGen01::StaticClass());
	ClasesNaves.Add(ACazaGen02::StaticClass());
	ClasesNaves.Add(ANaveTransp::StaticClass());
	ClasesNaves.Add(ATranspGen01::StaticClass());
	ClasesNaves.Add(ATranspGen02::StaticClass());
	ClasesNaves.Add(ANaveEspia::StaticClass());
	ClasesNaves.Add(AEspiaGen01::StaticClass());
	ClasesNaves.Add(AEspiaGen02::StaticClass());
	ClasesNaves.Add(ANaveReab::StaticClass());
	ClasesNaves.Add(AReabGen01::StaticClass());
	ClasesNaves.Add(AReabGen02::StaticClass());
	ClasesNaves.Add(ANaveNodriza::StaticClass());

	MaxNavesPorTipo.Add(ANaveCaza::StaticClass(), 5);
	MaxNavesPorTipo.Add(ACazaGen01::StaticClass(), 5);
	MaxNavesPorTipo.Add(ACazaGen02::StaticClass(), 5);
	MaxNavesPorTipo.Add(ANaveTransp::StaticClass(), 5);
	MaxNavesPorTipo.Add(ATranspGen01::StaticClass(), 5);
	MaxNavesPorTipo.Add(ATranspGen02::StaticClass(), 5);
	MaxNavesPorTipo.Add(ANaveEspia::StaticClass(), 5);
	MaxNavesPorTipo.Add(AEspiaGen01::StaticClass(), 5);
	MaxNavesPorTipo.Add(AEspiaGen02::StaticClass(), 5);
	MaxNavesPorTipo.Add(ANaveReab::StaticClass(), 5);
	MaxNavesPorTipo.Add(AReabGen01::StaticClass(), 5);
	MaxNavesPorTipo.Add(AReabGen02::StaticClass(), 5);
	MaxNavesPorTipo.Add(ANaveNodriza::StaticClass(), 1);



	FVector UIniNavesCaza = FVector(0.0f, -1000.0f, 250.0f);

	//No tocaremos la rotacion porque no nos interesa por ahora la rotacion de los objetos.
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld(); //Estamos obteniendo una direccion (puntero) de la clase UWorld (Escenario del juego).
	if (World != nullptr) //Verificamos si el puntero obtenido es valido.
	{
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 10; j++) {
				TSubclassOf<AEnemy>ClaseNaveAleatoria = ClasesNaves[FMath::RandRange(0, ClasesNaves.Num()-1)];
				if (MaxNavesPorTipo.Contains(ClaseNaveAleatoria)) {
					int& NavesGeneradas = MaxNavesPorTipo[ClaseNaveAleatoria];
					if (NavesGeneradas > 0) {
						FVector PActualNaveCaza = FVector(UIniNavesCaza.X + i * 150, UIniNavesCaza.Y + j * 150, UIniNavesCaza.Z);
						AEnemy* NaveCazaInst = World->SpawnActor<AEnemy>(ClaseNaveAleatoria, PActualNaveCaza, rotacionNave);
						Enemigos.Push(NaveCazaInst);
						NavesGeneradas--;
					}
				}
			}
		}
	}
}