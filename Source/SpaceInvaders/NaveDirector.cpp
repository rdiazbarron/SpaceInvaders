// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveDirector.h"
#include "NaveEnemigaProductoBase.h"

// Sets default values
ANaveDirector::ANaveDirector()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANaveDirector::SetNaveEnemigaBuilder(AActor* Builder)
{
	NaveEnemigaBuilder = Cast<INaveEnemigaBuilder>(Builder);
	if (!NaveEnemigaBuilder)
	{
		UE_LOG(LogTemp, Error, TEXT("BuildNaveEnemiga() : NaveEnemigaBuilder es null, inicialize correctamente clase previamente"));
		return;
	}
	
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Blue, TEXT("Nave creada correctamente"));

}

void ANaveDirector::BuildNaveEnemiga()
{
	if (!NaveEnemigaBuilder)
	{
		UE_LOG(LogTemp, Error, TEXT("BuildNaveEnemiga() : NaveEnemigaBuilder es null, inicialize correctamente clase previamente"));
		return;
	}
	NaveEnemigaBuilder->BuildSistemaAtaque();
	NaveEnemigaBuilder->BuildSistemaEstructural();
	NaveEnemigaBuilder->BuildSistemaMovimiento();
}
ANaveEnemigaProductoBase* ANaveDirector::getNaveEnemiga()
{
	if (NaveEnemigaBuilder) 
	{
		return NaveEnemigaBuilder->getNaveEnemigaProductoBase();
	}
	UE_LOG(LogTemp, Error, TEXT("getNaveEnemiga() retorna null"));
	return nullptr;
}


// Called to bind functionality to input
//void ANaveDirector::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}


// Called when the game starts or when spawned
void ANaveDirector::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}