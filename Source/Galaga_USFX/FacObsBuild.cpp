// Fill out your copyright notice in the Description page of Project Settings.


#include "FacObsBuild.h"
#include "ControlDirect.h"
#include "NavVel.h"
#include "NavArm.h"
#include "NavAll.h"
#include "PortaNavControl.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "EngineUtils.h"

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
    // Verificar primero si ya existe un Portanave en el mundo
    bool bExistePortanave = false;
    for (TActorIterator<APortaNavControl> It(World); It; ++It)
    {
        if (*It)
        {
            bExistePortanave = true;
            break;
        }
    }
    if (!bExistePortanave)
    {
        //UWorld* const World = GetWorld();
        Control = World->SpawnActor<AControlDirect>();
        int RandomNumber = FMath::RandRange(0, 2);
        APortaNavControl* Portanave = nullptr;
        switch (RandomNumber)
        {
        case 0:
        {
            ANavVel* vel = World->SpawnActor<ANavVel>();
            if (vel)
            {
                Portanave = Control->getNavControl(vel);
            }
            break;
        }
        case 1:
        {
            ANavArm* arm = World->SpawnActor<ANavArm>();
            if (arm)
            {
                Portanave = Control->getNavControl(arm);
            }
            break;
        }
        case 2:
        {
            ANavAll* all = World->SpawnActor<ANavAll>();
            if (all)
            {
                Portanave = Control->getNavControl(all);
            }
            break;
        }
        default:
            break;
        }
        if (Portanave) {
            FTimerHandle DestrucPortanave;
            World->GetTimerManager().SetTimer(DestrucPortanave, [this, Portanave]()
                {
                    if (Portanave)
                    {
                        Portanave->Destroy();
                    }
                    // Verificar la existencia de portanaves después de un pequeño retraso
                    FTimerHandle VerificarPortanave;
                    GetWorld()->GetTimerManager().SetTimer(VerificarPortanave, this, &AFacObsBuild::VerificarPortanaves, 0.1f, false);
                }, 5.0f, false);
        }
	}
}

void AFacObsBuild::VerificarPortanaves()
{
    UWorld* const World = GetWorld();
    bool bIsPortanave = false;
    for (TActorIterator<APortaNavControl> It(World); It; ++It)
    {
        if (*It)
        {
            bIsPortanave = true;
            break;
        }
    }
    if (!bIsPortanave)
    {
        GenPortanaves();
    }
}
