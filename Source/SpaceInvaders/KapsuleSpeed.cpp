// Fill out your copyright notice in the Description page of Project Settings.


#include "KapsuleSpeed.h"

AKapsuleSpeed::AKapsuleSpeed()
{
	PrimaryActorTick.bCanEverTick = true;
	Nombre = "MejorarVelocidad";
	TipoCapsula = "MejorarVelocidad";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> KapsuleM2(TEXT("/Game/TwinStick/Meshes/SM_Ball.SM_Ball"));
	KapsuleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KAPSULE2"));
	//KapsuleMeshComponent->SetStaticMesh(KapsuleM2.Object);
	//RootComponent = KapsuleMeshComponent;
	KapsuleMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	KapsuleMeshComponent->SetupAttachment(RootComponent);

	//static ConstructorHelpers::FObjectFinder<UMaterial> KapsuleMaterial2(TEXT("/Game/Materials/Background_01_Mat.Background_01_Mat"));
	//KapsuleMeshComponent->GetStaticMesh()->SetMaterial(0, KapsuleMaterial2.Object);

	/*RootComponent = KapsuleMeshComponent;
	SetActorScale3D(FVector(2.5f, 2.5f, 2.5f));*/
	SetActorScale3D(FVector(5.f, 5.f, 5.f));
}

void AKapsuleSpeed::BeginPlay()
{
	Super::BeginPlay();

}

void AKapsuleSpeed::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Generando una capsula que aumenta velocidad de la nave"));

}

void AKapsuleSpeed::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
