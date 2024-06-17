// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacObsBuild.generated.h"
UCLASS()
class GALAGA_USFX_API AFacObsBuild : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacObsBuild();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void GenPortanaves();//Creo que este metodo se encarga de generar los portanaves de forma aleatoria (no recuerdo si tengo otra clase para eso XD).
	void VerificarPortanaves();
public:
	class AControlDirect* Control;
};
