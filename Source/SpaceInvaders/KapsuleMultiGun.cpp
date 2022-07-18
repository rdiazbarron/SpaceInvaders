// Fill out your copyright notice in the Description page of Project Settings.


#include "KapsuleMultiGun.h"

AKapsuleMultiGun::AKapsuleMultiGun()
{
	PrimaryActorTick.bCanEverTick = true;
	Nombre = "SuperArma";
	TipoCapsula = "SuperArma";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> KapsuleM2(TEXT("/Game/TwinStick/Meshes/SM_Ball.SM_Ball"));
	KapsuleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KAPSULE3"));
	//KapsuleMeshComponent->SetStaticMesh(KapsuleM2.Object);
	//KapsuleMeshComponent->SetupAttachment(RootComponent);
	//RootComponent = KapsuleMeshComponent;
	KapsuleMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	KapsuleMeshComponent->SetupAttachment(RootComponent);
	SetActorScale3D(FVector(5.f, 5.f, 5.f));
}

void AKapsuleMultiGun::BeginPlay()
{
	Super::BeginPlay();

}

void AKapsuleMultiGun::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, TEXT("Generando una capsula que dota de triple disparo a la nave"));

}

void AKapsuleMultiGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
