// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneratorKapsule1.h"
#include "GeneratorKapsuleConcrete1.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERS_API AGeneratorKapsuleConcrete1 : public AGeneratorKapsule1
{
	GENERATED_BODY()

public:

	virtual AKapsule* FabricarCapsula(FString NombreTipoCapsula) override;
	
};
