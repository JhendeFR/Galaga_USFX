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
	/*float velocidad = 2.0f;
	FVector NewLocation = NavEnemy->GetActorLocation();
	NewLocation.Y += FMath::Sin(GetWorld()->GetTimeSeconds()) * velocidad;
	NavEnemy->SetActorLocation(NewLocation);*/
    float velocidadX = 2.0f; // Velocidad en el eje X
    float velocidadZ = 1.0f;  // Velocidad en el eje Z
    float amplitudZ = 0.0f;   // Amplitud del movimiento en el eje Z
    static float TiempoInicio = NavEnemy->GetWorld()->GetTimeSeconds();

    float DesplazamientoHorizontal = FMath::Sin(NavEnemy->GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidadX;
    float DesplazamientoVertical = FMath::Cos(NavEnemy->GetWorld()->GetTimeSeconds() - TiempoInicio) * amplitudZ;

    FVector NewLocation = NavEnemy->GetActorLocation();
    NewLocation.X += velocidadX * DeltaTime; // Movimiento hacia la derecha en el eje X
    NewLocation.Z += DesplazamientoVertical; // Movimiento vertical en el eje Z
    NewLocation.Y += DesplazamientoHorizontal; // Movimiento en el eje Y

    NavEnemy->SetActorLocation(NewLocation);
}

void AStrEstandar::SetNavEstrategica(ANavEstrategica* _NavE)
{
    NavE = Cast<ANavEstrategica>(_NavE);
}

