// Fill out your copyright notice in the Description page of Project Settings.


#include "StrEstandar.h"

// Sets default values
AStrEstandar::AStrEstandar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrEstandar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrEstandar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrEstandar::MovimientoLog(AEnemy* NavEnemy, float DeltaTime)
{
	float velocidad = 2.0f;
	FVector NewLocation = NavEnemy->GetActorLocation();
	NewLocation.Y += FMath::Sin(GetWorld()->GetTimeSeconds()) * velocidad;
	NavEnemy->SetActorLocation(NewLocation);
}

