// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Power_Up.h"
#include "Galaga_USFXPawn.h"
#include "Power_Speed.generated.h"

/**
 * 
 */
class AGalaga_USFXPawn;
UCLASS()
class GALAGA_USFX_API APower_Speed : public APower_Up
{
	GENERATED_BODY()
public:
	APower_Speed();
	virtual void ActPowerUp(AGalaga_USFXPawn* Player);
	void Movimiento();
public:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
};
