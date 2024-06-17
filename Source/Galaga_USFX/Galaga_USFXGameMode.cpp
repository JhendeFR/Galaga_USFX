// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "ControlEscuadFacade.h"
#include "PowerUpFactory.h"
#include "Power_Speed.h"
#include "NavControlInt.h"
#include "NavVel.h"
#include "NavArm.h"
#include "NavAll.h"
#include "ControlDirect.h"
#include "PortaNavControl.h"
#include "Portanave.h"
#include "RVel.h"
#include "RArm.h"
#include "RAll.h"
#include "FacObsBuild.h"
#include "NavEstrategica.h"
#include "StrEstandar.h"
#include "StrIntimidacion.h"
#include "StrDefensiva.h"
#include "Kismet/GameplayStatics.h"




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
	
	UWorld* const World = GetWorld(); //Estamos obteniendo una direccion (puntero) de la clase UWorld (Escenario del juego).
	if (World != nullptr) //Verificamos si el puntero obtenido es valido.
	{
		Jugador = Cast<AGalaga_USFXPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());

		Jugador->Estados("Normal");
		Jugador->PawnNormal();

		Escuadrones = GetWorld()->SpawnActor<AControlEscuadFacade>(AControlEscuadFacade::StaticClass());
		Escuadrones->EscuadEjemploTM();
		//Escuadrones->ElegirEstrategia();
		 
		//Nave para el patron strategy.
		//NaveEstrategica = GetWorld()->SpawnActor<ANavEstrategica>(FVector(-300.0f, 100.0f, 150.0f), FRotator(0.0f,180.0,0.0));

		//Generarmos los power ups.
		APowerUpFactory* GenPowerUp = World->SpawnActor<APowerUpFactory>();
		GenPowerUp->CrearPower("Speed");
		GenPowerUp->CrearPower("Shield");

		Portanaves = GetWorld()->SpawnActor<AFacObsBuild>(AFacObsBuild::StaticClass());
		GetWorldTimerManager().SetTimer(TimerHandle_GenPortanaves, this, &AGalaga_USFXGameMode::GenPortanavesRepeatedly, 5.0f, true, 5.0f);
		//Portanaves->GenPortanaves();

		/*sub2 = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());
		sub2->SetNavenodriza(Jugador);*/
		/*EstNavEstandar = GetWorld()->SpawnActor<AStrEstandar>(AStrEstandar::StaticClass());
		EstNavIntimidacion = GetWorld()->SpawnActor<AStrIntimidacion>(AStrIntimidacion::StaticClass());
		EstNavDefensiva = GetWorld()->SpawnActor<AStrDefensiva>(AStrDefensiva::StaticClass());*/

	}
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//int NumeroDeEnemigos = Escuadrones->GetNumEnemigos();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Numero de Enemigos: %d"), NumeroDeEnemigos));
	time += DeltaTime;
	EstadoPawn = Jugador->GetEstadoActual();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Tiempo: %f"), time));
	/*if(time >= 0.0f)
	{
		NaveEstrategica->CambiarEstrategia(EstNavEstandar);
		NaveEstrategica->AplicarEstrategia(DeltaTime);
	}
	if(time >= 15.0f)
	{
		NaveEstrategica->CambiarEstrategia(EstNavIntimidacion);
		NaveEstrategica->AplicarEstrategia(DeltaTime);
	}
	if(time >= 30.0f)
	{
		NaveEstrategica->CambiarEstrategia(EstNavDefensiva);
		NaveEstrategica->AplicarEstrategia(DeltaTime);
	}*/

}

void AGalaga_USFXGameMode::GenPortanavesRepeatedly()
{
	if (Portanaves)
	{
		Portanaves->GenPortanaves();
	}
}

