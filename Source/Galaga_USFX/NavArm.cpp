// Fill out your copyright notice in the Description page of Project Settings.


#include "NavArm.h"

// Sets default values
ANavArm::ANavArm()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANavArm::BeginPlay()
{
	Super::BeginPlay();
	nave = GetWorld()->SpawnActor<APortaNavControl>();
}

// Called every frame
void ANavArm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANavArm::BuildVel()
{

}
void ANavArm::BuildArm()
{
	FVector Posicion = FVector(-1750.0f, -1750.0f, 170.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	ARArm* n1 = GetWorld()->SpawnActor<ARArm>(Posicion, Rotacion);
	FVector Posicion2 = FVector(-1750.0f, -1750.0f, 170.0f);
	APortanave* n2 = GetWorld()->SpawnActor<APortanave>(Posicion2, Rotacion);
}

APortaNavControl* ANavArm::setNavControl()
{
	return nave;
}
