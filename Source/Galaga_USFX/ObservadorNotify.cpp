// Fill out your copyright notice in the Description page of Project Settings.


#include "ObservadorNotify.h"
#include "Observer.h"

// Sets default values
AObservadorNotify::AObservadorNotify()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Observadores = TArray<AActor*>();
}

// Called when the game starts or when spawned
void AObservadorNotify::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObservadorNotify::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AObservadorNotify::AgregarObserver(AActor* _Observador)
{
	Observadores.Add(_Observador);
}

void AObservadorNotify::QuitarObserver(AActor* _Observador)
{
	Observadores.Remove(_Observador);
}

void AObservadorNotify::Notificar()
{
	//si algo pasa hay que notificar a los observadores.
	for (AActor* Obs : Observadores) {
		IObservador = Cast<IObserver>(Obs);
		if (IObservador) {
			IObservador->Actualizar(this);
		}
	}
}

