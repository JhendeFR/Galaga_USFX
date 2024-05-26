// Fill out your copyright notice in the Description page of Project Settings.


#include "RAll.h"

// Sets default values
ARAll::ARAll()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RAll = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	RAll->SetupAttachment(RootComponent);
	RootComponent = RAll;
	RAll->SetStaticMesh(ShipMesh.Object);
}

// Called when the game starts or when spawned
void ARAll::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARAll::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

