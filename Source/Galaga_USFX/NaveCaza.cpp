// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"

ANaveCaza::ANaveCaza() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ANaveCaza::Mover() {

}
void ANaveCaza::Ataque() {

}
void ANaveCaza::Vida() {

}
void ANaveCaza::Bombardear() {

}