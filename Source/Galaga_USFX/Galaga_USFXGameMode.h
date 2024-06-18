// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

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
	class AControlEscuadFacade* Escuadrones;
private:
	FTimerHandle TimerHandle_GenPortanaves;
	void GenPortanavesRepeatedly();
public:
	float time;
private:
	class ANavEstrategica* NaveEstrategica;
	class ANavEstrategica* EstrategicaClon;

	class AStrEstandar* EstNavEstandar;
	class AStrIntimidacion* EstNavIntimidacion;
	class AStrDefensiva* EstNavDefensiva;
	FString EstadoPawn;
};