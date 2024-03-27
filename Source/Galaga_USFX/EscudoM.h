// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EscudoM.generated.h"

UCLASS()
class GALAGA_USFX_API AEscudoM : public AActor
{
	GENERATED_BODY()
public:
	//Declaracion de la malla del escudo.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShieldMesh;
public:	
	// Sets default values for this actor's properties
	AEscudoM();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void EnableShield();
};
