// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoM.h"

// Sets default values
AEscudoM::AEscudoM()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//Implementamos el mesh del escudo.
	ShieldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	ShieldMesh->SetupAttachment(RootComponent);
	RootComponent = ShieldMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	ShieldMesh->SetStaticMesh(ShipMesh.Object);
}
void AEscudoM::EnableShield()
{
}
// Called when the game starts or when spawned
void AEscudoM::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudoM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

