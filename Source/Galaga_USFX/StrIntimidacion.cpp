// Fill out your copyright notice in the Description page of Project Settings.


#include "StrIntimidacion.h"

// Sets default values
AStrIntimidacion::AStrIntimidacion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrIntimidacion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrIntimidacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrIntimidacion::MovimientoLog(AEnemy* NavEnemy, float DeltaTime)
{
    float velocidad = 2.0f;
    static float TiempoInicio = NavEnemy->GetWorld()->GetTimeSeconds();
    float Angulo = (NavEnemy->GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;

    FVector NewLocation = NavEnemy->GetActorLocation();
    NewLocation.X += FMath::Cos(Angulo) * velocidad; // Movimiento circular en el eje X
    NewLocation.Y += FMath::Sin(Angulo) * velocidad; // Movimiento circular en el eje Y

    NavEnemy->SetActorLocation(NewLocation);
}

void AStrIntimidacion::SetNavEstrategica(ANavEstrategica* _NavI)
{
    NavI = Cast<ANavEstrategica>(_NavI);
}

