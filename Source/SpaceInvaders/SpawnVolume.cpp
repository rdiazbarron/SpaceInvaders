// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnVolume.h"
#include "Components/BoxComponent.h"
#include <iostream>
#include <random>


#include "EnemySpaceship2.h"
using namespace std;
// Sets default values
ASpawnVolume::ASpawnVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    WhereToSpawn= CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
    RootComponent = WhereToSpawn;
    
}

// Called when the game starts or when spawned
void ASpawnVolume::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnVolume::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (SpawnClasses.Num() <= 0)
    {
        return;
    }


    const int Index = FMath::RandRange(0, SpawnClasses.Num() - 1);

    SpawnCoolDown = SpawnCoolDown + DeltaTime;

    if (SpawnCoolDown >= NextSpawnCoolDown)
    {
        FVector Location = WhereToSpawn->GetComponentLocation();
        float Y = WhereToSpawn->GetScaledBoxExtent().Y;
        Location.Y = FMath::RandRange(Location.Y - Y, Location.Y + Y);
        

        SpawnCoolDown = 0.0f;
        //reinicia el valor a cero para que vuelva a cargar la siguiente nave


        FRotator Rotation = GetActorRotation();
        Rotation.Pitch = 180.0;//rotacion del actor a 180` no aparece volcado
        GetWorld()->SpawnActor(SpawnClasses[Index], &Location, &Rotation);
        //Va engendrando segun el indice 

        //GetWorld()->GetTimerManager().SetTimer(EnemyTimer, this, &ASpawnVolume::EnemyTimer, TiempoVidaEnemigo, true);
       
    }

}

//void ASpawnVolume::EnemyTimer()
//{
// this->Destroy
//}
//
