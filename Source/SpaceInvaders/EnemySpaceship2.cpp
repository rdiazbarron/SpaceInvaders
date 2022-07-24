// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpaceship2.h"
#include "Projectile.h"
#include "EnemyProjectile.h"
#include "Bomb.h"
#include "RandomMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"
#include "Engine/World.h"

AEnemySpaceship2::AEnemySpaceship2()
{
	//RandMove = CreateDefaultSubobject<URandomMovementComponent>(TEXT("RandomMovement"));

	BulletSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BulletSpawnPoint"));
	BulletSpawnPoint->SetupAttachment(RootComponent);

	MoveSpeed = 1.f;
	TimeElapsed = 0;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 3.0f;
	bCanFire = false;
	SetActorEnableCollision(true);

	InitialLifeSpan = 3;
}

void AEnemySpaceship2::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);

	TimeElapsed = TimeElapsed + DeltaTime;
	SpawnCoolDown = SpawnCoolDown + DeltaTime;
	if (SpawnCoolDown >= NextSpawnCoolDown)
	{
		SpawnCoolDown = 0.0f;
		FireShot();
	}

	if (flag == true && TimeElapsed > 30)
	{
		FString Message = FString::Printf(TEXT("Cantidad de balas disparada por enemigos es:, %d"), bulletcounter);
		GEngine->AddOnScreenDebugMessage(1, -1, FColor::Green, Message);
		UE_LOG(LogTemp, Warning, TEXT("Cantidad de balas: %d"), bulletcounter);
		flag = false;
	}
}

void AEnemySpaceship2::BeginPlay()
{
	Super::BeginPlay();
	/*const FVector LocationA = FVector(-150, -150, 50);
	const FRotator RotationX = FRotator(0, 0, 0);

	AEnemySpaceship2* Enem = GetWorld()->SpawnActor<AEnemySpaceship2>(LocationA, RotationX);
}*/
}

void AEnemySpaceship2::ShotTimerExpired()
{
	bCanFire = true;
}

void AEnemySpaceship2::ExploteAndDestroy()
{
	if (ShipExplosionEnemy)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
	}

	Destroy();
}

void AEnemySpaceship2::AlterManeuvers(IStr_EnemyStrategy* myBattleStrategy)
{
	EnemyStrategy = myBattleStrategy;
	//Log Error if the cast failed
	if (!EnemyStrategy)
	{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,TEXT("Invalid Cast! See Output log for more details"));UE_LOG(LogTemp, Error, TEXT("AlterManeuvers(): The Actor isnt a BattleShipStrategy! Are you sure that the Actor implements that interface?"));
	}

}

void AEnemySpaceship2::FireShot()
{
	bCanFire = true;
	//Si esta bien para disparar otra vez
	if (bCanFire == true) 
	{
		
		FRotator FireRotation = GetActorRotation();

		FireRotation.Yaw = 180.f;

		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			
			
			World->SpawnActor<AEnemyProjectile>(SpawnLocation, FireRotation);
			bulletcounter = bulletcounter + 1;
			
		}
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEnemySpaceship2::ShotTimerExpired, FireRate);
		
		bCanFire = false;
	}
}


