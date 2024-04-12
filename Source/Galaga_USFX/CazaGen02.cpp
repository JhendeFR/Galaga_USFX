// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaGen02.h"
#include "Bomb.h"

ACazaGen02::ACazaGen02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	BombDist = 100.0f;
}
void ACazaGen02::Mover(float DeltaTime) {
    velocidad = 1.0f;

    static float TiempoInicio = GetWorld()->GetTimeSeconds();
    float DesplazamientoVertical = FMath::Sin(GetWorld()->GetTimeSeconds() - TiempoInicio) * velocidad;

    FVector NewLocation = GetActorLocation();
    NewLocation.Y += DesplazamientoVertical;

    SetActorLocation(NewLocation);
}
void ACazaGen02::Ataque() {

}
void ACazaGen02::Vida() {

}
void ACazaGen02::Bombardear() {

}
void ACazaGen02::Cargar_Sbomba() {

}
void ACazaGen02::Super_Bomba() {
	
	FVector SpawnEsc = GetActorLocation() + GetActorForwardVector() * BombDist;

	ABomb* Bomba = GetWorld()->SpawnActor<ABomb>(ABomb::StaticClass(), SpawnEsc, GetActorRotation());
	int aleNum= FMath::RandRange(0, 10);
	if (aleNum == 6) {
		GetWorld()->GetTimerManager().SetTimer(BombActivar, this, &ACazaGen02::Super_Bomba, 10.0f, true);
	}
	GetWorld()->GetTimerManager().SetTimer(BombDesactivar, [Bomba]()
		{
			if (Bomba)
			{
				Bomba->Destroy();
			}
		}, 6.0f, true);
}

void ACazaGen02::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
void ACazaGen02::BeginPlay() {
	Super::BeginPlay();
	Super_Bomba();
}