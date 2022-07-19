// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kapsule.h"
#include "GeneratorKapsule1.generated.h"

UCLASS()
class SPACEINVADERS_API AGeneratorKapsule1 : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AGeneratorKapsule1();

	virtual AKapsule* FabricarCapsula(FString NameTypeKapsule) PURE_VIRTUAL(AGeneratorKapsule::FabricarCapsula, return nullptr;);

	AKapsule* GetCapsula(FString TipoCapsula);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
