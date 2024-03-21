// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaGen01.h"

AEspiaGen01::AEspiaGen01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AEspiaGen01::Mover(float DeltaTime) {
	velocidad = 0.25;
	//Movimiento Diagonal Arriba-Derecha.
	SetActorLocation(GetActorLocation() + FVector(velocidad, velocidad, 0.0f));

}
void AEspiaGen01::Vida() {

}
void AEspiaGen01::Ataque() {

}
void AEspiaGen01::Ocultar() {

}
void AEspiaGen01::Cadenciaplus() {

}
void AEspiaGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}