// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaGen01.h"
#include "ProjEnemy.h"
#include "Kismet/GameplayStatics.h"

ACazaGen01::ACazaGen01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel3.EnemyLevel3'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(1.5f, 1.5f, 2.5f));
	ActDisp = true;
	cadencia = 2.0f;
}
void ACazaGen01::Mover(float DeltaTime) { 
	if (Strategy) {
		Strategy->MovimientoLog(this, DeltaTime);
	}
}
void ACazaGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Ataque();
}

void ACazaGen01::ModAttack()
{
	FVector SpawnPLocation = GetActorLocation() + FVector(0.0f, 0.0f, 60.0f) + (GetActorForwardVector() * 1);
	UWorld* World = GetWorld();
	if (World)
	{
		AProjEnemy* NewProj1 = World->SpawnActor<AProjEnemy>(SpawnPLocation, FRotator::ZeroRotator);
		AProjEnemy* NewProj2 = World->SpawnActor<AProjEnemy>(SpawnPLocation, FRotator(0.0f, 45.0f, 0.0f));
		AProjEnemy* NewProj3 = World->SpawnActor<AProjEnemy>(SpawnPLocation, FRotator(0.0f, -45.0f, 0.0f));
	}
}
