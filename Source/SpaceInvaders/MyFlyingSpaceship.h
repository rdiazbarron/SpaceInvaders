// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Spaceship.h"
#include "InventoryComponent2.h"
#include "Kapsule.h"
#include "MySubscribers.h"
#include "MyFlyingSpaceship.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERS_API AMyFlyingSpaceship : public ASpaceship
{
	GENERATED_BODY()
public:

	AMyFlyingSpaceship();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	void Fire();
	
	void FireShot(FVector FireDirection);

	

public: //Properties

	float ValueShoot=0;

	bool powerfullFlag;

	int FiestaTime;

	FRotator Rotation2;

	FVector Location2;

	//UFUNCTION()
	FVector GunOffset2;

	UPROPERTY(EditAnywhere, Category = "Component")
		UParticleSystem* ShipExplosionPlayer;

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;

	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;

	UPROPERTY()
		UInventoryComponent2* MyShipInventory;// creo una variable puntero array para mi nave

public: //Methods

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	void PowerfullGunExpired();

	void Explode();

	void TakeItem(AKapsule* InventoryItem);
	
	bool valueMovement;

	float MaxVelocity;

	virtual void NotifyHit(class UPrimitiveComponent* MyComp,
		AActor* Other, class UPrimitiveComponent* OtherComp, bool
		bSelfMoved, FVector HitLocation, FVector HitNormal, FVector
		NormalImpulse, const FHitResult& Hit) override;


	TMap<FString, int32> MyItems = TMap<FString, int32>();

public:

	FString Accion="uno";
	int var = 15;
public:

	UPROPERTY()
		TArray<APawn*> Subscribers = TArray<APawn*>();
public:
	uint32 bCanFire : 1;

	FTimerHandle TimerHandle_ShotTimerExpired;

	FTimerHandle PowerfullGunTimer;

	float FireForwardValue;
	
	float FireRightValue;


public:

	//Add the pased Subscriber to the list
	virtual void Subscribe(APawn* Subscriber);
	//Remove the passed Subscriber from the list
	virtual void UnSubscribe(APawn* SubscriberToRemove);
	//Notify all the Subscribers that something has changed
	virtual void NotifySubscribers();

	void CambiarAccion();
	//Establecer la hora de esta Torre del Reloj
	void setCambiarAccion(FString miAccion);
	FORCEINLINE FString GetAccion() { return Accion; };
	
};
