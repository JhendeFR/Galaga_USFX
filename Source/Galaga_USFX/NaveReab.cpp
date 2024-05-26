// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReab.h"

ANaveReab::ANaveReab() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
    SetActorScale3D(FVector(3.0f, 3.0f, 3.0f));
}
void ANaveReab::Mover(float DeltaTime) {
    velocidad = 2.0f;

    static float TiempoInicio = GetWorld()->GetTimeSeconds();
    float DesplazamientoHorizontal = FMath::Sin(GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;

    FVector NewLocation = GetActorLocation();
    NewLocation.Y += DesplazamientoHorizontal;

    SetActorLocation(NewLocation);
}
void ANaveReab::Vida() {

}
void ANaveReab::Reabastecer() {

}
void ANaveReab::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}