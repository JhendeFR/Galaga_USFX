// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspia.h"

ANaveEspia::ANaveEspia() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveEspia::Mover(float DeltaTime) {
	FVector PActual = GetActorLocation();
	float NewX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	float NewY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	FVector PFinal = FVector(PActual.X + NewX, PActual.Y + NewY, PActual.Z);
	SetActorLocation(PFinal);
}
void ANaveEspia::Vida() {

}
void ANaveEspia::Ataque() {

}
void ANaveEspia::Ocultar() {

}
void ANaveEspia::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}