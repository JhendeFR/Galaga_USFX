// Fill out your copyright notice in the Description page of Project Settings.


#include "EstPawnInvencible.h"
#include "Galaga_USFXPawn.h"

// Sets default values
AEstPawnInvencible::AEstPawnInvencible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstPawnInvencible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstPawnInvencible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstPawnInvencible::SetPawn(AGalaga_USFXPawn* _Pawn)
{
	Pawn = Cast<AGalaga_USFXPawn>(_Pawn);
}

void AEstPawnInvencible::PawnInvencible()
{
	Pawn->SetActorHiddenInGame(false);
	Pawn->SetActorEnableCollision(false);
}

FString AEstPawnInvencible::ObtenerEstado()
{
	return "Soy dios pa'";
}

