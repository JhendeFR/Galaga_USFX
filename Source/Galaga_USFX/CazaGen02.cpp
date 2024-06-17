// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaGen02.h"
#include "ProjEnemy.h"
#include "Kismet/GameplayStatics.h"
#include "Bomb.h"

ACazaGen02::ACazaGen02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza1.Nodriza1'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(0.40f, 0.40f, 0.40f));
	ActDisp = true;
	cadencia = 2.0f;
	BombDist = 100.0f;
}
void ACazaGen02::Mover(float DeltaTime) {
	if (Strategy) {
		Strategy->MovimientoLog(this, DeltaTime);
	}
}

void ACazaGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Ataque();
	//Super_Bomba();
}
void ACazaGen02::BeginPlay() {
	Super::BeginPlay();
}

void ACazaGen02::ModAttack()
{
	FVector SpawnPLocation = GetActorLocation() + FVector(0.0f, 0.0f, 60.0f);
	UWorld* World = GetWorld();
	if (World)
	{
		// Central shot
		//World->SpawnActor<AProjEnemy>(SpawnPLocation + (GetActorForwardVector() * 1), FRotator::ZeroRotator);
		World->SpawnActor<ABomb>(ABomb::StaticClass(), SpawnPLocation + (GetActorForwardVector() * 1), FRotator::ZeroRotator);
	}
}
