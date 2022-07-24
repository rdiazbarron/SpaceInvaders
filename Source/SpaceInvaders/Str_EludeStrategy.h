// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Str_EnemyStrategy.h"
#include "RandomMovementComponent.h"
#include "Str_EludeStrategy.generated.h"

//class AEnemySpaceship2;
UCLASS()
class SPACEINVADERS_API AStr_EludeStrategy : public AActor, public IStr_EnemyStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStr_EludeStrategy();

	UPROPERTY(EditAnywhere, Category = " Nave enemiga patron builder")
		URandomMovementComponent* MovimientoEnemigo;

	class AEnemySpaceship2* EnemigoSinEstrategia;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	void SetMovimiento(URandomMovementComponent* _RandomMovementComponent) {
		MovimientoEnemigo = _RandomMovementComponent;
	}
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void MovementStrategy() override;

};
