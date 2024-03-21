// Fill out your copyright notice in the Description page of Project Settings.


#include "ReabGen02.h"

AReabGen02::AReabGen02() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AReabGen02::Mover(float DeltaTime) {
	FVector PActual = GetActorLocation();
	velocidad = 0.25;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void AReabGen02::Vida() {

}
void AReabGen02::Reabastecer() {

}
void AReabGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}