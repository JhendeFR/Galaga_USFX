// Fill out your copyright notice in the Description page of Project Settings.


#include "TranspGen02.h"

ATranspGen02::ATranspGen02() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ATranspGen02::Mover(float DeltaTime) {
	velocidad = 0.25;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ATranspGen02::Vida() {

}
void ATranspGen02::Descargar() {

}
void ATranspGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}