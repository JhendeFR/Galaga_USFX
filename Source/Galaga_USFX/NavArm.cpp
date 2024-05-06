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
	float vel = 0.0f;
}
void ANavArm::BuildArm()
{
	int arm = 50;
	FVector Posicion = FVector(-700.0f, -500.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	ARArm* n1 = GetWorld()->SpawnActor<ARArm>(Posicion, Rotacion);
	FVector Posicion2 = FVector(-700.0f, -500.0f, 170.0f);
	APortanave* n2 = GetWorld()->SpawnActor<APortanave>(Posicion2, Rotacion);
}

APortaNavControl* ANavArm::setNavControl()
{
	return nave;
}
