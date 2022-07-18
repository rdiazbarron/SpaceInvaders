// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Projectile.h"
#include "NaveEnemigaBuilder.h"
#include "NaveEnemigaEspecializada.generated.h"


UCLASS()
class SPACEINVADERS_API ANaveEnemigaEspecializada : public APawn, public INaveEnemigaBuilder
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANaveEnemigaEspecializada();

	UPROPERTY(EditAnywhere, Category ="Artilugios")
	UStaticMeshComponent* MeshAsignado;

	UPROPERTY(EditAnywhere, Category = "Artilugios")
		USceneComponent* PuntoBala;

	UPROPERTY(EditAnywhere, Category = "Artilugios")
		URandomMovementComponent* MovimientoEnemigo;
private:

	UPROPERTY(EditAnywhere, Category = "nave enemiga patron builder")
	ANaveEnemigaProductoBase* NaveProductoBase;
	
public:	


	//UPROPERTY(EditAnywhere, Category = "Mothership Mesh")
	//	class UStaticMeshComponent* EspecializadaMeshComponent;

	//UPROPERTY()
	//	class URandomMovementComponent* RandMove;

	//UPROPERTY(EditAnywhere)
	//	USceneComponent* BulletSpawnPoint;

	////UPROPERTY(EditAnywhere, Category = "Component")
	//	class UProjectileMovementComponent* ProjectileMove;

	float MaxVelocity;
	FVector DistanceShoot;
	float TimeToSpawnShoot;
	float ShootTime;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BuildSistemaEstructural() override;
	virtual void BuildSistemaAtaque() override;
	virtual void BuildSistemaMovimiento() override;
	virtual class ANaveEnemigaProductoBase* getNaveEnemigaProductoBase() override;
};
