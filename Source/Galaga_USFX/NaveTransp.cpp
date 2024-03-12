// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTransp.h"

ANaveTransp::ANaveTransp() {
    // Inicializar la malla de la nave caza
    // Por ejemplo:
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveTransp::Mover() {

}
void ANaveTransp::Vida() {

}
void ANaveTransp::Ataque() {

}
void ANaveTransp::Descargar() {

}