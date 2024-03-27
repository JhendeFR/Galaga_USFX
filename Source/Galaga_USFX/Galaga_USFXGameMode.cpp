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
	TArray<TSubclassOf<AEnemy>> TipoNaves;//Declaramos un Array dinamico de la clase proporcionada por UE.

	//Usamos TMap para almacenar las clases de naves y la cantidad maxima de naves que se pueden generar.
	TMap<TSubclassOf<AEnemy>, int> MaxNav;//TSubclassOf para asegurarse que podamos asignar subclases especificas solo de 'Enemy'.

	//Añadimos las clases de naves al Array.
	//Recordemos que al añadir pasamos las subclases y el medodo 'StaticClass' para obtener su clase (UClass) en le ejecucion.
	//UClass nos sirve para crear, acceder y manipular a las propiedades y metodos de las clases en UE con C++ y Blueprints.
	TipoNaves.Add(ANaveCaza::StaticClass());
	TipoNaves.Add(ACazaGen01::StaticClass());
	TipoNaves.Add(ACazaGen02::StaticClass());
	TipoNaves.Add(ANaveTransp::StaticClass());
	TipoNaves.Add(ATranspGen01::StaticClass());
	TipoNaves.Add(ATranspGen02::StaticClass());
	TipoNaves.Add(ANaveEspia::StaticClass());
	TipoNaves.Add(AEspiaGen01::StaticClass());
	TipoNaves.Add(AEspiaGen02::StaticClass());
	TipoNaves.Add(ANaveReab::StaticClass());
	TipoNaves.Add(AReabGen01::StaticClass());
	TipoNaves.Add(AReabGen02::StaticClass());
	TipoNaves.Add(ANaveNodriza::StaticClass());

	//Añadimos cada clase de nave y la cantidad maximas que podemos generar.
	//La estrutura seria: (ClaseNave, CantidadMaxima)=(llave, valor).
	MaxNav.Add(ANaveCaza::StaticClass(), 5);
	MaxNav.Add(ACazaGen01::StaticClass(), 5);
	MaxNav.Add(ACazaGen02::StaticClass(), 5);
	MaxNav.Add(ANaveTransp::StaticClass(), 5);
	MaxNav.Add(ATranspGen01::StaticClass(), 5);
	MaxNav.Add(ATranspGen02::StaticClass(), 5);
	MaxNav.Add(ANaveEspia::StaticClass(), 5);
	MaxNav.Add(AEspiaGen01::StaticClass(), 5);
	MaxNav.Add(AEspiaGen02::StaticClass(), 5);
	MaxNav.Add(ANaveReab::StaticClass(), 5);
	MaxNav.Add(AReabGen01::StaticClass(), 5);
	MaxNav.Add(AReabGen02::StaticClass(), 5);
	MaxNav.Add(ANaveNodriza::StaticClass(), 1);

	/*FString DatosMapa = ListarTmap(MaxNav);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, DatosMapa);*/

	FVector UIniNaves = FVector(0.0f, -1000.0f, 250.0f);
	//No tocaremos la rotacion porque no nos interesa por ahora la rotacion de los objetos.
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld(); //Estamos obteniendo una direccion (puntero) de la clase UWorld (Escenario del juego).
	if (World != nullptr) //Verificamos si el puntero obtenido es valido.
	{
		//Numero de filas.
		for (int i = 0; i < 3; i++) {
			//Numero de Naves por fila.
			for (int j = 0; j < 10; j++) {
				//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
				TSubclassOf<AEnemy>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num()-1)];//Esto asigna una nave aleatoria de nuestro array de naves.
				//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
				//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
				if (MaxNav.Contains(TipoNavAlea)) {
					int NavesGeneradas = MaxNav[TipoNavAlea];//Asignanos la nave aleatoria como un entero a la variable 'NavesGeneradas'.
					if (NavesGeneradas > 0) {
						FVector PActualNaves = FVector(UIniNaves.X + i * 150, UIniNaves.Y + j * 105, UIniNaves.Z);//Esto solo controla la distancia entre las naves
						AEnemy* NavesInst = World->SpawnActor<AEnemy>(TipoNavAlea, PActualNaves, rotacionNave);//Esto spawnea las naves en el mundo.
						Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
						NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					}
				}
			}
		}
	}
}
FString ListarTmap(const TMap<FString, int>& Mapa) {
	FString Resultado;
	for (const TPair<FString, int>& Elemento : Mapa) {
		FString Llave = Elemento.Key;
		int Valor = Elemento.Value;
		Resultado += FString::Printf(TEXT("Llave: %s, Valor: %d\n"), *Llave, Valor);
	}
	return Resultado;
}
void EliminarTmap(TMap<FString, int>& Mapa, const FString& Llave) {
	Mapa.Remove(Llave);
}