// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaGen01.h"
#include "ProjEnemy.h"
#include "Kismet/GameplayStatics.h"

AEspiaGen01::AEspiaGen01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel3.EnemyLevel3'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	ActDisp = true;
	cadencia = 2.0f;
}
void AEspiaGen01::Mover(float DeltaTime) {
	if (Strategy) {
		Strategy->MovimientoLog(this, DeltaTime);
	}
}
void AEspiaGen01::Vida() {

}
void AEspiaGen01::Ataque() {
	//Posicion de spawn del proyectil.
	FVector SpawnPLocation = GetActorLocation() + (GetActorForwardVector() * 1);

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
void AEspiaGen01::Ocultar() {

}
void AEspiaGen01::Cadenciaplus() {

}
void AEspiaGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}