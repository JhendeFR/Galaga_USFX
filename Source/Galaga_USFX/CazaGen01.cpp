// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaGen01.h"

ACazaGen01::ACazaGen01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ACazaGen01::Mover() {

}
void ACazaGen01::Ataque() {

}
void ACazaGen01::Vida() {

}
void ACazaGen01::Bombardear() {

}
void ACazaGen01::Escudo() {

}