// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Spaceship.h"
#include "Str_EnemyStrategy.h"
#include "RandomMovementComponent.h"
#include "EnemySpaceship2.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERS_API AEnemySpaceship2 : public ASpaceship
{
	GENERATED_BODY()

public:


	AEnemySpaceship2();

	IStr_EnemyStrategy* EnemyStrategy;

	UPROPERTY(EditAnywhere)
		URandomMovementComponent* MovimientoEnemigo1;

	void SetMovimiento(URandomMovementComponent* _RandomMovementComponent) {
		MovimientoEnemigo1 = _RandomMovementComponent;
	}

	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

	void FireShot();

	void ShotTimerExpired();

	void ExploteAndDestroy();
	//Patron strategy

	void AlterManeuvers(IStr_EnemyStrategy* myBattleStrategy);



	UPROPERTY(EditAnywhere, Category = "Component")
		UParticleSystem* ShipExplosionEnemy; // para la explosion

	FTimerHandle TimerHandle_ShotTimerExpired;
	/* Fire a shot in the specified direction */
	int InitialLifeSpan;

	uint32 bCanFire : 1;

	float NextSpawnCoolDown = 2.0f;

	float SpawnCoolDown = 0.0f;

	bool flag = true;

	int bulletcounter = 0;

	int TimeElapsed;
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;//

	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
		float FireRate;//

	//UPROPERTY()
	//	class URandomMovementComponent* RandMove;

	/*UPROPERTY(EditAnywhere, Category = "Component")
		TSubclassOf<class AProjectile> Projectile_BP;*/

	UPROPERTY(EditAnywhere)
		USceneComponent* BulletSpawnPoint;

	UPROPERTY(EditAnywhere, Category = "Component")
		class UProjectileMovementComponent* ProjectileMove;

	 float MaxShootCoolDown = 5.0f;
	float ShootCoolDown = 0.0f;


	
};
