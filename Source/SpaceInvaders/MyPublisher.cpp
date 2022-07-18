 //Fill out your copyright notice in the Description page of Project Settings.


//#include "MyPublisher.h"
//
//// Sets default values
//AMyPublisher::AMyPublisher()
//{
// 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}
//
// //Called when the game starts or when spawned
//void AMyPublisher::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
////
//// Called every frame
//void AMyPublisher::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//// Called to bind functionality to input
//void AMyPublisher::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}
//
//void AMyPublisher::Subscribe(APawn* Subscriber)
//{
//	Subscribers.Add(Subscriber);
//}
//
//void AMyPublisher::UnSubscribe(APawn* SubscriberToRemove)
//{
//	Subscribers.Remove(SubscriberToRemove);
//
//}
//
//void AMyPublisher::NotifySubscribers()
//{
//	for (APawn* Actor : Subscribers)
//	{
//		//Cast each of them to a concrete Subscriber
//		IMySubscribers* Sub = Cast<IMySubscribers>(Actor);
//		if (Sub)
//		{
//			//Notify each of them that something has changed, so they can execute their own routine
//				Sub->Update(this);
//		}
//	}
//
//}
//
