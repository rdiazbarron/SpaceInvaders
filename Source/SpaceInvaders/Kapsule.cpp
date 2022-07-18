// Fill out your copyright notice in the Description page of Project Settings.


#include "Kapsule.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/CollisionProfile.h"
#include "CapsuleMovementComponent.h"
// Sets default values

AKapsule::AKapsule()
{
	PrimaryActorTick.bCanEverTick = true;
	

	KapsuleMovement = CreateDefaultSubobject<UCapsuleMovementComponent>(TEXT("KapsuleMovement"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> KapsuleM(TEXT("/Game/TwinStick/Meshes/SM_Ball.SM_Ball"));
	KapsuleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KAPSULE"));
	KapsuleMeshComponent->SetStaticMesh(KapsuleM.Object);
	//KapsuleMeshComponent->SetupAttachment(RootComponent);
	
	
	KapsuleMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	KapsuleMeshComponent->SetupAttachment(RootComponent);
	//static ConstructorHelpers::FObjectFinder<UMaterial> KapsuleMaterial(TEXT("/Game/Materials/m_EnemyLaserBolt.m_EnemyLaserBolt"));
	//KapsuleMeshComponent->GetStaticMesh()->SetMaterial(0, KapsuleMaterial.Object);
	
	
	SetActorScale3D(FVector(3.2f, 3.2f, 3.2f));
	KapsuleMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	SetActorEnableCollision(true);


}

// Called when the game starts or when spawned
void AKapsule::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKapsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AKapsule::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

// Called to bind functionality to input
void AKapsule::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AKapsule::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Generando la capsula %s"), *GetNombre()));
}

void AKapsule::Cargar()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Se estan cargado los elementos de la capsula")));
}

void AKapsule::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}