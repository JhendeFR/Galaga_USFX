// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomb.h"
#include "Galaga_USFXPawn.h"
#include "Galaga_USFXProjectile.h"

// Sets default values
ABomb::ABomb()
{
	//StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Implementamos el mesh del escudo.
	BombMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	BombMesh->SetupAttachment(RootComponent);
	RootComponent = BombMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));
	BombMesh->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(2.5f, 2.5f, 2.5f));

}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();
}

void ABomb::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * 250 * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}

void ABomb::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	// Verificar si el otro actor es un proyectil del jugador
	if (Other->IsA(AGalaga_USFXProjectile::StaticClass())) {
		// Si es un proyectil del jugador, no hacer nada y simplemente destruir este proyectil
		Destroy();
		return;
	}
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (Jugador) {
		Destroy();
		Jugador->SetVida(Jugador->GetVida() - 5);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Vida: ") + FString::FromInt(Jugador->GetVida()));
		if (Jugador->GetVida() <= 0) {
			Jugador->Destroy();
		}
	}
	Destroy();
}

