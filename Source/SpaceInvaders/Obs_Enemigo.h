// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MySubscribers.h"
#include "Obs_Tareas.h"
#include "Obs_Enemigo.generated.h"

class AMyFlyingSpaceship;

UCLASS()
class SPACEINVADERS_API AObs_Enemigo : public APawn, public IMySubscribers, public IObs_Tareas
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AObs_Enemigo();

	// mesh de la nave enemiga
	UPROPERTY(EditAnywhere, Category = "Nave Enemiga")
		UStaticMeshComponent* ShipMeshEnemy; // la malla o cascara

	float MaxVelocity;
	FVector DistanceShoot;
	float TimeToSpawnShoot;
	float ShootTime;
	FString Accion;
private:

	UPROPERTY()
		class AMyFlyingSpaceship* ControlTower;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Llamado cuando se destruye este Suscriptor, lo cancelará de la Torre del Reloj
	virtual void Destroyed() override;

	//Llamado cuando el Plublisher cambió su estado, ejecutará esta rutina de Suscriptor
	virtual void Update(class AMyFlyingSpaceship* AMyFlyingSpaceshipPublisher) override;

	//Ejecutar esta rutina de Suscriptor
	virtual void Tareas();

	//Establecer la torre del reloj de este suscriptor
	void setTorreControl(AMyFlyingSpaceship* _ControlTower);
};
