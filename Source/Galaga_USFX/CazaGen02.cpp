// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaGen02.h"

ACazaGen02::ACazaGen02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ACazaGen02::Mover(float DeltaTime) {
	FVector PActual = GetActorLocation();
	float NewX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	float NewY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	FVector PFinal = FVector(PActual.X + NewX, PActual.Y + NewY, PActual.Z);
	SetActorLocation(PFinal);
}
void ACazaGen02::Ataque() {

}
void ACazaGen02::Vida() {

}
void ACazaGen02::Bombardear() {

}
void ACazaGen02::Cargar_Sbomba() {

}
void ACazaGen02::Super_Bomba() {

}
void ACazaGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}