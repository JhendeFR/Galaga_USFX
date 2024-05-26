// Fill out your copyright notice in the Description page of Project Settings.


#include "TranspGen02.h"

ATranspGen02::ATranspGen02() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
    SetActorRelativeScale3D(FVector(0.40f, 0.40f, 0.40f));
}
void ATranspGen02::Mover(float DeltaTime) {
    velocidad = 2.0f;

    static float TiempoInicio = GetWorld()->GetTimeSeconds();
    float DesplazamientoHorizontal = FMath::Sin(GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;

    FVector NewLocation = GetActorLocation();
    NewLocation.Y += DesplazamientoHorizontal;

    SetActorLocation(NewLocation);
}
void ATranspGen02::Vida() {

}
void ATranspGen02::Descargar() {

}
void ATranspGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}