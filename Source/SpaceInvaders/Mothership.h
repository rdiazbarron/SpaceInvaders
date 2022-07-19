//Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemySpaceship2.h"
#include "Mothership.generated.h"


UCLASS()
class SPACEINVADERS_API AMothership : public APawn
{
	GENERATED_BODY()

private:
	//static AEnemySpaceship2* UniqueMothership;
	//Se implementa en gamemodebase
	
	AMothership();

public:

	UPROPERTY(EditAnywhere, Category = "Mothership Mesh")
		class UStaticMeshComponent* MothershipMeshComponent;

	void FireShot();

	void ShotTimerExpired();

	FTimerHandle TimerHandle_ShotTimerExpired;

	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset1;//
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset2;//
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset3;//
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset4;//
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset5;//

	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
		float FireRate;//

	UPROPERTY()
		class URandomMovementComponent* RandMove;

	/*UPROPERTY(EditAnywhere, Category = "Component")
		TSubclassOf<class AProjectile> Projectile_BP;*/

	UPROPERTY(EditAnywhere)
		USceneComponent* BulletSpawnPoint;

	UPROPERTY(EditAnywhere, Category = "Component")
		class UProjectileMovementComponent* ProjectileMove;

	uint32 bCanFire : 1;

	float NextSpawnCoolDown = 4.0f;//esto maneja el tiempo de refresco de disparo

	float SpawnCoolDown = 0.0f;

	float MaxShootCoolDown = 5.0f;

	float ShootCoolDown = 0.0f;

	int TimeElapsed;

	/*UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float MoveSpeed;*/
	
	//FVector MoveDirection;

	
protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

