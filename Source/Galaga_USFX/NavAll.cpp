// Fill out your copyright notice in the Description page of Project Settings.


#include "NavAll.h"

// Sets default values
ANavAll::ANavAll()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANavAll::BeginPlay()
{
	Super::BeginPlay();
	nave = GetWorld()->SpawnActor<APortaNavControl>();
}

// Called every frame
void ANavAll::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANavAll::BuildVel()
{
	float vel = 1000.0f;
	FVector Posicion = FVector(-1750.0f, -1750.0f, 170.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	ARAll* n1 = GetWorld()->SpawnActor<ARAll>(Posicion, Rotacion);
	FVector Posicion2 = FVector(-1750.0f, -1750.0f, 170.0f);
	APortanave* n2 = GetWorld()->SpawnActor<APortanave>(Posicion2, Rotacion);
}

void ANavAll::BuildArm()
{
}

APortaNavControl* ANavAll::setNavControl()
{
	return nave;
}

