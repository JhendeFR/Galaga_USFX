// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaGen02.h"
#include "ProjEnemy.h"
#include "Kismet/GameplayStatics.h"

AEspiaGen02::AEspiaGen02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel5.EnemyLevel5'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(1.5f, 1.5f, 2.5f));
	ActDisp = true;
	cadencia = 2.0f;
}
void AEspiaGen02::Mover(float DeltaTime) {
	if (Strategy) {
		Strategy->MovimientoLog(this, DeltaTime);
	}
}
void AEspiaGen02::Ocultar() {
	SetActorHiddenInGame(true);
}
void AEspiaGen02::Velocidadplus() {
	velocidad = 3.5f;
}
void AEspiaGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AEspiaGen02::ModAttack()
{
	FVector SpawnPLocation = GetActorLocation() + FVector(0.0f, 0.0f, 60.0f) + (GetActorForwardVector() * 1);
	UWorld* World = GetWorld();
	if (World)
	{
		AProjEnemy* NewProj = World->SpawnActor<AProjEnemy>(SpawnPLocation, FRotator::ZeroRotator);
	}
}
