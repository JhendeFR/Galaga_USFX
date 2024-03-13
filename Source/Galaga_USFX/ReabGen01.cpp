// Fill out your copyright notice in the Description page of Project Settings.


#include "ReabGen01.h"

AReabGen01::AReabGen01() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AReabGen01::Mover() {

}
void AReabGen01::Vida() {

}
void AReabGen01::Reabastecer() {

}