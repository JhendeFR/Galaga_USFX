// Fill out your copyright notice in the Description page of Project Settings.


#include "RArm.h"

// Sets default values
ARArm::ARArm()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RArm = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	RArm->SetupAttachment(RootComponent);
	RootComponent = RArm;
	RArm->SetStaticMesh(ShipMesh.Object);
}

// Called when the game starts or when spawned
void ARArm::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARArm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

