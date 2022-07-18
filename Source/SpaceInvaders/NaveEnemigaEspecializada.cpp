// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspecializada.h"
#include "Projectile.h"
#include "RandomMovementComponent.h"
#include "EnemyProjectile.h"


// Sets default values
ANaveEnemigaEspecializada::ANaveEnemigaEspecializada()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipEnemyAsset1(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
	MeshAsignado = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
	MeshAsignado->SetStaticMesh(ShipEnemyAsset1.Object);

	PuntoBala = CreateDefaultSubobject<USceneComponent>(TEXT("PuntoBala"));
	PuntoBala->AttachToComponent(MeshAsignado, FAttachmentTransformRules::KeepRelativeTransform);
	
	MovimientoEnemigo = CreateDefaultSubobject<URandomMovementComponent>(TEXT("RandomMovement4"));

	DistanceShoot = FVector(100.f, 0.f, 0.f);
	TimeToSpawnShoot = 2.f;
	ShootTime = 0;

}

void ANaveEnemigaEspecializada::BuildSistemaEstructural()
{
	
	if (!NaveProductoBase){
		UE_LOG(LogTemp, Error, TEXT("NaveEnemigaProductoBase:BuildSistemaEstructural es null, inicialize correctamente clase previamente"));
		return;
	}
	else 
	{
		NaveProductoBase->SetMeshEnemigo(MeshAsignado);
	}
		
}

void ANaveEnemigaEspecializada::BuildSistemaAtaque()
{
	if (!NaveProductoBase) {
		UE_LOG(LogTemp, Error, TEXT("NaveEnemigaProductoBase::BuildSistemaAtaque es null, inicialize correctamente clase previamente"));
		return;
	}
	else
	{
		NaveProductoBase->SetPuntoGeneracionBala(PuntoBala);
	}
}

void ANaveEnemigaEspecializada::BuildSistemaMovimiento()
{
	if (!NaveProductoBase)
	{
		UE_LOG(LogTemp, Error, TEXT("NaveEnemigaProductoBase: BuildSistemMovimiento es null, inicialize correctamente clase previamente"));
		return;
	}
	NaveProductoBase->SetMovimiento(MovimientoEnemigo);
}

ANaveEnemigaProductoBase* ANaveEnemigaEspecializada::getNaveEnemigaProductoBase()
{
	return NaveProductoBase;
}

// Called when the game starts or when spawned
void ANaveEnemigaEspecializada::BeginPlay()
{
	Super::BeginPlay();

	//const FVector Location = FVector(150, 0, 50);
	//const FRotator Rotation = FRotator(180, 0, 180);
	//NaveProductoBase = GetWorld()->SpawnActor<ANaveEnemigaProductoBase>(ANaveEnemigaEspecializada::StaticClass(),Location,Rotation);
	//NaveProductoBase->AttachToActor(this,FAttachmentTransformRules::KeepRelativeTransform);
}


// Called every frame
void ANaveEnemigaEspecializada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ShootTime += DeltaTime;
	if (ShootTime >= TimeToSpawnShoot) {
		ShootTime = 0.0f;
		const FVector MoveDirectionBullet = FVector(-1.f, 0.f, 0.f);
		const FRotator FireRotation = MoveDirectionBullet.Rotation();
		const FVector SpawnLocation = GetActorLocation()+ FireRotation.RotateVector(DistanceShoot);

		UWorld* const World = GetWorld();
		if (World != nullptr)
			World->SpawnActor<AEnemyProjectile>(SpawnLocation, FireRotation);
	}
}

 //Called to bind functionality to input
void ANaveEnemigaEspecializada::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

