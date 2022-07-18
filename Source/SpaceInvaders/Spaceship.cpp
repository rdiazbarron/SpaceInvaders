// Fill out your copyright notice in the Description page of Project Settings.


#include "Spaceship.h"
#include "Components/StaticMeshComponent.h"

#include "UObject/ConstructorHelpers.h"
#include "Engine/CollisionProfile.h"

const FName ASpaceship::MoveForwardBinding("MoveForward");
const FName ASpaceship::MoveRightBinding("MoveRight");
const FName ASpaceship::FireBinding("Fire");

// Sets default values

ASpaceship::ASpaceship()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	PrimaryActorTick.bCanEverTick = true;

	SpaceshipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpaceshipMesh"));
	

	SpaceshipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	SpaceshipMeshComponent->SetStaticMesh(ShipMesh.Object);
	RootComponent = SpaceshipMeshComponent;
	SpaceshipMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	contador = 0;
}

// Called when the game starts or when spawned
void ASpaceship::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceship::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*if (contador > 500) {

		auto Mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
		SpaceshipMeshComponent->SetStaticMesh(Mesh.Object);
		GetWorld()->SpawnActor<Mesh>(FVector(100, 100, 50), FRotator(180, 50, 50));
		contador++;
	}*/

}

// Called to bind functionality to input
void ASpaceship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

