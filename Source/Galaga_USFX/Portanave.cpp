// Fill out your copyright notice in the Description page of Project Settings.


#include "Portanave.h"

// Sets default values
APortanave::APortanave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Portanave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/CaveWall.CaveWall'"));
	Portanave->SetupAttachment(RootComponent);
	RootComponent = Portanave;
	Portanave->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
	SetActorEnableCollision(false);
}

// Called when the game starts or when spawned
void APortanave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortanave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}