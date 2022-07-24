// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorKapsuleConcrete1.h"
#include "KapsuleSpeed.h"
#include "KapsuleGun.h"
#include "KapsuleMultiGun.h"

AKapsule* AGeneratorKapsuleConcrete1::FabricarCapsula(FString NombreTipoCapsula)
{
	
	int coord1 = FMath::RandRange(1, 200);
	int coord2 = FMath::RandRange(200, 300);
	int coord3 = FMath::RandRange(301, 450);

	const FVector LocationE = FVector(coord1, coord2, 50);
	const FRotator RotationE = FRotator(0, 0, 0);

	const FVector LocationF = FVector(coord2, coord1, 50);
	const FRotator RotationF = FRotator(0, 0, 0);

	const FVector LocationG = FVector(coord3, coord3, 50);
	const FRotator RotationG = FRotator(0, 0, 0);

	if (NombreTipoCapsula.Equals("MejorarVelocidad"))
	{
		return GetWorld()->SpawnActor<AKapsuleSpeed>(AKapsuleSpeed::StaticClass(), LocationE,RotationE);

	}
	else if(NombreTipoCapsula.Equals("MejorarArma"))

	{
		return GetWorld()->SpawnActor<AKapsuleGun>(AKapsuleGun::StaticClass(), LocationF, RotationE);

	}
	else if (NombreTipoCapsula.Equals("SuperArma"))
	{
		return GetWorld()->SpawnActor<AKapsuleMultiGun>(AKapsuleMultiGun::StaticClass(), LocationG, RotationE);
	}
	else return nullptr;
}
