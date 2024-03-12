// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

//class AEnemy; Por la misma razon de abstractcion a la clase Enemy.
//Declarar las clases que van a aparecer en el word.
class ANaveCaza;
class ANaveEspia;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();
public:
	//AEnemy* Enemy01; por motivo de abstraccion.
	//Declarar las punteros de las funciones de las naves para apuntar objetos de la clase.
	ANaveCaza* NaveCaza01;
	ANaveEspia* NaveEspia01;
protected:
	virtual void BeginPlay() override;
};