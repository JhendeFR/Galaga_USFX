// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTransp.h"

ANaveTransp::ANaveTransp() {
    // Inicializar la malla de la nave caza
    // Por ejemplo:
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveTransp::Mover(float DeltaTime) {
    FVector PActual = GetActorLocation();
    float NewX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
    float NewY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
    FVector PFinal = FVector(PActual.X + NewX, PActual.Y + NewY, PActual.Z);
    SetActorLocation(PFinal);
}
void ANaveTransp::Vida() {

}
void ANaveTransp::Descargar() {

}
void ANaveTransp::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}