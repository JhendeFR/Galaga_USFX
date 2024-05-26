// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXPawn.h"
#include "Galaga_USFXProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "EscudoM.h"
#include "Power_Up.h"
#include "Power_Speed.h"
#include "Power_Shield.h"
#include "ControlDirect.h"
#include "NavVel.h"
#include "NavArm.h"
#include "NavAll.h"
#include "PortaNavControl.h"
#include "Portanave.h"
#include "RVel.h"
#include "RArm.h"


const FName AGalaga_USFXPawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFXPawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFXPawn::FireForwardBinding("FireForward");
const FName AGalaga_USFXPawn::FireRightBinding("FireRight");

AGalaga_USFXPawn::AGalaga_USFXPawn()
{	

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;

	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm
	
	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
	//Escudo
}

void AGalaga_USFXPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void AGalaga_USFXPawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
}

void AGalaga_USFXPawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGalaga_USFXProjectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFXPawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}
void AGalaga_USFXPawn::ShotTimerExpired()
{
	bCanFire = true;
}
void AGalaga_USFXPawn::BeginPlay()
{
	Super::BeginPlay();
}

void AGalaga_USFXPawn::IncSpeed(float vel) {
		MoveSpeed = MoveSpeed + vel;
}

void AGalaga_USFXPawn::ResSpeed() {
	MoveSpeed = 1000.0f;
}

//Metodo que se llama cuando el objeto coliciona con otro objeto.
void AGalaga_USFXPawn::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	APower_Speed* speed = Cast<APower_Speed>(Other);
	if (speed != nullptr) {
		speed->ActPowerUp(this);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Power Up velocidad");
		GetWorld()->GetTimerManager().SetTimer(TimerSpeed, this, &AGalaga_USFXPawn::ResSpeed, 5.0f, false);
		FTimerDelegate TimerDel;
		TimerDel.BindLambda([speed]()
			{
				if (speed && speed->IsValidLowLevel())
				{
					speed->Destroy();
				}
			});
		GetWorld()->GetTimerManager().SetTimer(TDestroy, TimerDel, 1.0f, false);
	}
	APower_Shield* shield = Cast<APower_Shield>(Other);
	if (shield != nullptr) {
		//GetWorld()->GetTimerManager().SetTimer(TimerEsc, this, &AGalaga_USFXPawn::GenEscudo, 1.0f, false);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Trolleado pvto XDXDXDXDXDXD");
		FTimerDelegate TimerDel2;
		TimerDel2.BindLambda([shield]()
			{
				if (shield && shield->IsValidLowLevel())
				{
					shield->Destroy();
				}
			});
		GetWorld()->GetTimerManager().SetTimer(TimerEsc, TimerDel2, 0.1f, false);
	}
	ARVel* reabvel = Cast<ARVel>(Other);
	ARArm* reabarm = Cast<ARArm>(Other);
	APortanave* portanave = Cast<APortanave>(Other);
	if (reabvel != nullptr && reabarm != nullptr) {
		reabvel->Destroy();
		reabarm->Destroy();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "reabastecimiento de velocidad y municion");
	}
	if (reabvel != nullptr) {
		reabvel->Destroy();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "reabastecimiento de velocidad");
	}
	if (reabarm != nullptr) {
		reabarm->Destroy();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "reabastecimiento de municion");
	}
}

void AGalaga_USFXPawn::Estados(FString _Estados)
{
	if (_Estados.Equals("Normal")) {
		EstadoNormal = GetWorld()->SpawnActor<AEstadoNormal>(AEstadoNormal::StaticClass());
		EstadoNormal->SetPawn(this);
		SetEstado(EstadoNormal);
	}
	if (_Estados.Equals("Lento")) {
		EstadoLento = GetWorld()->SpawnActor<AEstPawnLento>(AEstPawnLento::StaticClass());
		EstadoLento->SetPawn(this);
		SetEstado(EstadoLento);
	}
	if (_Estados.Equals("Invisible")) {
		EstadoInvisible = GetWorld()->SpawnActor<AEstPawnInvisible>(AEstPawnInvisible::StaticClass());
		EstadoInvisible->SetPawn(this);
		SetEstado(EstadoInvisible);
	}
	if (_Estados.Equals("Invencible")) {
		EstadoInvencible = GetWorld()->SpawnActor<AEstPawnInvencible>(AEstPawnInvencible::StaticClass());
		EstadoInvencible->SetPawn(this);
		SetEstado(EstadoInvencible);
	}
}

void AGalaga_USFXPawn::SetEstado(IEstadosP* _Estado)
{
		Estado = _Estado;
}

void AGalaga_USFXPawn::PawnNormal()
{
	Estado->PawnNormal();
}

void AGalaga_USFXPawn::PawnLenteado()
{
	Estado->PawnLento();
}

void AGalaga_USFXPawn::PawnInvisibiliando()
{
	Estado->PawnInvisible();
}

void AGalaga_USFXPawn::PawnInvenciblepapidios()
{
	Estado->PawnInvencible();
}

IEstadosP* AGalaga_USFXPawn::N_ObtenerEstadoNormal()
{
	return EstadoNormal;
}

IEstadosP* AGalaga_USFXPawn::N_ObtenerEstadoLento()
{
	return EstadoLento;
}

IEstadosP* AGalaga_USFXPawn::N_ObtenerEstadoInvisible()
{
	return EstadoInvisible;
}

IEstadosP* AGalaga_USFXPawn::N_ObtenerEstadoInvencible()
{
	return EstadoInvencible;
}

IEstadosP* AGalaga_USFXPawn::N_ObtenerEstadoActual()
{
	/*if (Estado) {
		return "Estado Actual: " + Estado->ObtenerEstado();
	}
	else {
		return "No hay estado actual";
	}*/
}

void AGalaga_USFXPawn::GenEscudo() {
	//Posicion del escudo.
	FVector Location = GetActorLocation() + FVector(100.0f, 0.0f, 0.0f);
	FRotator Rotation = GetActorRotation();
	//Crear el escudo.
	AEscudoM* CrearEscudoM = GetWorld()->SpawnActor<AEscudoM>(AEscudoM::StaticClass(), Location, Rotation);
	if (CrearEscudoM != nullptr)
	{
		CrearEscudoM->SetActorLocation(Location);
		CrearEscudoM->SetActorRotation(Rotation);

		FTimerDelegate TimerDel;
		TimerDel.BindLambda([CrearEscudoM]()
			{
				if (CrearEscudoM && CrearEscudoM->IsValidLowLevel())
				{
					CrearEscudoM->Destroy();
				}
			});
		// Destruccion del actor despues de 5 segundos de aparecer
		GetWorld()->GetTimerManager().SetTimer(DestruirBarrera, TimerDel, 5.0f, false);
	}
}
