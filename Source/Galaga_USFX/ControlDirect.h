// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavControlInt.h"
#include "PortaNavControl.h"
#include "ControlDirect.generated.h"

UCLASS()
class GALAGA_USFX_API AControlDirect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControlDirect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	APortaNavControl* getNavControl(INavControlInt* tipo);
};
