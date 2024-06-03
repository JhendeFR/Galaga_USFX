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
    float velocidadX = 10.0f; // Velocidad en el eje X
    float velocidadZ = 5.0f;  // Velocidad en el eje Z
    float amplitudZ = 1.0f;   // Amplitud del movimiento en el eje Z
    static float TiempoInicio = NavEnemy->GetWorld()->GetTimeSeconds();

    float DesplazamientoHorizontal = FMath::Sin(NavEnemy->GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidadX;
    float DesplazamientoVertical = FMath::Cos(NavEnemy->GetWorld()->GetTimeSeconds() - TiempoInicio) * amplitudZ;

    FVector NewLocation = NavEnemy->GetActorLocation();
    NewLocation.X += velocidadX * DeltaTime; // Movimiento hacia la derecha en el eje X
    NewLocation.Z += DesplazamientoVertical; // Movimiento vertical en el eje Z
    NewLocation.Y += DesplazamientoHorizontal; // Movimiento en el eje Y

    NavEnemy->SetActorLocation(NewLocation);
}

void AStrDefensiva::SetNavEstrategica(ANavEstrategica* _NavD)
{
    NavD = Cast<ANavEstrategica>(_NavD);
}

