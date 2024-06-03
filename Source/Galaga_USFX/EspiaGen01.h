// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEspia.h"
#include "Strategy.h"
#include "Galaga_USFXProjectile.h"
#include "EspiaGen01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AEspiaGen01 : public ANaveEspia
{
	GENERATED_BODY()
private:
	int multiplicadorbonus;
public:
	AEspiaGen01();
	FORCEINLINE int GetMultiplicadorBonus() const { return multiplicadorbonus; }
	
	FORCEINLINE void SetMultiplicadorBonus(int _multiplicadorbonus) { multiplicadorbonus = _multiplicadorbonus; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Ataque();
	virtual void Ocultar();
	virtual void Cadenciaplus();
public:
	virtual void Tick(float DeltaTime) override;
};
