// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomb.h"

// Sets default values
ABomb::ABomb()
{
	//StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Implementamos el mesh del escudo.
	BombMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	BombMesh->SetupAttachment(RootComponent);
	RootComponent = BombMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	BombMesh->SetStaticMesh(ShipMesh.Object);


}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

