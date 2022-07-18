// Fill out your copyright notice in the Description page of Project Settings.


#include "T_Publisher.h"

// Sets default values
AT_Publisher::AT_Publisher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AT_Publisher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AT_Publisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AT_Publisher::Subscribe(AActor* Subscriber)
{
	Subscribers.Add(Subscriber);

}

void AT_Publisher::UnSubscribe(AActor* SubscriberToRemove)
{
	Subscribers.Remove(SubscriberToRemove);
}

void AT_Publisher::NotifySubscribers()
{
	for (AActor* Actor : Subscribers)
	{
		//Cast each of them to a concrete Subscriber
		//los convierte de actores a subscriptores
		IT_Subscriber* Sub = Cast<IT_Subscriber>(Actor);
		if (Sub)
		{
			//Notify each of them that something has changed, so they can execute their own routine
				Sub->Update();
		}
	}

}

