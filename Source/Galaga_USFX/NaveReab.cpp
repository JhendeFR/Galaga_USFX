// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReab.h"

ANaveReab::ANaveReab() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveReab::Mover(float DeltaTime) {
	FVector PActual = GetActorLocation();
	float NewX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	float NewY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	FVector PFinal = FVector(PActual.X + NewX, PActual.Y + NewY, PActual.Z);
	SetActorLocation(PFinal);
}
void ANaveReab::Vida() {

}
void ANaveReab::Reabastecer() {

}
void ANaveReab::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}