// Fill out your copyright notice in the Description page of Project Settings.


#include "ControlDirect.h"



// Sets default values
AControlDirect::AControlDirect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void AControlDirect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AControlDirect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APortaNavControl* AControlDirect::getNavControl(INavControlInt* tipo)
{
	if (tipo)
	{
		tipo->BuildVel();
		tipo->BuildArm();
		return tipo->setNavControl();
	}
	return nullptr;
}