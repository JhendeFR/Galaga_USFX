// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveCaza.h"
#include "Strategy.h"
#include "Galaga_USFXProjectile.h"
#include "CazaGen02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACazaGen02 : public ANaveCaza
{
	GENERATED_BODY()
private:
	bool super_bomba;
public:
	ACazaGen02();
	FORCEINLINE bool SetSuper_bomba() const { return super_bomba; }
	FORCEINLINE void GetSuper_bomba(bool _super_bomba) { super_bomba = _super_bomba; }
protected:
	virtual void Mover(float DeltaTime);
	
	//virtual void Super_Bomba();
public:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere, Category = "Gameplay")
	float BombDist; //Distancia del escudo con respecto al jugador.
	//FTimerHandle es una estructura brindada por UE que nos permite manejar y referenciar temporizadores.
	FTimerHandle BombActivar;
	FTimerHandle BombDesactivar;
protected:
	void ModAttack() override;
};
