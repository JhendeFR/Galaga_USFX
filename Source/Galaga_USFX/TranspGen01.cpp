// Fill out your copyright notice in the Description page of Project Settings.


#include "TranspGen01.h"

ATranspGen01::ATranspGen01() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ATranspGen01::Mover(float DeltaTime) {
	velocidad = 0.25;
	//Movimiento Circular.
	float Radio = 100.0f;
	float Angulo = GetWorld()->GetTimeSeconds() * velocidad;
	FVector NuevaPosicion = FVector(FMath::Cos(Angulo), FMath::Sin(Angulo), 0.0f) * Radio;
	SetActorLocation(NuevaPosicion);

}
void ATranspGen01::Vida() {

}
void ATranspGen01::Descargar() {

}
void ATranspGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}