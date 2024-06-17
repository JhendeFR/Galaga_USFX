// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveCaza.h"
#include "Strategy.h"
#include "Galaga_USFXProjectile.h"
#include "CazaGen01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACazaGen01 : public ANaveCaza
{
	GENERATED_BODY()
public:
	ACazaGen01();
protected:
	//Se le pondra override ? XD.
	virtual void Mover(float DeltaTime);
public:
	virtual void Tick(float DeltaTime) override;
protected:
	void ModAttack() override;
};
