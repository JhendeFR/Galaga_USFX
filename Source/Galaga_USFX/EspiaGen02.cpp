// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaGen02.h"

AEspiaGen02::AEspiaGen02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AEspiaGen02::Mover(float DeltaTime) {
	FVector PActual = GetActorLocation();
	float NewX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	float NewY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	FVector PFinal = FVector(PActual.X + NewX, PActual.Y + NewY, PActual.Z);
	SetActorLocation(PFinal);
}
void AEspiaGen02::Vida() {

}
void AEspiaGen02::Ataque() {

}
void AEspiaGen02::Ocultar() {

}
void AEspiaGen02::Velocidadplus() {

}
void AEspiaGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}