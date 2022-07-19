// Fill out your copyright notice in the Description page of Project Settings.


#include "KapsuleWormHole.h"

AKapsuleWormHole::AKapsuleWormHole()
{
	PrimaryActorTick.bCanEverTick = true;
	Nombre = "WormHole";
	TipoCapsula = "WormHole";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> KapsuleM2(TEXT("/Game/TwinStick/Meshes/SM_Ball.SM_Ball"));
	KapsuleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KAPSULEH"));
	
	KapsuleMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	KapsuleMeshComponent->SetupAttachment(RootComponent);

	//static ConstructorHelpers::FObjectFinder<UMaterial> KapsuleMaterial2(TEXT("/Game/Materials/Background_01_Mat.Background_01_Mat"));
	//KapsuleMeshComponent->GetStaticMesh()->SetMaterial(0, KapsuleMaterial2.Object);

	SetActorScale3D(FVector(6.5f, 6.5f, 6.5f));
}

void AKapsuleWormHole::BeginPlay()
{
	Super::BeginPlay();
}

void AKapsuleWormHole::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Generando un agujero de gusano"));
}

void AKapsuleWormHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
