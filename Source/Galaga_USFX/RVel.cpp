// Fill out your copyright notice in the Description page of Project Settings.


#include "RVel.h"

// Sets default values
ARVel::ARVel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RVel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Speed.Speed'"));
	RVel->SetupAttachment(RootComponent);
	RootComponent = RVel;
	RVel->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(4.0f, 4.0f, 4.0f));
}

// Called when the game starts or when spawned
void ARVel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARVel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

