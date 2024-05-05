// Fill out your copyright notice in the Description page of Project Settings.


#include "NavVel.h"

// Sets default values
ANavVel::ANavVel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ANavVel::BeginPlay()
{
	Super::BeginPlay();
	nave = GetWorld()->SpawnActor<APortaNavControl>();
}

// Called every frame
void ANavVel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANavVel::BuildVel()
{
	float vel = 1000.0f;
	FVector Posicion = FVector(-700.0f, -500.0f, 200.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	ARVel* n1 = GetWorld()->SpawnActor<ARVel>(Posicion, Rotacion);
	FVector Posicion2 = FVector(-700.0f, -500.0f, 170.0f);
	APortanave* n2 = GetWorld()->SpawnActor<APortanave>(Posicion2, Rotacion);
}
void ANavVel::BuildArm()
{
	int arm = 0;
}

APortaNavControl* ANavVel::setNavControl()
{
	//APortaNavControl* Nave = NewObject<APortaNavControl>();
	return nave;
}
