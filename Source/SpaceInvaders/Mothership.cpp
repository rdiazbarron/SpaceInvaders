//Fill out your copyright notice in the Description page of Project Settings.


#include "Mothership.h"
#include "EnemySpaceship2.h"
#include "Bomb.h"
#include "Projectile.h"
#include "RandomMovementComponent.h"

//AEnemySpaceship2* AMothership::UniqueMothership(nullptr);

// Sets default values

AMothership::AMothership()
{
	
	PrimaryActorTick.bCanEverTick = true;

	RandMove = CreateDefaultSubobject<URandomMovementComponent>(TEXT("RandomMovement30"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MothershipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	BulletSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BulletSpawnPoint3"));

	MothershipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mothership"));
	MothershipMeshComponent->SetStaticMesh(MothershipMesh.Object);
	MothershipMeshComponent->SetupAttachment(RootComponent);
	RootComponent = MothershipMeshComponent;
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));

	
	TimeElapsed = 0;

	FireRate = 5.0f;
	bCanFire = false;
	SetActorEnableCollision(false);


	GunOffset1 = FVector(100.f, 0.f, 0.f);
	GunOffset2 = FVector(100.f, 50.f, 0.f);
	GunOffset3 = FVector(100.f, 100.f, 0.f);
	GunOffset4 = FVector(100.f, -50.f, 0.f);
	GunOffset5 = FVector(100.f, -100.f, 0.f);

	

}

void AMothership::FireShot()
{

	UWorld* const World = GetWorld();
	if (World != nullptr) {

		
		const FRotator FireRotationEnemy = FVector(-3,0,0).Rotation();

		FVector SpawnLocation1 = GetActorLocation() + FireRotationEnemy.RotateVector(GunOffset1);
		World->SpawnActor <ABomb>(SpawnLocation1, FireRotationEnemy);
		FVector SpawnLocation2 = GetActorLocation() + FireRotationEnemy.RotateVector(GunOffset2);
		World->SpawnActor<ABomb>(SpawnLocation2, FireRotationEnemy);
		FVector SpawnLocation3 = GetActorLocation() + FireRotationEnemy.RotateVector(GunOffset3);
		World->SpawnActor<ABomb>(SpawnLocation3, FireRotationEnemy);
		FVector SpawnLocation4 = GetActorLocation() + FireRotationEnemy.RotateVector(GunOffset4);
		World->SpawnActor<ABomb>(SpawnLocation4, FireRotationEnemy);
		FVector SpawnLocation5 = GetActorLocation() + FireRotationEnemy.RotateVector(GunOffset5);
		World->SpawnActor<ABomb>(SpawnLocation5, FireRotationEnemy);
		
		//World->SpawnActor<ABomb>(SpawnLocation, FireRotation);
		////bulletcounter = bulletcounter + 1;
		//
		//FireRotation.Yaw = 120.f;
		//SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		//World->SpawnActor<ABomb>(SpawnLocation, FireRotation);

		//FireRotation.Yaw = 150.f;
		//SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		//World->SpawnActor<ABomb>(SpawnLocation, FireRotation);

		//FireRotation.Yaw = 210.f;
		//SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		//World->SpawnActor<ABomb>(SpawnLocation, FireRotation);

		//FireRotation.Yaw = 240.f;
		//SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		//World->SpawnActor<ABomb>(SpawnLocation, FireRotation);

	}
	bCanFire = false;
	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AMothership::ShotTimerExpired, FireRate);

	
}

void AMothership::ShotTimerExpired()
{
	bCanFire = true;
}



void AMothership::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMothership::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeElapsed = TimeElapsed + DeltaTime;
	SpawnCoolDown = SpawnCoolDown + DeltaTime;
	if (SpawnCoolDown >= NextSpawnCoolDown)
	{
		SpawnCoolDown = 0.0f;
		FireShot();
	}
}
