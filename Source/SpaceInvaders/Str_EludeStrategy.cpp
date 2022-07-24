// Fill out your copyright notice in the Description page of Project Settings.


#include "Str_EludeStrategy.h"
#include "EnemySpaceship2.h"

// Sets default values
AStr_EludeStrategy::AStr_EludeStrategy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MovimientoEnemigo = CreateDefaultSubobject<URandomMovementComponent>(TEXT("RandomMovement5"));
}

// Called when the game starts or when spawned
void AStr_EludeStrategy::BeginPlay()
{
	Super::BeginPlay();

}
// Called every frame
void AStr_EludeStrategy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStr_EludeStrategy::MovementStrategy()
{
	EnemigoSinEstrategia->SetMovimiento(MovimientoEnemigo);
}


