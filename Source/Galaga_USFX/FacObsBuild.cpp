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

	/*ANavVel* a = World->SpawnActor<ANavVel>();
	APortaNavControl* b = Control->getNavControl(a);*/

	ANavArm* c = World->SpawnActor<ANavArm>();
	APortaNavControl* d = Control->getNavControl(c);

	/*ANavAll* e = World->SpawnActor<ANavAll>();
	APortaNavControl* f = Control->getNavControl(e);*/
}
