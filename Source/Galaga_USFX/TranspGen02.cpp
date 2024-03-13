// Fill out your copyright notice in the Description page of Project Settings.


#include "TranspGen02.h"

ATranspGen02::ATranspGen02() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ATranspGen02::Mover() {

}
void ATranspGen02::Vida() {

}
void ATranspGen02::Descargar() {

}