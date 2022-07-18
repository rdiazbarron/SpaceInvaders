// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "T_Subscriber.h"
#include "T_Changes.h"
#include "T_FreakyAllen.generated.h"

class AT_ClockTower;
UCLASS()
class SPACEINVADERS_API AT_FreakyAllen : public AActor, public IT_Subscriber, public IT_Changes
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AT_FreakyAllen();

private:
	//The Clock Tower of this Subscriber
	UPROPERTY()
		AT_ClockTower* ClockTower;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Called when this Subscriber is destroyed, it will unsubscribe this from the Clock Tower
	virtual void Destroyed() override;

public:

	//Called when the Plublisher changed its state, it will execute this Subscriber routine
	virtual void Update() override;
	//Execute this Subscriber routine
	virtual void Change();
	//Set the Clock Tower of this Subscriber
	void SetClockTower(AT_ClockTower* myClockTower);

};
