// Fill out your copyright notice in the Description page of Project Settings.


#include "ReabGen01.h"

AReabGen01::AReabGen01() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel4.EnemyLevel4'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
    SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
}
void AReabGen01::Mover(float DeltaTime) {
    if (Strategy) {
        Strategy->MovimientoLog(this, DeltaTime);
    }
}
void AReabGen01::Vida() {

}
void AReabGen01::Reabastecer() {

}
void AReabGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}