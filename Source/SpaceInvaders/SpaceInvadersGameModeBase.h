//Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnemySpaceship2.h"

#include "Mothership.h"

#include "NaveEnemigaEspecializada.h"
#include "NaveDirector.h"

#include "GeneratorKapsule.h"
#include "GeneratorKapsuleConcrete1.h"
#include "SpaceInvadersGameModeBase.generated.h"

/**
 * 
 */


UCLASS()
class SPACEINVADERS_API ASpaceInvadersGameModeBase : public AGameModeBase
{

	GENERATED_BODY()

public:

	ASpaceInvadersGameModeBase();

	//PATRON SINGLETON

	AMothership* GetUniqueEnemyMothership();

private:

	static AMothership* UniqueEnemyMothership;

	int time1=0;
	int timemax = 8;

public:

	

	//PATRON BUILDER

	UPROPERTY(EditAnywhere, Category = "Nave Enemiga Patron Builder")
	class ANaveEnemigaEspecializada* NaveEnemigaEspecializadaBuilder;

	UPROPERTY(EditAnywhere, Category = "Nave Enemiga Patron Builder")
	class ANaveDirector* Director1;	

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

	//template<typename T>
	//T SpawnShip();
};



//template<typename T>
//inline T ASpaceInvadersGameModeBase::SpawnShip()
//{
//	GetWorld()->SpawnActor<T>(FVector(400, -400, 100), FRotator::ZeroRotator);
//	return ();
//}
//
//template<typename T>
//inline T ASpaceInvadersGameModeBase::CrearNave()
//{
//	const FVector MoveDirection = FVector(100, 150, 0.f)//Coordenadas donde se va a posicionar
//		const FRotator FireRotation = MoveDirection.Rotation();;//Le ponemos Zero Rotator porque no va tener rotacion
//	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
//	UWorld* const World = GetWorld();
//
//	if (World != nullptr)
//	{
//		auto NewEnemySpaceship = World->SpawnActor<T>(SpawnLocation, FireRotation);
//		return NewEnemySpaceship;
//	}
//
//	return T();
//}