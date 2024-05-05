// Fill out your copyright notice in the Description page of Project Settings.


#include "PortaNavControl.h"

// Sets default values
APortaNavControl::APortaNavControl()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APortaNavControl::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortaNavControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

