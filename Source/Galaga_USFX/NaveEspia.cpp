// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspia.h"
#include "ProjEnemy.h"
#include "Kismet/GameplayStatics.h"

ANaveEspia::ANaveEspia() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorScale3D(FVector(3.0f,3.0f,3.0f));
	cadencia = 2.0f;
	ActDisp = true;
}
void ANaveEspia::Mover(float DeltaTime) {
	if (Strategy) {
		Strategy->MovimientoLog(this, DeltaTime);
	}
}

void ANaveEspia::Ocultar() {

}
void ANaveEspia::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEspia::ModAttack()
{
	FVector SpawnPLocation = GetActorLocation() + FVector(0.0f, 0.0f, 60.0f) + (GetActorForwardVector() * 1);
	UWorld* World = GetWorld();
	if (World)
	{
		AProjEnemy* NewProj = World->SpawnActor<AProjEnemy>(SpawnPLocation, FRotator::ZeroRotator);
	}
}
