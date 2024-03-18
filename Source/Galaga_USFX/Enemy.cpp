// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

// Iniciando una malla para la clase abstracta enemy.
AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	EnemyMesh->SetupAttachment(RootComponent);
	RootComponent = EnemyMesh;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime); Supuesta mente esto controla el tick frame de cada clase para el motor. (blablabla dijo el docemte molesto)

}

