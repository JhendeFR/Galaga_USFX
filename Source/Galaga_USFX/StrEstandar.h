// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Strategy.h"
#include "NavEstrategica.h"
#include "GameFramework/Actor.h"
#include "StrEstandar.generated.h"

UCLASS()
class GALAGA_USFX_API AStrEstandar : public AActor, public IStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStrEstandar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void MovimientoLog(AEnemy* NavEnemy, float DeltaTime) override;
	class ANavEstrategica* NavE;
	virtual void SetNavEstrategica(class ANavEstrategica* _NavE);
};
