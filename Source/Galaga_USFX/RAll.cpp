// Fill out your copyright notice in the Description page of Project Settings.


#include "RAll.h"

// Sets default values
ARAll::ARAll()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RAll = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/CapsulePass.CapsulePass'"));
	RAll->SetupAttachment(RootComponent);
	RootComponent = RAll;
	RAll->SetStaticMesh(ShipMesh.Object);
	SetActorRelativeScale3D(FVector(4.0f, 4.0f, 4.0f));
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

