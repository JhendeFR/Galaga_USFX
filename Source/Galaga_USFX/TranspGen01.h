// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTransp.h"
#include "Galaga_USFXProjectile.h"
#include "TranspGen01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ATranspGen01 : public ANaveTransp
{
	GENERATED_BODY()
private:
	float capacidad;
	FVector tipoNaveGen01;
public:
	ATranspGen01();
	FORCEINLINE float GetCapacidad() const { return capacidad; }
	FORCEINLINE FVector GetTipoNaveGen01() const { return tipoNaveGen01; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }
	FORCEINLINE void  SetCapacidad(FVector _tipoNaveGen01) { tipoNaveGen01 = _tipoNaveGen01; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Descargar();
public:
	virtual void Tick(float DeltaTime) override;
};
