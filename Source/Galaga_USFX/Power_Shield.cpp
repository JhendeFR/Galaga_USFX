// Fill out your copyright notice in the Description page of Project Settings.


#include "Power_Shield.h"
#include "Galaga_USFXPawn.h"

APower_Shield::APower_Shield()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/CapsulePass.CapsulePass'"));
	Power->SetStaticMesh(ShipMesh.Object);
	Power->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void APower_Shield::Movimiento()
{
	int vel = 100.0f;
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * vel * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}

void APower_Shield::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movimiento();
}

void APower_Shield::BeginPlay()
{
	Super::BeginPlay();
	
}
