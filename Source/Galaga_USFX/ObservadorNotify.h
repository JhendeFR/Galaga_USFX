// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObservadorNotify.generated.h"
class IObserver;
UCLASS()
class GALAGA_USFX_API AObservadorNotify : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObservadorNotify();//En teoria notifica los cambios del sujeto a los observadores.

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(VisibleAnywhere, Category = "Publicador Observer")
	TArray<AActor*> Observadores;

	class IObserver* IObservador;
public:
	virtual void AgregarObserver(AActor* _Observador);
	virtual void QuitarObserver(AActor* _Observador);
	virtual void Notificar();
};
