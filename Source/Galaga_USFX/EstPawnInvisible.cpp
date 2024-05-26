// Fill out your copyright notice in the Description page of Project Settings.


#include "EstPawnInvisible.h"
#include "Galaga_USFXPawn.h"
// Sets default values
AEstPawnInvisible::AEstPawnInvisible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstPawnInvisible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstPawnInvisible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstPawnInvisible::SetPawn(AGalaga_USFXPawn* _Pawn)
{
	Pawn = Cast<AGalaga_USFXPawn>(_Pawn);
}

void AEstPawnInvisible::PawnInvisible()
{
	Pawn->SetActorHiddenInGame(true);
}

FString AEstPawnInvisible::ObtenerEstado()
{
	return "Tamo' invicible";
}

