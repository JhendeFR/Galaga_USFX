// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveReab.h"
#include "Strategy.h"
#include "Galaga_USFXProjectile.h"
#include "ReabGen01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AReabGen01 : public ANaveReab
{
	GENERATED_BODY()
private:
	float porcentaje_reab;
public:
	AReabGen01();
	FORCEINLINE float GetPorcentaje_reab() const { return porcentaje_reab; }

	FORCEINLINE void SetPorcentaje_reab(float _porcentaje_reab) { porcentaje_reab = _porcentaje_reab; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Reabastecer();
public:
	virtual void Tick(float DeltaTime) override;
};
