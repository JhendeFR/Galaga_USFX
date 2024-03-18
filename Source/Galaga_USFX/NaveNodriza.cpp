// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"

ANaveNodriza::ANaveNodriza() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveNodriza::Mover(float DeltaTime) {
	FVector PActual = GetActorLocation();
	float NewX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	float NewY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	FVector PFinal = FVector(PActual.X + NewX, PActual.Y + NewY, PActual.Z);
	SetActorLocation(PFinal);
}
void ANaveNodriza::Vida() {

}
void ANaveNodriza::Ataque() {

}
void ANaveNodriza::Bombardear() {

}
void ANaveNodriza::Ocultar() {

}
void ANaveNodriza::Descargar() {

}
void ANaveNodriza::Escudo() {

}
void ANaveNodriza::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}