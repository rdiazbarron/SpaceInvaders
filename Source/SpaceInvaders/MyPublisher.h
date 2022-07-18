// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Pawn.h"
////#include "MySubscribers.h"
//#include "MyPublisher.generated.h"
//
//UCLASS()
//class SPACEINVADERS_API AMyPublisher : public APawn
//{
//	GENERATED_BODY()
//
//public:
//	// Sets default values for this pawn's properties
//	AMyPublisher();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	// Called to bind functionality to input
//	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
//
////private:
////	//Los suscriptores de este Publisher
////	UPROPERTY()
////		TArray<APawn*> Subscribers = TArray<APawn*>();
//public:
//	//Agregar el suscriptor aprobado a la lista
//	virtual void Subscribe(APawn* Subscriber);
//
//	//Eliminar el suscriptor aprobado de la lista
//	virtual void UnSubscribe(APawn* SubscriberToRemove);
//
//	//Notificar a todos los Suscriptores que algo ha cambiado
//	virtual void NotifySubscribers();
//};
