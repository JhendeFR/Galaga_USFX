// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEspia.h"
#include "Strategy.h"
#include "Galaga_USFXProjectile.h"
#include "EspiaGen02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AEspiaGen02 : public ANaveEspia
{
	GENERATED_BODY()
public:
	AEspiaGen02();
protected:
	virtual void Mover(float DeltaTime);
	virtual void Ocultar();
	virtual void Velocidadplus();
public:
	virtual void Tick(float DeltaTime) override;
protected:
	void ModAttack() override;
};
