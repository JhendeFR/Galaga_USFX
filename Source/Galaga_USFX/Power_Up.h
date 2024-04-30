// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Power_Up.generated.h"

UCLASS(Abstract)
class GALAGA_USFX_API APower_Up : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Power;
public:	
	// Sets default values for this actor's properties
	APower_Up();
	
	virtual void ActPowerUp(class AGalaga_USFXPawn* pawn) PURE_VIRTUAL(APower_Up::ActPowerUP, );
	virtual void DesPowerUp(class AGalaga_USFXPawn* pawn) PURE_VIRTUAL(APower_Up::DesPowerUp, );
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
