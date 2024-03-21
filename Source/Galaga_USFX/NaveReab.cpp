// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReab.h"

ANaveReab::ANaveReab() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveReab::Mover(float DeltaTime) {
	velocidad = 0.25;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ANaveReab::Vida() {

}
void ANaveReab::Reabastecer() {

}
void ANaveReab::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}