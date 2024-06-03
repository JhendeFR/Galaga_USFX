// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObservadorNotify.h"
#include "UObject/Interface.h"
#include "Observer.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UObserver : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API IObserver
{
	GENERATED_BODY()
	//En teroia es la interfaz que noficara a los observadores
public:
	virtual void Actualizar(AObservadorNotify* _Publicador) = 0;
};
