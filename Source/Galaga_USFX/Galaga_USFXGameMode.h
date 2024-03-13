// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

//class AEnemy; Por la misma razon de abstractcion a la clase Enemy.
//Declarar las clases que van a aparecer en el word.
class ACazaGen01;
class ACazaGen02;
class AEspiaGen01;
class AEspiaGen02;
class AReabGen01;
class AReabGen02;
class ATranspGen01;
class ATranspGen02;
class ANaveNodriza;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();
public:
	//AEnemy* Enemy01; por motivo de abstraccion.
	//Declarar las punteros de las funciones de las naves para apuntar objetos de la clase.
	ACazaGen01* CazaGen01;
	ACazaGen02* CazaGen02;
	AEspiaGen01* EspiaGen01;
	AEspiaGen02* EspiaGen02;
	AReabGen01* ReabGen01;
	AReabGen02* ReabGen02;
	ATranspGen01* TranspGen01;
	ATranspGen02* TranspGen02;
protected:
	virtual void BeginPlay() override;
};