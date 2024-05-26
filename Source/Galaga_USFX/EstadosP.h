// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstadosP.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstadosP : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API IEstadosP
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Establecemos el pawn actual
	virtual void SetPawn(class AGalaga_USFXPawn* _Pawn)= 0;
	//Establecemos el estado actual del jugador
	virtual void PawnNormal() = 0;
	virtual void PawnLento() = 0;
	virtual void PawnInvisible() = 0; //tal vez cambie a PawnPobre (sin municionxd).
	virtual void PawnInvencible() = 0;
	//Visualizamos los estados actuales del jugador
	virtual FString ObtenerEstado() = 0;
};
