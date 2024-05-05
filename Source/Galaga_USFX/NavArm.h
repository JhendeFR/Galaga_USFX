// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavControlInt.h"
#include "PortaNavControl.h"
#include "Portanave.h"
#include "RArm.h"
#include "NavArm.generated.h"

UCLASS()
class GALAGA_USFX_API ANavArm : public AActor, public INavControlInt
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANavArm();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void BuildVel() override;
	virtual void BuildArm() override;
	virtual APortaNavControl* setNavControl();
private:
	APortaNavControl* nave;
};
