// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Power_Up.h"
#include "Galaga_USFXPawn.h"
#include "Power_Shield.generated.h"

/**
 * 
 */
class AGalaga_USFXPawn;
UCLASS()
class GALAGA_USFX_API APower_Shield : public APower_Up
{
	GENERATED_BODY()
public:
	APower_Shield();
private:
	void Movimiento();
public:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

};
