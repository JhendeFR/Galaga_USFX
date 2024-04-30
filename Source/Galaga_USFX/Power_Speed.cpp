// Fill out your copyright notice in the Description page of Project Settings.
#include "Power_Speed.h"
#include "Galaga_USFXPawn.h"

APower_Speed::APower_Speed()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	Power->SetStaticMesh(ShipMesh.Object);
}
void APower_Speed::ActPowerUp(AGalaga_USFXPawn* Player) {
	Player->IncSpeed(200.0f);
}
void APower_Speed::DesPowerUp(AGalaga_USFXPawn* Player) {
	Player->ResSpeed();
}
void APower_Speed::Movimiento() {
	 int vel = 100.0f;
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * vel * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}
// Called when the game starts or when spawned
void APower_Speed::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APower_Speed::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movimiento();
}