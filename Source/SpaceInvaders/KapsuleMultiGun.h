// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kapsule.h"
#include "KapsuleMultiGun.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERS_API AKapsuleMultiGun : public AKapsule
{
	GENERATED_BODY()
public:
	AKapsuleMultiGun();
protected:

	virtual void BeginPlay() override;

public:
	virtual void Generar() override;

	virtual void Tick(float DeltaTime) override;
};
