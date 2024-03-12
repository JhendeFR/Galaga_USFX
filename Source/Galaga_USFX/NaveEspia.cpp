// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspia.h"

ANaveEspia::ANaveEspia() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveEspia::Mover() {

}
void ANaveEspia::Vida() {

}
void ANaveEspia::Ataque() {

}
void ANaveEspia::Ocultar() {

}