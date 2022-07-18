// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "EnemyProjectile.generated.h"

/**
 * 
 */
UCLASS()
class SPACEINVADERS_API AEnemyProjectile : public AProjectile
{
	GENERATED_BODY()
public:
	AEnemyProjectile();
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
