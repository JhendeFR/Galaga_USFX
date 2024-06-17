// Fill out your copyright notice in the Description page of Project Settings.


#include "RVel.h"
#include "Galaga_USFXPawn.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values
ARVel::ARVel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RVel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Speed.Speed'"));
	RVel->SetupAttachment(RootComponent);
	RootComponent = RVel;
	RVel->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(4.0f, 4.0f, 4.0f));
}

// Called when the game starts or when spawned
void ARVel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARVel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARVel::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (Jugador) {
		Destroy();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Eres lento ;C");
		Jugador->Estados("Lento");
		Jugador->PawnLenteado();

		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [Jugador]() {
			Jugador->Estados("Normal");
			Jugador->PawnNormal();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Volviste a la normalidad");
			}, 6.0f, false);
	}
}

