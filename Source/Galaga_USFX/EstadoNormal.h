// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosP.h"
#include "EstadoNormal.generated.h"

UCLASS()
class GALAGA_USFX_API AEstadoNormal : public AActor, public IEstadosP
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoNormal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "PawnNormalito")
	class AGalaga_USFXPawn* Pawn;
public:
	void SetPawn(class AGalaga_USFXPawn* _Pawn) override;
	void PawnNormal() override;
	FORCEINLINE FString ObtenerEstado() override;
private:
	void PawnLento() override {};
	void PawnInvisible() override {};
	void PawnInvencible() override {};
};
