// Fill out your copyright notice in the Description page of Project Settings.


#include "TranspGen01.h"

ATranspGen01::ATranspGen01() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel4.EnemyLevel4'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
    SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
}
void ATranspGen01::Mover(float DeltaTime) {
    if (Strategy) {
        Strategy->MovimientoLog(this, DeltaTime);
    }
}
void ATranspGen01::Vida() {

}
void ATranspGen01::Descargar() {

}
void ATranspGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}