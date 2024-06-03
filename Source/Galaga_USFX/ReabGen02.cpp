// Fill out your copyright notice in the Description page of Project Settings.


#include "ReabGen02.h"

AReabGen02::AReabGen02() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
    SetActorRelativeScale3D(FVector(0.40f, 0.40f, 0.40f));
}
void AReabGen02::Mover(float DeltaTime) {
    if (Strategy) {
        Strategy->MovimientoLog(this, DeltaTime);
    }
}
void AReabGen02::Vida() {

}
void AReabGen02::Reabastecer() {

}
void AReabGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}