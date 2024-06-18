// Copyright Epic Games, Inc. All Rights Reserve

#include "Galaga_USFXProjectile.h"
#include "Enemy.h"
#include "NaveCaza.h"
#include "CazaGen01.h"
#include "CazaGen02.h"
#include "NaveEspia.h"
#include "EspiaGen01.h"
#include "EspiaGen02.h"
#include "NaveReab.h"
#include "ReabGen01.h"
#include "ReabGen02.h"
#include "NaveTransp.h"
#include "TranspGen01.h"
#include "TranspGen02.h"
#include "NaveNodriza.h"
#include "Bomb.h"
#include "ControlEscuadFacade.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "EngineUtils.h"

AGalaga_USFXProjectile::AGalaga_USFXProjectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGalaga_USFXProjectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AGalaga_USFXProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}

void AGalaga_USFXProjectile::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	if (Other->IsA(ABomb::StaticClass())) {
		// Si es un proyectil enemigo, no hacer nada y simplemente destruir este proyectil
		Destroy();
		return;
	}
	AControlEscuadFacade* Escuadrones = nullptr;
	for (TActorIterator<AControlEscuadFacade> It(GetWorld()); It; ++It)
	{
		Escuadrones = *It;
		break;
	}

	if (Escuadrones)
	{
		AEnemy* Enemy = Cast<AEnemy>(Other);
		if (Enemy)
		{
			Enemy->Destroy();
			Escuadrones->NaveDestruida(Enemy);
		}
	}
	Destroy();
}
