// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "NaveCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveCaza : public AEnemy
{
	GENERATED_BODY()
private:
	int numBombas;
public:
	ANaveCaza();
	FORCEINLINE int GetnumBombas() const { return numBombas; }
	FORCEINLINE void SetnumBombas(int _numBombas) { numBombas = _numBombas; }
protected:
	virtual void Mover();
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();
};
