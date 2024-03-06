// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyProjectile.generated.h"

UCLASS()
class GALAGA_USFX_API AEnemyProjectile : public AActor
{
	GENERATED_BODY()
private:
	int velocidad;
	FVector posicion;
	float friccion;
	int tiempo_de_uso;
	FVector trayectoria;
public:
	FORCEINLINE int Getvelocidad() const { return velocidad; }
	FORCEINLINE FVector Getposicion() const { return posicion; }
	FORCEINLINE float Getfriccion() const { return friccion; }
	FORCEINLINE int Gettiempo_de_uso() const { return tiempo_de_uso; }
	FORCEINLINE FVector Gettrayectoria() const { return trayectoria; }

	FORCEINLINE void Setveliciodad(int _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void Setposicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void Setfriccion(float _friccion) { friccion = _friccion; }
	FORCEINLINE void Settiempo_de_uso(int _tiempo_de_uso) { tiempo_de_uso = _tiempo_de_uso; }
	FORCEINLINE void Settrayectoria(FVector _trayectoria) { trayectoria = _trayectoria; }
public:	
	// Sets default values for this actor's properties
	AEnemyProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
