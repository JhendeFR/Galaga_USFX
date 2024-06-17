// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "StrIntimidacion.h"

ANaveNodriza::ANaveNodriza() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza5.Nodriza5'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
	SetActorScale3D(FVector(0.50f, 0.50f, 0.50f));
	cadencia = 2.0f;
	ActDisp = true;
}
void ANaveNodriza::Mover(float DeltaTime) {
	if (Strategy) {
		Strategy->MovimientoLog(this, DeltaTime);
	}
}
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();
}
void ANaveNodriza::Vida() {

}
void ANaveNodriza::Bombardear() {

}
void ANaveNodriza::Ocultar() {

}
void ANaveNodriza::Descargar() {

}
void ANaveNodriza::Escudo() {

}
void ANaveNodriza::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveNodriza::SetNavenodriza(AGalaga_USFXPawn* _Pawn)
{
	if (!_Pawn) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "No se hay un jugador que hiciste!!!");
	}
	Pawn = _Pawn;
	Pawn->subpawn(this);
}

void ANaveNodriza::Actualizar(class AObservadorNotify* _Publicador)
{
	Publicador = _Publicador;

	estad = Pawn->GetEstadoActual();
	if (estad == "Normal") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Nave Nodriza: El jugador esta en estado normal");
	}
	if (estad == "Lento") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Nave Nodriza: El jugador esta en estado lento");
	}
	if (estad == "Invisible") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Nave Nodriza: El jugador esta en estado invisible");
	}
	if (estad == "Invencible") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Nave Nodriza: El jugador esta en estado invencible");
	}
}

void ANaveNodriza::ModAttack()
{
	FVector SpawnPLocation = GetActorLocation() + FVector(0.0f, 0.0f, 60.0f) + (GetActorForwardVector() * 1);
	UWorld* World = GetWorld();
	if (World)
	{
		AProjEnemy* NewProj = World->SpawnActor<AProjEnemy>(SpawnPLocation, FRotator::ZeroRotator);
	}
}
