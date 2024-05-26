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
	velocidad = 2.0f;

	static float TiempoInicio = GetWorld()->GetTimeSeconds();
	float DesplazamientoHorizontal = FMath::Sin(GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;

	FVector NewLocation = GetActorLocation();
	NewLocation.Y += DesplazamientoHorizontal;

	SetActorLocation(NewLocation);
}
void ANaveEspia::Vida() {

}
void ANaveEspia::Ataque() {
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
void ANaveEspia::Ocultar() {

}
void ANaveEspia::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}