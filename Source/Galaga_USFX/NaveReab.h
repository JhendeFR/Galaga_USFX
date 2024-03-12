// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "NaveReab.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveReab : public AEnemy
{
	GENERATED_BODY()
private:
	float capacidad_reabastecimiento;
	float velocidad_reabastecimiento;
	bool estado_reabastecimiento;
public:
	ANaveReab();
	FORCEINLINE float GetCapacidad_reabastecimiento() { return capacidad_reabastecimiento; }
	FORCEINLINE float GetVelocidad_reabastecimiento() { return velocidad_reabastecimiento; }
	FORCEINLINE bool GetEstado_reabastecimiento() { return estado_reabastecimiento; }

	FORCEINLINE void SetCapacidad_reabastecimiento(float _capacidad_reabastecimiento) { capacidad_reabastecimiento = _capacidad_reabastecimiento; }
	FORCEINLINE void SetVelocidad_reabastecimiento(float _velocidad_reabastecimiento) { velocidad_reabastecimiento = _velocidad_reabastecimiento; }
	FORCEINLINE void SetEstado_reabastecimiento(bool _estado_reabastecimiento) { estado_reabastecimiento = _estado_reabastecimiento; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Ataque();
	virtual void Reabastecer();
};
