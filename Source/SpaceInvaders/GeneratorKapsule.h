// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Kapsule.h"
#include "GeneratorKapsule.generated.h"

UCLASS()
class SPACEINVADERS_API AGeneratorKapsule : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGeneratorKapsule();

	virtual AKapsule* CreateKapsule(AKapsule NameTypeKapsule) PURE_VIRTUAL(AGeneratorKapsule::CreateKapsule, return nullptr;);

	AKapsule* GetKapsule(AKapsule Nombre);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
