// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCaza.h"
#include "ProjEnemy.h"
#include "Kismet/GameplayStatics.h"

ANaveCaza::ANaveCaza() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorScale3D(FVector(3.0f, 3.0f, 3.0f));
	cadencia = 2.0f; // Cadencia de disparo
	ActDisp = true;
}
void ANaveCaza::Mover(float DeltaTime) {
    if (Strategy) {
        Strategy->MovimientoLog(this, DeltaTime);
    }
}
void ANaveCaza::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
    Ataque();
}
void ANaveCaza::BeginPlay() {
	Super::BeginPlay();
}

void ANaveCaza::ModAttack()
{
	FVector SpawnPLocation = GetActorLocation() + FVector(0.0f, 0.0f, 60.0f) + (GetActorForwardVector() * 1);
	UWorld* World = GetWorld();
	if (World)
	{
		AProjEnemy* NewProj = World->SpawnActor<AProjEnemy>(SpawnPLocation, FRotator::ZeroRotator);
	}
}
