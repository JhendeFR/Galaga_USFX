// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Strategy.h"
#include "NavEstrategica.h"
#include "GameFramework/Actor.h"
#include "StrDefensiva.generated.h"

UCLASS()
class GALAGA_USFX_API AStrDefensiva : public AActor, public IStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStrDefensiva();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void MovimientoLog(AEnemy* NavEnemy, float DeltaTime) override;
	class ANavEstrategica* NavD;
	virtual void SetNavEstrategica(ANavEstrategica* _NavD);
};
