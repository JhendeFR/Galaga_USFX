// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"
//lab de clase

//Declarar las clases para generar punteros a los objetos de las clases que utilizaremos.
//Recordar no usar AEnemy por terminos de abstraccion.
class ACazaGen01;
class ACazaGen02;
class AEspiaGen01;
class AEspiaGen02;
class AReabGen01;
class AReabGen02;
class ATranspGen01;
class ATranspGen02;
class ANaveNodriza;
//UCLASS es un Macro de que delara que la clase siguente podra ser manipulada por el motor grafico.
//Se le pasa el parametro 'MinimalAPI' en referencia al nivel de acceso de la API.
UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase //La clase es una Subcalse de AGameModeBase.
{
	GENERATED_BODY()

public:
	//Declaramos el constructor de la clase.
	AGalaga_USFXGameMode();
public:
	//Declarar las punteros de las funciones de las naves para apuntar objetos de la clase.
	ACazaGen01* CazaGen01;
	ACazaGen02* CazaGen02;
	AEspiaGen01* EspiaGen01;
	AEspiaGen02* EspiaGen02;
	AReabGen01* ReabGen01;
	AReabGen02* ReabGen02;
	ATranspGen01* TranspGen01;
	ATranspGen02* TranspGen02;
	ANaveNodriza* NaveNodriza;
protected:
	//BeginPlay es un Metodo de la clase 'AGameModeBase' y heredado por la clase 'AActor'.
	virtual void BeginPlay() override;

};