// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "ProjEnemy.h"
#include "Galaga_USFXPawn.h"
#include "Observer.h"
#include "ObservadorNotify.h"
#include "Strategy.h"
#include "Galaga_USFXProjectile.h"
#include "NaveNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveNodriza : public AEnemy, public IObserver
{
	GENERATED_BODY()
private:
	int numBombas;
	bool invisibilidad;
	float tiempo_invisibilidad;
	float capacidad;
	bool transportando;
	float tiempo_descarga;
	float tiempo_escudo;
	bool Cambiar;

public:
	ANaveNodriza();
	FORCEINLINE int GetnumBombas() const { return numBombas; }
	FORCEINLINE void SetnumBombas(int _numBombas) { numBombas = _numBombas; }

	FORCEINLINE bool GetInvisibilidad() const { return invisibilidad; }
	FORCEINLINE float GetTiempo_Invisibilidad() const { return tiempo_invisibilidad; }

	FORCEINLINE void SetInvisibilidad(bool _Invisibilidad) { invisibilidad = _Invisibilidad; }
	FORCEINLINE void SetTiempo_Invisibilidad(float _tiempo_invisibilidad) { tiempo_invisibilidad = _tiempo_invisibilidad; }

	FORCEINLINE float GetCapacidad() const { return capacidad; }
	FORCEINLINE bool GetTransportando() const { return transportando; }
	FORCEINLINE float GetTiempo_descarga() const { return tiempo_descarga; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }
	FORCEINLINE void SetTransportando(bool _transportando) { transportando = _transportando; }
	FORCEINLINE void SetTiempo_descarga(float _tiempo_descarga) { tiempo_descarga = _tiempo_descarga; }

	FORCEINLINE float SetTiempo_escudo() const { return tiempo_escudo; }
	FORCEINLINE void GetTiempo_escudo(float _tiempo_escudo) { tiempo_escudo = _tiempo_escudo; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void BeginPlay() override;
	virtual void Vida();
	virtual void Bombardear();
	virtual void Ocultar();
	virtual void Descargar();
	virtual void Escudo();
public:
	virtual void Tick(float DeltaTime) override;
public:
	void SetNavenodriza(AGalaga_USFXPawn* _Pawn);
	virtual void Actualizar(class AObservadorNotify* _Publicador) override;
	FString estad;
	class AObservadorNotify* Publicador;

private:
	UPROPERTY(VisibleAnywhere, Category = "Subscriptor")
	class AGalaga_USFXPawn* Pawn;
protected:
	class AGalaga_USFXPawn* Jugador;
	class ANaveNodriza* sub2;
protected:
	void ModAttack() override;
};
