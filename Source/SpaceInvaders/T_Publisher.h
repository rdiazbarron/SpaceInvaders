// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "T_Subscriber.h"
#include "T_Publisher.generated.h"

UCLASS()
class SPACEINVADERS_API AT_Publisher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AT_Publisher();

private:
	//The Subscribers of this Publisher
	UPROPERTY()

		TArray<AActor*> Subscribers = TArray<AActor*>();
	//contenedor de subs, inicializamos en 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Add the pased Subscriber to the list
	virtual void Subscribe(AActor* Subscriber);
	//Remove the passed Subscriber from the list
	virtual void UnSubscribe(AActor* SubscriberToRemove);
	//Notify all the Subscribers that something has changed
	virtual void NotifySubscribers();
};
