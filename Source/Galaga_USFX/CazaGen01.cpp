// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaGen01.h"

ACazaGen01::ACazaGen01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ACazaGen01::Mover(float DeltaTime) { 
	velocidad = 0.25;//Establecemos la velocidad ya heredada de la clase 'AEnemy' abstracta.
	//SetActorLoacation y GetActorLocation son metodos usador por UE para con Set obtener y con Get establecer la posicion de un objeto.
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}
void ACazaGen01::Ataque() {

}
void ACazaGen01::Vida() {

}
void ACazaGen01::Bombardear() {

}
void ACazaGen01::Escudo() {

}
void ACazaGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}