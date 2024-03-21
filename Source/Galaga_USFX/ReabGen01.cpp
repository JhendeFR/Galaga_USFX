// Fill out your copyright notice in the Description page of Project Settings.


#include "ReabGen01.h"

AReabGen01::AReabGen01() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AReabGen01::Mover(float DeltaTime) {
	velocidad = 0.25;
	//Movimiento Diagonal Arriba-Izquierda.
	SetActorLocation(GetActorLocation() + FVector(velocidad, -velocidad, 0.0f));

}
void AReabGen01::Vida() {

}
void AReabGen01::Reabastecer() {

}
void AReabGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}