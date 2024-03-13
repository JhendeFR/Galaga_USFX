// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaGen01.h"

AEspiaGen01::AEspiaGen01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AEspiaGen01::Mover() {

}
void AEspiaGen01::Vida() {

}
void AEspiaGen01::Ataque() {

}
void AEspiaGen01::Ocultar() {

}
void AEspiaGen01::Cadenciaplus() {

}