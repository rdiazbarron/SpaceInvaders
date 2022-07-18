// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryActor.h"
#include "RandomMovementComponent.h"

AInventoryActor::AInventoryActor():Super()
{
	PrimaryActorTick.bCanEverTick = true;
	CapsuleMovement = CreateDefaultSubobject<URandomMovementComponent>(TEXT("CapsuleMovement"));
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	Nombre = "MejorarVelocidad";
	
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
	
}

void AInventoryActor::BeginPlay()
{

}

void AInventoryActor::Tick(float DeltaTime)
{
	
}

void AInventoryActor::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	
}

void AInventoryActor::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}
