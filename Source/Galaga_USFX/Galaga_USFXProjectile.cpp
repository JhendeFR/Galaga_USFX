// Copyright Epic Games, Inc. All Rights Reserve

#include "Galaga_USFXProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

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
	/*ANaveCaza* navecaza = Cast<ANaveCaza>(Other);
	ACazaGen01* cazagen1 = Cast<ACazaGen01>(Other);
	ACazaGen02* cazagen2 = Cast<ACazaGen02>(Other);
	ANaveEspia* naveespia = Cast<ANaveEspia>(Other);
	AEspiaGen01* espiagen1 = Cast<AEspiaGen01>(Other);
	AEspiaGen02* espiagen2 = Cast<AEspiaGen02>(Other);
	ANaveReab* navereab = Cast<ANaveReab>(Other);
	AReabGen01* reabgen1 = Cast<AReabGen01>(Other);
	AReabGen02* reabgen2 = Cast<AReabGen02>(Other);
	ANaveTransp* navetransp = Cast<ANaveTransp>(Other);
	ATranspGen01* transpgen1 = Cast<ATranspGen01>(Other);
	ATranspGen02* transpgen2 = Cast<ATranspGen02>(Other);
	ANaveNodriza* nodriza = Cast<ANaveNodriza>(Other);
	if (navecaza != nullptr) {
		navecaza->Destroy();
	}
	if (cazagen1 != nullptr) {
		cazagen1->Destroy();
	}
	if (cazagen2 != nullptr) {
		cazagen2->Destroy();
	}
	if (naveespia != nullptr) {
		naveespia->Destroy();
	}
	if (espiagen1 != nullptr) {
		espiagen1->Destroy();
	}
	if (espiagen2 != nullptr) {
		espiagen2->Destroy();
	}
	if (navereab != nullptr) {
		navereab->Destroy();
	}
	if (reabgen1 != nullptr) {
		reabgen1->Destroy();
	}
	if (reabgen2 != nullptr) {
		reabgen2->Destroy();
	}
	if (navetransp != nullptr) {
		navetransp->Destroy();
	}
	if (transpgen1 != nullptr) {
		transpgen1->Destroy();
	}
	if (transpgen2 != nullptr) {
		transpgen2->Destroy();
	}
	if (nodriza != nullptr) {
		nodriza->Destroy();
	}*/
}
