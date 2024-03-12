// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReab.h"

ANaveReab::ANaveReab() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveReab::Mover() {

}
void ANaveReab::Vida() {

}
void ANaveReab::Ataque() {

}
void ANaveReab::Reabastecer() {

}