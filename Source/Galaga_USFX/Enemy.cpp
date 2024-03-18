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

// Esta funcion se llama al comienzo del juego y es donde se colocan las inicializaciones y configuraciones iniciales del juego.
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Esta funcion permite comprobar cada frame el estado actual del objeto.
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

