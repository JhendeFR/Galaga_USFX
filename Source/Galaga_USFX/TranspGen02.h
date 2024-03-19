// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTransp.h"
#include "TranspGen02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ATranspGen02 : public ANaveTransp
{
	GENERATED_BODY()
private:
	float capacidad;
	FVector tipoNaveGen02;
public:
	ATranspGen02();
	FORCEINLINE float GetCapacidad() const { return capacidad; }
	FORCEINLINE FVector GetTipoNaveGen01() const { return tipoNaveGen02; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }
	FORCEINLINE void  SetCapacidad(FVector _tipoNaveGen02) { tipoNaveGen02 = _tipoNaveGen02; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Descargar();
public:
	virtual void Tick(float DeltaTime) override;
};
