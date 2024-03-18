// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveCaza.h"
#include "CazaGen01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACazaGen01 : public ANaveCaza
{
	GENERATED_BODY()
private:
	float tiempo_escudo;
public:
	ACazaGen01();
	FORCEINLINE float SetTiempo_escudo() const { return tiempo_escudo; }
	FORCEINLINE void GetTiempo_escudo(float _tiempo_escudo) { tiempo_escudo = _tiempo_escudo; }
protected:
	//Se le pondra override ? XD.
	virtual void Mover();
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();
	virtual void Escudo();
};
