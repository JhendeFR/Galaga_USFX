// Fill out your copyright notice in the Description page of Project Settings.


#include "ControlEscuadFacade.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "EngineUtils.h"

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
	ElegirEstrategia();
}

// Called every frame
void AControlEscuadFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	VerificarEscuadron();
}

void AControlEscuadFacade::EscuadEjemploTM()
{
	TArray<TSubclassOf<AEnemy>> TipoNaves;
	TMap<TSubclassOf<AEnemy>, int> MaxNav;

	TipoNaves.Add(ANaveCaza::StaticClass());
	TipoNaves.Add(ACazaGen01::StaticClass());
	TipoNaves.Add(ACazaGen02::StaticClass());
	TipoNaves.Add(ANaveEspia::StaticClass());
	TipoNaves.Add(ACazaGen01::StaticClass());
	TipoNaves.Add(ACazaGen02::StaticClass());
	TipoNaves.Add(ANaveNodriza::StaticClass());

	MaxNav.Add(ANaveCaza::StaticClass(), 3);
	MaxNav.Add(ACazaGen01::StaticClass(), 3);
	MaxNav.Add(ACazaGen02::StaticClass(), 3);
	MaxNav.Add(ANaveEspia::StaticClass(), 3);
	MaxNav.Add(AEspiaGen01::StaticClass(), 3);
	MaxNav.Add(AEspiaGen02::StaticClass(), 3);
	MaxNav.Add(ANaveNodriza::StaticClass(), 1);
	

	UWorld* const World = GetWorld();

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			TSubclassOf<AEnemy>TipoNavAlea = TipoNaves[FMath::RandRange(0, TipoNaves.Num() - 1)];
			if (MaxNav.Contains(TipoNavAlea)) {
				int NavesGeneradas = MaxNav[TipoNavAlea];
				if (NavesGeneradas > 0) {
					FVector PActualNaves = FVector(Posicion.X + i * 300, Posicion.Y + j * 300, Posicion.Z);
					AEnemy* NavesInst = World->SpawnActor<AEnemy>(TipoNavAlea, PActualNaves, Rotacion);
					if (NavesInst) {
						Enemigos.Push(NavesInst);
						NavesGeneradas--;
						NavesInst->AsignarEstrategia(Strategy);
						NavesInst->OnDestroyed.AddDynamic(this, &AControlEscuadFacade::NaveDestruida);
					}
				}
			}
		}
	}
}

void AControlEscuadFacade::ElegirEstrategia()
{
	//int RandomNumber = FMath::RandRange(0, 2);
	int RandomNumber = 0;
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

void AControlEscuadFacade::NaveDestruida(AActor* DestroyedActor)
{
	AEnemy* Nave = Cast<AEnemy>(DestroyedActor);
	if (Nave)
	{
		Enemigos.Remove(Nave);
		VerificarEscuadron();
	}
}

void AControlEscuadFacade::VerificarEscuadron()
{
	if (Enemigos.Num() == 0) {
		EscuadEjemploTM();
	}
	else {
		for (int32 i = Enemigos.Num() - 1; i >= 0; --i) {
			if (Enemigos[i] == nullptr) {
				Enemigos.RemoveAt(i);
			}
		}
	}
}
