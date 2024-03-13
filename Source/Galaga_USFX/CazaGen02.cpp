// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaGen02.h"

ACazaGen02::ACazaGen02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ACazaGen02::Mover() {

}
void ACazaGen02::Ataque() {

}
void ACazaGen02::Vida() {

}
void ACazaGen02::Bombardear() {

}
void ACazaGen02::Cargar_Sbomba() {

}