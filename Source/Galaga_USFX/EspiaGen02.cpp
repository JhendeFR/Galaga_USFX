// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaGen02.h"

AEspiaGen02::AEspiaGen02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AEspiaGen02::Mover() {

}
void AEspiaGen02::Vida() {

}
void AEspiaGen02::Ataque() {

}
void AEspiaGen02::Ocultar() {

}
void AEspiaGen02::Velocidadplus() {

}