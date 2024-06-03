// Fill out your copyright notice in the Description page of Project Settings.


#include "StrDefensiva.h"

// Sets default values
AStrDefensiva::AStrDefensiva()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrDefensiva::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrDefensiva::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrDefensiva::MovimientoLog(AEnemy* NavEnemy, float DeltaTime)
{
    float velocidad = 2.0f;
    static float TiempoInicio = NavEnemy->GetWorld()->GetTimeSeconds();
    float DesplazamientoHorizontal = FMath::Sin(NavEnemy->GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;

    FVector NewLocation = NavEnemy->GetActorLocation();
    NewLocation.X += velocidad; // Movimiento hacia adelante en el eje X
    NewLocation.Y += DesplazamientoHorizontal; // Movimiento en zig-zag en el eje Y

    NavEnemy->SetActorLocation(NewLocation);
}

