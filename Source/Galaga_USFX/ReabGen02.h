// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveReab.h"
#include "Galaga_USFXProjectile.h"
#include "ReabGen02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AReabGen02 : public ANaveReab
{
	GENERATED_BODY()
private:
	float porcentaje_reab;
	float multiplicador_reab; //un numero que sera como un bonus para aumentar la velocidad de reabastecimiento.
public:
	AReabGen02();
	FORCEINLINE float GetPorcentaje_reab() const { return porcentaje_reab; }
	FORCEINLINE float GetMultipicador_reab() const { return multiplicador_reab; }

	FORCEINLINE void SetPorcentaje_reab(float _porcentaje_reab) { porcentaje_reab = _porcentaje_reab; }
	FORCEINLINE void SetMultiplicador_reab(float _multiplicador_reab) { multiplicador_reab = _multiplicador_reab; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Reabastecer();
public:
	virtual void Tick(float DeltaTime) override;
};
