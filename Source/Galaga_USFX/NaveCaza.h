// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "Strategy.h"
#include "Galaga_USFXProjectile.h"
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
	//FVector GunOffset;
protected:
	virtual void Mover(float DeltaTime);//Se le pasa el parametro entero DeltaTime para poder calcular el tiempo entre fotogramas.
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();
	/*virtual void TReset_Proj();*/

public:
	//En este caso 'virtual' nos indica que esta funcion puede ser sobreescrita por una subclase.
	//Mientras que 'override' asegura que estemos sobreescribiendo una funcion de la clase base.
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
};
