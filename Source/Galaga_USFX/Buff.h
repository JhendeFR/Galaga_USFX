// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Buff.generated.h"

UCLASS()
class GALAGA_USFX_API ABuff : public AActor
{
	GENERATED_BODY()
protected:
	float velocidad;
	FVector posicion;
	float timePlay;
	FVector trayectoria;
public:
	FORCEINLINE float Getvelocidad() const { return velocidad; }

	FORCEINLINE void Setvelocidad(int _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void Setposicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SettimePlay(float _timePlay) { timePlay = _timePlay; }
	FORCEINLINE void Settrayectoria(FVector _trayectoria) { trayectoria = _trayectoria; }
	
public:	
	// Sets default values for this actor's properties
	ABuff();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
