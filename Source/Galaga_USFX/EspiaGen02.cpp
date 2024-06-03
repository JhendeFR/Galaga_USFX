// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaGen02.h"
#include "ProjEnemy.h"
#include "Kismet/GameplayStatics.h"

AEspiaGen02::AEspiaGen02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza1.Nodriza1'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(0.40f, 0.40f, 0.40f));
	ActDisp = true;
	cadencia = 2.0f;
}
void AEspiaGen02::Mover(float DeltaTime) {
	if (Strategy) {
		Strategy->MovimientoLog(this, DeltaTime);
	}
}
void AEspiaGen02::Vida() {

}
void AEspiaGen02::Ataque() {
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
void AEspiaGen02::Ocultar() {

}
void AEspiaGen02::Velocidadplus() {

}
void AEspiaGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}