// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EstadosP.h"
#include "EstadoNormal.h"
#include "EstPawnLento.h"
#include "EstPawnInvisible.h"
#include "EstPawnInvencible.h"
#include "ObservadorNotify.h"
#include "FacObsBuild.h"
#include "GameFramework/Character.h"
#include "Galaga_USFXPawn.generated.h"


UCLASS(Blueprintable)
class AGalaga_USFXPawn : public APawn
{
	GENERATED_BODY()


	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
public:
	AGalaga_USFXPawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
public:
	//Con 'virtual' se indica que puede proporcionar su propia implementacion.
	//Se utiliza Overeride para poder remplazar la implementacion base.
	virtual void BeginPlay() override;
private:
	void GenEscudo();
	FTimerHandle DestruirBarrera;
	FTimerHandle TimerEsc;
public:
	void IncSpeed(float vel);
	FTimerHandle TimerSpeed;
	FTimerHandle TDestroy;
	void ResSpeed();
	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult&Hit) override;
public:
	void Estados(FString _Estados);
	IEstadosP* Estado;
	IEstadosP* EstadoNormal;
	IEstadosP* EstadoLento;
	IEstadosP* EstadoInvisible;
	IEstadosP* EstadoInvencible;
	//Funciones pa cambiar los estados.
	FORCEINLINE void SetEstado(IEstadosP* _Estado);

	void PawnNormal();
	void PawnLenteado();
	void PawnInvisibiliando();
	void PawnInvenciblepapidios();
private:
	FString EstadoActual;
	int vida;
public: 
	FORCEINLINE FString GetEstadoActual() { return EstadoActual; }
	FORCEINLINE int GetVida() { return vida; }
	FORCEINLINE void SetVida(int _vida) { vida = _vida; }
public:
	AObservadorNotify* Observador;
	void subpawn(class AActor* _sub);
protected:
	class AGalaga_USFXPawn* Jugador;
};