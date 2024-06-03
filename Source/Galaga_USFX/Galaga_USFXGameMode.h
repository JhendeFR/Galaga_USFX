// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"
//Declarar las clases para generar punteros a los objetos de las clases que utilizaremos.
//Recordar no usar AEnemy por terminos de abstraccion.
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
	virtual void Tick(float DeltaTime) override;
protected:
	class AGalaga_USFXPawn* Jugador;
	class ANaveNodriza* sub2;
	class AFacObsBuild* Portanaves;
};