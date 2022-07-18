// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kapsule.h"
#include "KapsuleWormHole.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERS_API AKapsuleWormHole : public AKapsule
{
	GENERATED_BODY()

public:

	AKapsuleWormHole();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Generar() override;

	virtual void Tick(float DeltaTime) override;

};
