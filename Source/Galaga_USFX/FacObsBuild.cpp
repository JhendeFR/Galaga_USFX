// Fill out your copyright notice in the Description page of Project Settings.


#include "FacObsBuild.h"
#include "ControlDirect.h"
#include "NavVel.h"
#include "NavArm.h"
#include "NavAll.h"

// Sets default values
AFacObsBuild::AFacObsBuild()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFacObsBuild::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacObsBuild::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacObsBuild::GenPortanaves()
{
	UWorld* const World = GetWorld();
	Control = World->SpawnActor<AControlDirect>();
    int RandomNumber = FMath::RandRange(0, 2);

    switch (RandomNumber)
    {
    case 0:
    {
        ANavVel* a = World->SpawnActor<ANavVel>();
        if (a)
        {
            APortaNavControl* b = Control->getNavControl(a);
        }
        break;
    }
    case 1:
    {
        ANavArm* c = World->SpawnActor<ANavArm>();
        if (c)
        {
            APortaNavControl* d = Control->getNavControl(c);
        }
        break;
    }
    case 2:
    {
        ANavAll* e = World->SpawnActor<ANavAll>();
        if (e)
        {
            APortaNavControl* f = Control->getNavControl(e);
        }
        break;
    }
    default:
        break;
    }
}
