// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEspia.h"
#include "Galaga_USFXProjectile.h"
#include "EspiaGen02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AEspiaGen02 : public ANaveEspia
{
	GENERATED_BODY()
private:
	int multiplicadorbonus;
public:
	AEspiaGen02();
	FORCEINLINE int GetMultiplicadorBonus() const { return multiplicadorbonus; }

	FORCEINLINE void SetMultiplicadorBonus(int _multiplicadorbonus) { multiplicadorbonus = _multiplicadorbonus; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Vida();
	virtual void Ataque();
	virtual void Ocultar();
	virtual void Velocidadplus();
public:
	virtual void Tick(float DeltaTime) override;
};
