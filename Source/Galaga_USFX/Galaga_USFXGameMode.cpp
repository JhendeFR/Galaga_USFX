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
		AControlEscuadFacade* Escuadrones = GetWorld()->SpawnActor<AControlEscuadFacade>(AControlEscuadFacade::StaticClass());
		//Generamos las naves.
		Escuadrones->Escuad_n1();
		//Escuadrones->Escuad_n2();
		//Escuadrones->Escuad_n3();
		//Escuadrones->SupEscuad();

		//Generarmos los power ups.
		APowerUpFactory* GenPowerUp = World->SpawnActor<APowerUpFactory>();
		GenPowerUp->CrearPower("Speed");
		GenPowerUp->CrearPower("Shield");

		//Jugador = GetWorld()->SpawnActor<AGalaga_USFXPawn>(AGalaga_USFXPawn::StaticClass());
		Jugador = Cast<AGalaga_USFXPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());

		Jugador->Estados("Normal");
		Jugador->PawnNormal();
		/*Jugador->Estados("Lento");
		Jugador->PawnLenteado();*/
		/*Jugador->Estados("Invisible");
		Jugador->PawnInvisibiliando();*/
		/*Jugador->Estados("Invencible");
		Jugador->PawnInvenciblepapidios();*/
		Portanaves = GetWorld()->SpawnActor<AFacObsBuild>(AFacObsBuild::StaticClass());
		Portanaves->GenPortanaves();

		sub2 = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());
		sub2->SetNavenodriza(Jugador);
	}
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//sub2->Actualizar(sub2->Publicador);
}

