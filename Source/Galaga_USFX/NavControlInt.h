// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PortaNavControl.h"
#include "NavControlInt.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNavControlInt : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API INavControlInt
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildVel() = 0;
	virtual void BuildArm() = 0;
	virtual APortaNavControl* setNavControl()=0;
};
