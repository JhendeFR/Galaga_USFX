// Fill out your copyright notice in the Description page of Project Settings.


#include "NavEstrategica.h"
#include "Strategy.h"
#include "StrEstandar.h"
#include "StrIntimidacion.h"
#include "StrDefensiva.h"
#include "ProjEnemy.h"

ANavEstrategica::ANavEstrategica()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza5.Nodriza5'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorScale3D(FVector(0.50f, 0.50f, 0.50f));
	cadencia = 2.0f;
	ActDisp = true;
}

void ANavEstrategica::BeginPlay()
{
	Super::BeginPlay();
}

void ANavEstrategica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	deltatime = DeltaTime;
	Ataque();
}

void ANavEstrategica::Ataque()
{
	FVector SpawnPLocation = GetActorLocation() + FVector(0.0f, 0.0f, 60.0f) + (GetActorForwardVector() * 1);

	if (ActDisp == true)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			AProjEnemy* NewProj = World->SpawnActor<AProjEnemy>(SpawnPLocation, FRotator::ZeroRotator);
		}
		//Activa el temporizador para el siguiente disparo.
		World->GetTimerManager().SetTimer(Timer_fin, this, &AEnemy::TReset_Proj, cadencia);
		ActDisp = false; //Desactiva el disparo para que no se dispare continuamente.
	}
}

void ANavEstrategica::CambiarEstrategia(AActor* _Estrategia)
{
	EstrategiaActual = Cast<IStrategy>(_Estrategia);
}

void ANavEstrategica::AplicarEstrategia(float DeltaTime)
{
	EstrategiaActual->MovimientoLog(this,DeltaTime);
}

void ANavEstrategica::EstrategiaEstandar()
{
	EstrategiaEst = GetWorld()->SpawnActor<AStrEstandar>(AStrEstandar::StaticClass());
	CambiarEstrategia(EstrategiaEst);
	AplicarEstrategia(deltatime);
	EstrategiaEst->Destroy();
}

void ANavEstrategica::EstrategiaIntimidante()
{
	EstrategiaInt = GetWorld()->SpawnActor<AStrIntimidacion>(AStrIntimidacion::StaticClass());
	CambiarEstrategia(EstrategiaInt);
	AplicarEstrategia(deltatime);
	EstrategiaInt->Destroy();
}

void ANavEstrategica::EstrategiaDefensiva()
{
	EstrategiaDef = GetWorld()->SpawnActor<AStrDefensiva>(AStrDefensiva::StaticClass());
	CambiarEstrategia(EstrategiaDef);
	AplicarEstrategia(deltatime);
	EstrategiaDef->Destroy();
}
