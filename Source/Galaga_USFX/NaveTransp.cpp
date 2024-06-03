// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTransp.h"

ANaveTransp::ANaveTransp() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
    SetActorScale3D(FVector(3.0f, 3.0f, 3.0f));
}
void ANaveTransp::Mover(float DeltaTime) {
    if (Strategy) {
        Strategy->MovimientoLog(this, DeltaTime);
    }
}
void ANaveTransp::Vida() {

}
void ANaveTransp::Descargar() {

}
void ANaveTransp::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}