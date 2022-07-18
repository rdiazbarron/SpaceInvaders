// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorKapsule1.h"
#include "Kapsule.h"

// Sets default values
AGeneratorKapsule1::AGeneratorKapsule1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeneratorKapsule1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeneratorKapsule1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


AKapsule* AGeneratorKapsule1::GetCapsula(FString TipoCapsula)
{
	AKapsule* capsula = FabricarCapsula(TipoCapsula);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Fabricando capsula %s"), *capsula->GetNombre()));
	capsula->Generar();
	capsula->Cargar();
	return capsula;
}
