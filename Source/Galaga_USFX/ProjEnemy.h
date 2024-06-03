// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjEnemy.generated.h"

UCLASS()
class GALAGA_USFX_API AProjEnemy : public AActor
{
	GENERATED_BODY()
private:
	// Sets default values for this actor's properties
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProyecEnemy;
	float vel;
public:	
	// Sets default values for this actor's properties
	AProjEnemy();
public:
	//metodos accesores
	FORCEINLINE float GetVelocidad() const { return vel; }

	FORCEINLINE void SetVelocidad(float _vel) { vel = _vel; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Mover();
	UFUNCTION()
	void OnHit13(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	void FuncionDeManejoDeColision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};
