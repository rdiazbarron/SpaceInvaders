// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveEnemigaProductoBase.h"
#include "NaveEnemigaBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNaveEnemigaBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SPACEINVADERS_API INaveEnemigaBuilder
{
	GENERATED_BODY()
private:

public:
	//ANaveEnemigaProductoBase* NaveEnemigaProducto;

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildSistemaEstructural() = 0;
	virtual void BuildSistemaAtaque() = 0;
	virtual void BuildSistemaMovimiento() = 0;

	virtual class ANaveEnemigaProductoBase* getNaveEnemigaProductoBase() = 0;

	/*virtual ANaveEnemigaProductoBase* GetNaveEnemiga() {
		return NaveEnemigaProducto;
	}*/
};
