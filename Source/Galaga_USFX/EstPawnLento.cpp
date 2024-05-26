// Fill out your copyright notice in the Description page of Project Settings.


#include "EstPawnLento.h"
#include "Galaga_USFXPawn.h"

// Sets default values
AEstPawnLento::AEstPawnLento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstPawnLento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstPawnLento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstPawnLento::SetPawn(AGalaga_USFXPawn* _Pawn)
{
	Pawn = Cast<AGalaga_USFXPawn>(_Pawn);
}

void AEstPawnLento::PawnLento()
{
	Pawn->MoveSpeed= 100.0f;
}

FString AEstPawnLento::ObtenerEstado()
{
	return "Pawn lento pa'";
}


