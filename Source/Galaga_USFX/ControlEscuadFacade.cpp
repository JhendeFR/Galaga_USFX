// Fill out your copyright notice in the Description page of Project Settings.


#include "ControlEscuadFacade.h"

// Sets default values
AControlEscuadFacade::AControlEscuadFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AControlEscuadFacade::BeginPlay()
{
	Super::BeginPlay();
	//GetWorldTimerManager().SetTimer(TimerHandle_GenPortanaves, this, &AControlEscuadFacade::AsigEstrategy, 5.0f, true, 5.0f);
	//AsigEstrategy();
	ElegirEstrategia();
}

// Called every frame
void AControlEscuadFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AControlEscuadFacade::Escuad_n1()
{
	TArray<TSubclassOf<AEnemy>> TipoNaves;//Declaramos un Array dinamico de la clase proporcionada por UE.
	//Usamos TMap para almacenar las clases de naves y la cantidad maxima de naves que se pueden generar.
	TMap<TSubclassOf<AEnemy>, int> MaxNav;//TSubclassOf para asegurarse que podamos asignar subclases especificas solo de 'Enemy'.
	//Añadimos las clases de naves al Array.
	//Recordemos que al añadir pasamos las subclases y el medodo 'StaticClass' para obtener su clase (UClass) en le ejecucion.
	//UClass nos sirve para crear, acceder y manipular a las propiedades y metodos de las clases en UE con C++ y Blueprints.
	TipoNaves.Add(ANaveCaza::StaticClass());
	TipoNaves.Add(ANaveEspia::StaticClass());
	TipoNaves.Add(ANaveReab::StaticClass());
	TipoNaves.Add(ANaveTransp::StaticClass());
	TipoNaves.Add(ANaveNodriza::StaticClass());
	//Añadimos cada clase de nave y la cantidad maximas que podemos generar.
	//La estrutura seria: (ClaseNave, CantidadMaxima)=(llave, valor).
	MaxNav.Add(ANaveCaza::StaticClass(), 5);
	MaxNav.Add(ANaveEspia::StaticClass(), 5);
	MaxNav.Add(ANaveReab::StaticClass(), 5);
	MaxNav.Add(ANaveTransp::StaticClass(), 5);
	MaxNav.Add(ANaveNodriza::StaticClass(), 1);

	UWorld* const World = GetWorld();

	//Numero de filas.
	for (int i = 0; i < 3; i++) {
		//Numero de Naves por columnas.
		for (int j = 0; j < 3; j++) {
			//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
			TSubclassOf<AEnemy>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
			//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
			//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
			if (MaxNav.Contains(TipoNavAlea)) {
				int NavesGeneradas = MaxNav[TipoNavAlea];//Asignamos a la varible el valor del TMap correspondiente a la llave.
				if (NavesGeneradas > 0) {
					FVector PActualNaves = FVector(Posicion.X + i * 300, Posicion.Y + j * 300, Posicion.Z);//Esto solo controla la distancia entre las naves
					AEnemy* NavesInst = World->SpawnActor<AEnemy>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
					Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
					NumEnemigos++;
					NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					NavesInst->AsignarEstrategia(Strategy);
				}
			}
		}
	}
}

void AControlEscuadFacade::Escuad_n2()
{
	TArray<TSubclassOf<AEnemy>> TipoNaves;
	TMap<TSubclassOf<AEnemy>, int> MaxNav;
	TipoNaves.Add(ACazaGen01::StaticClass());
	TipoNaves.Add(ATranspGen01::StaticClass());
	TipoNaves.Add(AEspiaGen01::StaticClass());
	TipoNaves.Add(AReabGen01::StaticClass());

	MaxNav.Add(ACazaGen01::StaticClass(), 5);
	MaxNav.Add(ATranspGen01::StaticClass(), 5);
	MaxNav.Add(AEspiaGen01::StaticClass(), 5);
	MaxNav.Add(AReabGen01::StaticClass(), 5);

	UWorld* const World = GetWorld();

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
			TSubclassOf<AEnemy>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
			//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
			//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
			if (MaxNav.Contains(TipoNavAlea)) {
				int NavesGeneradas = MaxNav[TipoNavAlea];//Asignamos a la varible el valor del TMap correspondiente a la llave.
				if (NavesGeneradas > 0) {
					FVector PActualNaves = FVector(Posicion.X + i * 300, Posicion.Y + j * 300, Posicion.Z);//Esto solo controla la distancia entre las naves
					AEnemy* NavesInst = World->SpawnActor<AEnemy>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
					Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
					NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					NavesInst->AsignarEstrategia(Strategy);
				}
			}
		}
	}
}

void AControlEscuadFacade::Escuad_n3()
{
	TArray<TSubclassOf<AEnemy>> TipoNaves;
	TMap<TSubclassOf<AEnemy>, int> MaxNav;

	TipoNaves.Add(ACazaGen02::StaticClass());
	TipoNaves.Add(ATranspGen02::StaticClass());
	TipoNaves.Add(AEspiaGen02::StaticClass());
	TipoNaves.Add(AReabGen02::StaticClass());

	MaxNav.Add(ACazaGen02::StaticClass(), 5);
	MaxNav.Add(ATranspGen02::StaticClass(), 5);
	MaxNav.Add(AEspiaGen02::StaticClass(), 5);
	MaxNav.Add(AReabGen02::StaticClass(), 5);

	UWorld* const World = GetWorld();

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++) {
			//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
			TSubclassOf<AEnemy>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
			//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
			//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
			if (MaxNav.Contains(TipoNavAlea)) {
				int NavesGeneradas = MaxNav[TipoNavAlea];//Asignamos a la varible el valor del TMap correspondiente a la llave.
				if (NavesGeneradas > 0) {
					FVector PActualNaves = FVector(Posicion.X + i * 300, Posicion.Y + j * 300, Posicion.Z);//Esto solo controla la distancia entre las naves
					AEnemy* NavesInst = World->SpawnActor<AEnemy>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
					Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
					NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					NavesInst->AsignarEstrategia(Strategy);
				}
			}
		}
	}
}

void AControlEscuadFacade::Escuad_n4()
{
	TArray<TSubclassOf<AEnemy>> TipoNaves;
	TMap<TSubclassOf<AEnemy>, int> MaxNav;

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

	UWorld* const World = GetWorld();

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 10; j++) {
			//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
			TSubclassOf<AEnemy>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
			//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
			//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
			if (MaxNav.Contains(TipoNavAlea)) {
				int NavesGeneradas = MaxNav[TipoNavAlea];//Asignamos a la varible el valor del TMap correspondiente a la llave.
				if (NavesGeneradas > 0) {
					FVector PActualNaves = FVector(Posicion.X + i * 300, Posicion.Y + j * 300, Posicion.Z);//Esto solo controla la distancia entre las naves
					AEnemy* NavesInst = World->SpawnActor<AEnemy>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
					Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
					NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					NavesInst->AsignarEstrategia(Strategy);
				}
			}
		}
	}
}

void AControlEscuadFacade::Escuad_n5()
{
	TArray<TSubclassOf<AEnemy>> TipoNaves;
	TMap<TSubclassOf<AEnemy>, int> MaxNav;

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

	UWorld* const World = GetWorld();

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
			TSubclassOf<AEnemy>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
			//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
			//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
			if (MaxNav.Contains(TipoNavAlea)) {
				int NavesGeneradas = MaxNav[TipoNavAlea];//Asignamos a la varible el valor del TMap correspondiente a la llave.
				if (NavesGeneradas > 0) {
					FVector PActualNaves = FVector(Posicion.X + i * 300, Posicion.Y + j * 300, Posicion.Z);//Esto solo controla la distancia entre las naves
					AEnemy* NavesInst = World->SpawnActor<AEnemy>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
					Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
					NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					NavesInst->AsignarEstrategia(Strategy);
				}
			}
		}
	}
}

void AControlEscuadFacade::SupEscuad()
{
	TArray<TSubclassOf<AEnemy>> TipoNaves;
	TMap<TSubclassOf<AEnemy>, int> MaxNav;

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

	UWorld* const World = GetWorld();

	int frand = FMath::RandRange(1, 5);
	int crand = FMath::RandRange(1, 15);

	for (int i = 0; i < frand; i++) {
		for (int j = 0; j < crand; j++) {
			//Recordemos declarar a 'TipoNavAlea' como referencia de las subclases de 'AEnemy'.
			TSubclassOf<AEnemy>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num() - 1)];//Esto asigna una nave aleatoria de nuestro array de naves.
			//Verificamos si el Tmap tiene la llave (TipoNavAlea) que recordemos que es una subclase especifica de 'Enemy'.
			//Contains es un metodo que se llama en un TMap para verificar si contiene una clave específica (TipoNavAlea).
			if (MaxNav.Contains(TipoNavAlea)) {
				int NavesGeneradas = MaxNav[TipoNavAlea];//Asignamos a la varible el valor del TMap correspondiente a la llave.
				if (NavesGeneradas > 0) {
					FVector PActualNaves = FVector(Posicion.X + i * 300, Posicion.Y + j * 300, Posicion.Z);//Esto solo controla la distancia entre las naves
					AEnemy* NavesInst = World->SpawnActor<AEnemy>(TipoNavAlea, PActualNaves, Rotacion);//Esto spawnea las naves en el mundo.
					Enemigos.Push(NavesInst);//Esto añade las naves al array de enemigos.
					NavesGeneradas--;//Cada vez que se crea una nave, se reduce el contador de naves disponibles para ese tipo.
					NavesInst->AsignarEstrategia(Strategy);
				}
			}
		}
	}
}

void AControlEscuadFacade::ElegirEstrategia()
{
	int RandomNumber = FMath::RandRange(0, 2);
	switch (RandomNumber)
	{
		case 0:
		{
			Strategy = NewObject<AStrEstandar>();
			break;
		}
		case 1:
		{
			Strategy = NewObject<AStrIntimidacion>();
			break;
		}
		case 2:
		{
			Strategy = NewObject<AStrDefensiva>();
			break;
		}
	}
}

void AControlEscuadFacade::EliminarEnemigo(AEnemy* Enemigo)
{
	Enemigos.Remove(Enemigo);
}
