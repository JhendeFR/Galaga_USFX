// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "Prototype.h"
#include "NavEstrategica.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANavEstrategica : public AEnemy, public IPrototype
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ANavEstrategica();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* NavEstMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void Ataque();
public:
	void CambiarEstrategia(AActor* _Estrategia);
	void AplicarEstrategia(float DeltaTime);

	void EstrategiaEstandar();
	void EstrategiaIntimidante();
	void EstrategiaDefensiva();

	class AStrEstandar* EstrategiaEst;
	class AStrIntimidacion* EstrategiaInt;
	class AStrDefensiva* EstrategiaDef;

private:
	class IStrategy* EstrategiaActual;
	float deltatime;
public:
	AActor* Clonar() override;
};
