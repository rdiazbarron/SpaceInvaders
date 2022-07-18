// Fill out your copyright notice in the Description page of Project Settings.


#include "KapsuleGun.h"

AKapsuleGun::AKapsuleGun()
{
	PrimaryActorTick.bCanEverTick = true;
	Nombre = "MejorarArma";
	TipoCapsula = "MejorarArma";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> KapsuleM1(TEXT("/Game/TwinStick/Meshes/SM_Ball.SM_Ball"));
	KapsuleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KAPSULE1"));
	//KapsuleMeshComponent->SetStaticMesh(KapsuleM1.Object);
	//KapsuleMeshComponent->SetupAttachment(RootComponent);
	//RootComponent = KapsuleMeshComponent;
	KapsuleMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	KapsuleMeshComponent->SetupAttachment(RootComponent);
	//static ConstructorHelpers::FObjectFinder<UMaterial> KapsuleMaterial1(TEXT("/Game/Materials/m_LaserBolt.m_LaserBolt"));
	//KapsuleMeshComponent->GetStaticMesh()->SetMaterial(0, KapsuleMaterial1.Object);

	//RootComponent = KapsuleMeshComponent;
	SetActorScale3D(FVector(5.f, 5.f, 5.f));
}

void AKapsuleGun::BeginPlay()
{
	Super::BeginPlay();

}

void AKapsuleGun::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Emerald, TEXT("Generando una capsula que aumenta velocidad de disparo"));
}

void AKapsuleGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
