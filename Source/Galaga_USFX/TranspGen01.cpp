// Fill out your copyright notice in the Description page of Project Settings.


#include "TranspGen01.h"

ATranspGen01::ATranspGen01() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ATranspGen01::Mover() {

}
void ATranspGen01::Vida() {

}
void ATranspGen01::Descargar() {

}