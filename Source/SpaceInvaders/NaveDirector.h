// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NaveEnemigaBuilder.h"
#include "NaveEnemigaProductoBase.h"
#include "NaveDirector.generated.h"

UCLASS()
class SPACEINVADERS_API ANaveDirector : public APawn
{
	GENERATED_BODY()

public:
	
	// Sets default values for this pawn's properties
	ANaveDirector();

	

private:
	INaveEnemigaBuilder* NaveEnemigaBuilder;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BuildNaveEnemiga();

	void SetNaveEnemigaBuilder(AActor* Builder);

	class ANaveEnemigaProductoBase* getNaveEnemiga();	


	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
