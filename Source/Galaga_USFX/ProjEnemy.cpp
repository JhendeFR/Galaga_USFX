// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjEnemy.h"
#include "Galaga_USFXPawn.h"
#include "Galaga_USFXProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
// Sets default values
AProjEnemy::AProjEnemy()
{
	///Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	ProyecEnemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProyecEnemy->SetStaticMesh(ProjectileMeshAsset.Object);
	ProyecEnemy->SetupAttachment(RootComponent);
	SetActorEnableCollision(true);
	vel = 1000;
}
void AProjEnemy::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * vel * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}
void AProjEnemy::OnHit13(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	Destroy();
}
void AProjEnemy::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (Jugador) {
		Destroy();
		Jugador->SetVida(Jugador->GetVida() - 1);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Vida: ") + FString::FromInt(Jugador->GetVida()));
		if (Jugador->GetVida() <= 0) {
			Jugador->Destroy();
		}
	}
}
// Called when the game starts or when spawned
void AProjEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();

}

