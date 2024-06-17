// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "CazaGen01.h"
#include "CazaGen02.h"
#include "EspiaGen01.h"
#include "EspiaGen02.h"
#include "NaveNodriza.h"
#include "Strategy.h"
#include "StrEstandar.h"
#include "StrIntimidacion.h"
#include "StrDefensiva.h"
#include "Galaga_USFXPawn.h"
#include "ControlEscuadFacade.generated.h"

UCLASS()
class GALAGA_USFX_API AControlEscuadFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControlEscuadFacade();
	TArray<AEnemy*> Enemigos;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector Posicion = FVector(0.0f,-800.0f, 150.0f);
	FRotator Rotacion = FRotator(0, 180, 0);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void EscuadEjemploTM();
	void ElegirEstrategia();
	UFUNCTION()
	void NaveDestruida(AActor* DestroyedActor);
private:
	class IStrategy* Strategy;
	class AGalaga_USFXPawn* Jugador;
	void VerificarEscuadron();
};
