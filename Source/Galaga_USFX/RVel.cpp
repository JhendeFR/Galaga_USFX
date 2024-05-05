// Fill out your copyright notice in the Description page of Project Settings.


#include "RVel.h"

// Sets default values
ARVel::ARVel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RVel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	RVel->SetupAttachment(RootComponent);
	RootComponent = RVel;
	RVel->SetStaticMesh(ShipMesh.Object);
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

