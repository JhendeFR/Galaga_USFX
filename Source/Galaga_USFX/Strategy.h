// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "UObject/Interface.h"
#include "Strategy.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UStrategy : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API IStrategy
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void MovimientoLog(class AEnemy* NavEnemy, float DeltaTime) = 0;
};
