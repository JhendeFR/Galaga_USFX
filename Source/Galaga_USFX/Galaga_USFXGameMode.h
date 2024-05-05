// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"
//Declarar las clases para generar punteros a los objetos de las clases que utilizaremos.
//Recordar no usar AEnemy por terminos de abstraccion.
class AEnemy;
class ANaveCaza;
class ACazaGen01;
class ACazaGen02;
class ANaveTransp;
class ATranspGen01;
class ATranspGen02;
class ANaveEspia;
class AEspiaGen01;
class AEspiaGen02;
class ANaveReab;
class AReabGen01;
class AReabGen02;
class ANaveNodriza;
class APortaNavControl;
class AControlDirect;
//UCLASS es un Macro de que delara que la clase siguente podra ser manipulada por el motor grafico.
//Se le pasa el parametro 'MinimalAPI' en referencia al nivel de acceso de la API.
UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase //La clase es una Subcalse de AGameModeBase.
{
	GENERATED_BODY()

public:
	//Declaramos el constructor de la clase.
	AGalaga_USFXGameMode();

protected:
	//BeginPlay es un Metodo de la clase 'AGameModeBase' y heredado por la clase 'AActor'.
	virtual void BeginPlay() override;
public:
	//Almacena los punteros de las naves en un TArray.
	TArray<AEnemy*> Enemigos;
	TArray<ANaveCaza*> NavesCaza;
	TArray<ACazaGen01*> CazaGen01;
	TArray<ACazaGen02*> CazaGen02;
	TArray<ANaveTransp*> NavesTransp;
	TArray<ATranspGen01*> TranspGen01;
	TArray<ATranspGen02*> TranspGen02;
	TArray<ANaveEspia*> NavesEspia;
	TArray<AEspiaGen01*> EspiaGen01;
	TArray<AEspiaGen02*> EspiaGen02;
	TArray<ANaveReab*> NavesReab;
	TArray<AReabGen01*> ReabGen01;
	TArray<AReabGen02*> ReabGen02;
	TArray<ANaveNodriza*> NavesNodriza;
	AControlDirect* Control;
};