// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosP.h"
#include "EstPawnInvencible.generated.h"

UCLASS()
class GALAGA_USFX_API AEstPawnInvencible : public AActor, public IEstadosP
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstPawnInvencible();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "PawnInvisible")
	class AGalaga_USFXPawn* Pawn;
public:
	void SetPawn(class AGalaga_USFXPawn* _Pawn) override;
	void PawnInvencible() override;
	FORCEINLINE FString ObtenerEstado() override;
private:
	void PawnNormal() override {};
	void PawnLento() override {};
	void PawnInvisible() override {};
};
