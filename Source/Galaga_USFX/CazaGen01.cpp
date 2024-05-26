// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaGen01.h"
#include "ProjEnemy.h"
#include "Kismet/GameplayStatics.h"

ACazaGen01::ACazaGen01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	ActDisp = true;
	cadencia = 2.0f;
}
void ACazaGen01::Mover(float DeltaTime) { 
	velocidad = 2.0f;

	static float TiempoInicio = GetWorld()->GetTimeSeconds();
	float DesplazamientoHorizontal = FMath::Sin(GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;

	FVector NewLocation = GetActorLocation();
	NewLocation.Y += DesplazamientoHorizontal;

	SetActorLocation(NewLocation);
}
void ACazaGen01::Ataque() {
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
void ACazaGen01::Vida() {

}
void ACazaGen01::Bombardear() {

}
void ACazaGen01::Escudo() {

}
void ACazaGen01::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Ataque();
}