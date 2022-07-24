//Copyright Epic Games, Inc. All Rights Reserved.


#include "SpaceInvadersGameModeBase.h"
#include "EnemySpaceship2.h"
#include "Mothership.h"
#include <iostream>
#include "NaveEnemigaProductoBase.h"
#include "Kapsule.h"
#include "NaveDirector.h"
#include "GeneratorKapsuleConcrete1.h"
#include "GeneratorKapsule1.h"

#include <random>
#include "EnemySpaceship2.h"

#include "MyFlyingSpaceship.h"
#include "Obs_Enemigo.h"
#include "T_FreakyAllen.h"
#include "T_ClockTower.h"
#include "Str_EludeStrategy.h"




AMothership* ASpaceInvadersGameModeBase::UniqueEnemyMothership(nullptr);
using namespace std;

ASpaceInvadersGameModeBase::ASpaceInvadersGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

//AMothership* ASpaceInvadersGameModeBase::GetUniqueEnemyMothership()
//{
//	if (UniqueEnemyMothership == nullptr)
//	{
//		UniqueEnemyMothership = GetWorld()->SpawnActor<AMothership>(FVector(600, 0, 50), FRotator(180,0,180));
//	}
//	return UniqueEnemyMothership;
//}

void ASpaceInvadersGameModeBase::BeginPlay()
{//-----------------PATRON OBSERVER(libro)-----------------//

	/*AT_ClockTower* ClockTower = GetWorld()->SpawnActor<AT_ClockTower>(AT_ClockTower::StaticClass());
	AT_FreakyAllen* FreakyAllen = GetWorld()->SpawnActor<AT_FreakyAllen>(AT_FreakyAllen::StaticClass());
	FreakyAllen->SetClockTower(ClockTower);

	ClockTower->SetTimeOfDay("Morning");
	ClockTower->SetTimeOfDay("Midday");
	ClockTower->SetTimeOfDay("Evening");*/

	//---------------PATRON BUILDER---------------//

	/*const FVector Location = FVector(150, 0, 50);
	const FRotator Rotation = FRotator(180, 0, 180);

	NaveEnemigaEspecializadaBuilder = GetWorld()->SpawnActor<ANaveEnemigaEspecializada>(Location,Rotation);

	Director1 = GetWorld()->SpawnActor<ANaveDirector>(ANaveDirector::StaticClass());
	Director1->SetNaveEnemigaBuilder(NaveEnemigaEspecializadaBuilder);
	Director1->BuildNaveEnemiga();

	ANaveEnemigaProductoBase* NaveEnemiga = Director1->getNaveEnemiga();*/
	


	//---------------PATRON SINGLETON--------------//
	// 
	// 
	//AMothership* M3 = ASpaceInvadersGameModeBase::GetUniqueEnemyMothership();
	//AMothership* M4 = ASpaceInvadersGameModeBase::GetUniqueEnemyMothership();
	// 
	

	//-------------- PATRON  OBSERVER-----------------------//
	//Engendra la Torre de control(Mi nave)
	const FVector LocationPlayer0 = FVector(-200.f, 100.f, 50.f);
	const FRotator RotationPlayer0 = FRotator(0.f, 0.f, 0.f);

	AMyFlyingSpaceship* MiNaveJugador = GetWorld()->SpawnActor<AMyFlyingSpaceship>(LocationPlayer0, RotationPlayer0);

	//const FVector LocationEnemy1 = FVector(-300.f, -300.f, 50.f);
	//const FRotator RotationEnemy1 = FRotator(0.f, 0.f, 0.f);

	//AObs_Enemigo* NaveEnemigaObserver = GetWorld()->SpawnActor<AObs_Enemigo>(LocationEnemy1, RotationEnemy1);
	//NaveEnemigaObserver->setTorreControl(MiNaveJugador);
	
	
	//-----------------PATRON STRATEGY----------------------//
	const FVector LocationEnemy1 = FVector(150.f, 150.f, 50.f);
	const FRotator RotationEnemy1 = FRotator(0.f, 0.f, 0.f);

	AEnemySpaceship2* NaveEnemy = GetWorld()->SpawnActor<AEnemySpaceship2>(LocationEnemy1, RotationEnemy1);

	AStr_EludeStrategy* EludeStrategy = GetWorld()->SpawnActor<AStr_EludeStrategy>(AStr_EludeStrategy::StaticClass());
	NaveEnemy->AlterManeuvers(EludeStrategy);
	
}
//---------------------PATRON FACTORY METHOD-------------------------//
void ASpaceInvadersGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	float ProbabilidadAparicionCapsula = FMath::RandRange(0, 50000);

		if (ProbabilidadAparicionCapsula < 33.3f) 
		{
			AGeneratorKapsule1* GeneradorCapsula = GetWorld()->SpawnActor<AGeneratorKapsuleConcrete1>(AGeneratorKapsuleConcrete1::StaticClass());
			AKapsule* Capsula = GeneradorCapsula->GetCapsula("MejorarArma");
		}
		else if (ProbabilidadAparicionCapsula > 33.3f && ProbabilidadAparicionCapsula < 66.6f) {

			AGeneratorKapsule1* GeneradorCapsula = GetWorld()->SpawnActor<AGeneratorKapsuleConcrete1>(AGeneratorKapsuleConcrete1::StaticClass());
			AKapsule* Capsula = GeneradorCapsula->GetCapsula("MejorarVelocidad");
			
		}
		else if (ProbabilidadAparicionCapsula > 66.6f && ProbabilidadAparicionCapsula < 100.f) {

			AGeneratorKapsule1* GeneradorCapsulaArma = GetWorld()->SpawnActor<AGeneratorKapsuleConcrete1>(AGeneratorKapsuleConcrete1::StaticClass());
			AKapsule* Capsula = GeneradorCapsulaArma->GetCapsula("SuperArma");
		}

	
}

